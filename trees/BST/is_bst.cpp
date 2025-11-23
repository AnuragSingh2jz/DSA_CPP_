#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

struct Node {
  int key;
  int left;
  int right;

  Node() : key(0), left(-1), right(-1) {}
  Node(int key_, int left_, int right_) : key(key_), left(left_), right(right_) {}
};

bool IsBSTUtil(const vector<Node>& tree, int nodeIndex, long long minKey, long long maxKey) {
  if (nodeIndex == -1) // empty subtree is always BST
    return true;

  const Node& node = tree[nodeIndex];

  if (node.key < minKey || node.key >= maxKey) // violation of BST properties
    return false;

  // Left subtree must have keys < node.key
  // Right subtree must have keys >= node.key (to handle duplicates on the right)
  return IsBSTUtil(tree, node.left, minKey, node.key) &&
         IsBSTUtil(tree, node.right, node.key, maxKey);
}

bool IsBinarySearchTree(const vector<Node>& tree) {
  if (tree.empty())
    return true; // Empty tree is always a BST

  return IsBSTUtil(tree, 0, std::numeric_limits<long long>::min(), std::numeric_limits<long long>::max());
}

int main() {
  int nodes;
  cin >> nodes;
  vector<Node> tree;
  for (int i = 0; i < nodes; ++i) {
    int key, left, right;
    cin >> key >> left >> right;
    tree.push_back(Node(key, left, right));
  }
  if (IsBinarySearchTree(tree)) {
    cout << "CORRECT" << endl;
  } else {
    cout << "INCORRECT" << endl;
  }
  return 0;
}
