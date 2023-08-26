//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
//#include <numeric>
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    bool isValidBST(TreeNode* root) {
//        inorder(root);
//        for (size_t i = 1; i < tree.size(); ++i) if (tree[i] <= tree[i - 1]) return false;
//        return true;
//    }
//private:
//    std::vector<int> tree;
//
//    void inorder(TreeNode* root) {
//        if (root != nullptr) {
//            inorder(root->left);
//            tree.push_back(root->val);
//            inorder(root->right);
//        }
//    }
//};
//
//int main() {
//    Solution obj;
//
//    TreeNode* ll = new TreeNode(1);
//    TreeNode* lr = new TreeNode(3);
//    TreeNode* rr = new TreeNode(8);
//    TreeNode* rl = new TreeNode(6);
//    TreeNode* l = new TreeNode(2, ll, lr);
//    TreeNode* r = new TreeNode(7, rl, rr);
//    TreeNode* head = new TreeNode(5, l, r);
//
//    std::cout << obj.isValidBST(head);
//    return 0;
//}
