#include <bits/stdc++.h>
using namespace std;



class TreeNode
{
	public:
    int val;
    TreeNode*left;
    TreeNode*right;

    TreeNode(){
        this->val=0;
        this->left=NULL;
        this->right=NULL;
    }

    TreeNode(int x)
    {
        this->val=x;
        this->left=NULL;
        this->right=NULL;
    }

    TreeNode(int x,TreeNode*left,TreeNode*right){
        this->val=x;
        this->left-left;
        this->right=right;
    }
};


TreeNode * buildTree(vector<int>&preorder)
{

}




// { Driver Code Starts.

int main()
{
    vector<int>preorder = {8,5,1,7,10,12};
    TreeNode* root=NULL;
    root=buildTree(preorder);

	return 0;
}
