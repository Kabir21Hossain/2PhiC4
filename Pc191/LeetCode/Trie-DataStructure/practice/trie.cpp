#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }

    ~TrieNode() {
        for (auto& pair : children) {
            delete pair.second;
        }
    }
};

class Trie {
private:
    TrieNode* root;

    // Helper recursive function for deletion
    bool deleteHelper(TrieNode* node, const string& word, int index) {
        if (index == word.length()) {
            // Word not found
            if (!node->isEndOfWord) {
                return false;
            }
            node->isEndOfWord = false;
            // Can delete this node only if it has no children
            return node->children.empty();
        }

        char ch = word[index];
        auto it = node->children.find(ch);
        if (it == node->children.end()) {
            return false; // Word doesn't exist
        }

        TrieNode* child = it->second;
        bool shouldDeleteChild = deleteHelper(child, word, index + 1);

        // If child subtree is no longer needed, delete it
        if (shouldDeleteChild) {
            delete child;
            node->children.erase(ch);
            // Return true if current node has no children and is not end of another word
            return node->children.empty() && !node->isEndOfWord;
        }

        return false;
    }

public:
    Trie() {
        root = new TrieNode();
    }

    ~Trie() {
        delete root;
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
        node->isEndOfWord = true;
    }

    bool search(const string& word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (node->children.find(ch) == node->children.end()) {
                return false;
            }
            node = node->children[ch];
        }
        return node->isEndOfWord;
    }

    bool startsWith(const string& prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            if (node->children.find(ch) == node->children.end()) {
                return false;
            }
            node = node->children[ch];
        }
        return true;
    }

    void remove(const string& word) {  // renamed to 'remove' to avoid conflict with keyword
        if (!word.empty()) {
            deleteHelper(root, word, 0);
        }
    }
};

// ------------------- Test -------------------
int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("app");
    trie.insert("banana");
    trie.insert("application");
    trie.insert("and");
    trie.insert("ant");
    trie.insert("egg");

    cout << boolalpha;  // Print true/false instead of 1/0

    cout << trie.search("apple") << endl;       // true
    cout << trie.search("kabir") << endl;       // false
    cout << trie.startsWith("ap") << endl;      // true

    cout << "\nAfter deleting 'app':\n";
    trie.remove("app");

    cout << trie.search("app") << endl;         // false
    cout << trie.search("apple") << endl;       // true
    cout << trie.search("application") << endl; // true
    cout << trie.startsWith("ap") << endl;      // true (because apple and application exist)

    return 0;
}