#pragma once

#include"com_datastruct.h"


bool isChildrenSymmetrical(TreeNode* pRoot1, TreeNode* pRoot2)
{
    if (!pRoot1 && !pRoot2)
    {
        return true;
    }
    else if (pRoot1 && pRoot2 && pRoot1->val == pRoot2->val)
    {
        return isChildrenSymmetrical(pRoot1->left, pRoot2->right) && isChildrenSymmetrical(pRoot1->right, pRoot2->left);  
    }
    else
    {
        return false;
    }
}

bool isSymmetrical(TreeNode* pRoot)
{
    if (!pRoot)
        return true;

    //if (pRoot && !pRoot->left && !pRoot->right)
    //    return true;
    //else if (pRoot && pRoot->left && pRoot->right)
    else
        return isChildrenSymmetrical(pRoot->left, pRoot->right);
    //else
    //    return false;
}

//{1,2,2,3,#,3}
void test_JZ28_isSymmetrical()
{
    TreeNode* Root = new TreeNode(1);

    TreeNode* Left = new TreeNode(2);
    TreeNode* Right = new TreeNode(2);

    TreeNode* Left_left = new TreeNode(3);
    TreeNode* Left_right = new TreeNode(4);
    TreeNode* Right_left = new TreeNode(4);
    TreeNode* Right_right = new TreeNode(3);

    Root->left = Left;
    Root->right = Right;

    Left->left = Left_left;
    Left->right = Left_right;
    Right->left = Right_left;
    Right->right = Right_right;

    bool res = isSymmetrical(Root);

    return;
}