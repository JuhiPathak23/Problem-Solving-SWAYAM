class Solution
{
public:
    bool isPossible(int a,int b)
    {
        //code here
        if((a == 1 && b == 2) || (a == 2 && b == 1) || (a == 2 && b == 3) || (a == 3 && b == 2)){
            return true;
        }
        return false;
    }
};

//1-preorder, 2-inorder, 3-postorder
