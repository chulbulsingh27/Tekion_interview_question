https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1

//code
class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void inorder(Node *root, int k,int &count, int &res){
        if(root == NULL || count >= k) return;
        inorder(root->left,k,count,res);
        count++;
        if(count == k){
            res = count;
            return;
        }
        inorder(root->right,k,count,res);
    }
    int KthSmallestElement(Node *root, int k) {
        int count = 0, res = -1;
        inorder(root,k,count,res);
        return res;
    }
};
