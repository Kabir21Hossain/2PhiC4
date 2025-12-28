class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    # ---------------- INSERTIONS ----------------

    def insert_at_end(self, val):
        new_node = ListNode(val)

        if not self.head:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node

    def insert_at_begin(self, val):
        new_node = ListNode(val)
        new_node.next = self.head
        self.head = new_node

    def insert_at_any(self, val, pos):
        if pos == 0:
            self.insert_at_begin(val)
            return

        if not self.head:
            self.insert_at_end(val)
            return

        new_node = ListNode(val)
        temp = self.head
        current_pos = 0

        while temp.next and current_pos < pos - 1:
            temp = temp.next
            current_pos += 1

        new_node.next = temp.next
        temp.next = new_node

    # ---------------- UTILITIES ----------------

    def length(self):
        temp = self.head
        sz = 0

        while temp:
            sz += 1
            temp = temp.next

        return sz

    def traverse(self):
        temp = self.head
        while temp:
            print(temp.val, end="->")
            temp = temp.next
        print("None")

    def search(self, val):
        temp = self.head
        index = 0

        while temp:
            if temp.val == val:
                return True, index
            temp = temp.next
            index += 1

        return False, -1

    # ---------------- DELETION ----------------

    def delete(self, val):
        if not self.head:
            return

        if self.head.val == val:
            self.head = self.head.next
            return

        temp = self.head
        while temp.next and temp.next.val != val:
            temp = temp.next

        if temp.next:
            temp.next = temp.next.next

    # ---------------- ADVANCED OPERATIONS ----------------

    def reverse(self):
        prev = None
        cur = self.head

        while cur:
            nxt = cur.next
            cur.next = prev
            prev = cur
            cur = nxt

        self.head = prev

    def middle(self):
        if not self.head:
            return None

        slow = fast = self.head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        return slow.val

    def detect_cycle(self):
        slow = fast = self.head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True

        return False

    # ---------------- MERGE SORT ----------------

    @staticmethod
    def merge_sorted_list(l1, l2):
        dummy = tail = ListNode(0)
        h1, h2 = l1.head, l2.head

        while h1 and h2:
            if h1.val < h2.val:
                tail.next = h1
                h1 = h1.next
            else:
                tail.next = h2 
                h2 = h2.next
            tail = tail.next

        tail.next = h1 if h1 else h2
        return dummy.next

    @staticmethod
    def merge_sort(head):
        if not head or not head.next:
            return head

        prev = None
        slow = fast = head

        while fast and fast.next:
            prev = slow
            slow = slow.next
            fast = fast.next.next

        prev.next = None  # split

        left = LinkedList.merge_sort(head)
        right = LinkedList.merge_sort(slow)

        dummy = tail = ListNode(0)

        while left and right:
            if left.val < right.val:
                tail.next = left
                left = left.next
            else:
                tail.next = right
                right = right.next
            tail = tail.next

        tail.next = left if left else right
        return dummy.next
    
    


# ---------------- MAIN TEST ----------------

if __name__ == "__main__":
    l = LinkedList()
    l.insert_at_end(3)
    l.insert_at_end(1)
    l.insert_at_end(30)
    l.insert_at_end(2)
    l.insert_at_end(4)
    l.insert_at_end(0)
    l.insert_at_end(-5)

    print("Original List:")
    l.traverse()

    l.head = LinkedList.merge_sort(l.head)

    print("Sorted List:")
    l.traverse()

    print("Length:", l.length())
    print("Middle:", l.middle())
    print("Search 30:", l.search(30))

    l.reverse()
    print("Reversed:")
    l.traverse()
