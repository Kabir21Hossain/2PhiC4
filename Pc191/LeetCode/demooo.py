# import time
# import sys

# def print_lyrics():
#     lyrics = [
#         "Shama bujh bhi jaye to kya hain",
#         "Dhadkan ruk bhi jaye to kya hain",
#         "Itna kuch gaava diya hain tujhe paane ki khatir",
#         "Ab tu mil bhi jaye to kya hain",
#         "Jaane mein hi sukoon hain",
#         "kahi aur aage badh jaane mein hi valai hain",
#         "Magar yaad karenge kisi rooz",
#         "Kisi neyi bramhand ke kisi aur kone mein",
#         "Fir daur jayenge iss kahani ki kisi aur yaad mein"
#     ]

#     delays = [1.0, 0.1, 1.2, 0.9, 1.5, 1.3, 1.0, 0.9, 0.8]

#     print("hahahah, this is for you.........\n")
#     time.sleep(1.4)

#     for i, line in enumerate(lyrics):
#         for char in line:
#             sys.stdout.write(char)
#             sys.stdout.flush()
#             time.sleep(0.1)
#         print()
#         time.sleep(delays[i])

# print_lyrics()



# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from typing import Optional
from floor_bst import TreeNode


class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        hash=set()
        def dfs(node,k):
            if not node:
                return False
            
            if k-node.val in hash:
                return True
            
            hash.add(node.val)

            return dfs(node.left,k) or dfs(node.right,k)
            
        return dfs(root,k)
