#include <bits/stdc++.h>

TreeNode<int>* bst(vector<int> &ans,int s,int e){

    if(s>e){

        return NULL;

    }

    int mid=s+(e-s)/2;

    TreeNode<int>* root=new TreeNode<int>(ans[mid]);

    root->left=bst(ans,s,mid-1);

    root->right=bst(ans,mid+1,e);

    return root;

}

TreeNode<int>* preOrderTree(vector<int> &preOrder){

    sort(preOrder.begin(),preOrder.end());

    return bst(preOrder,0,preOrder.size()-1);

}