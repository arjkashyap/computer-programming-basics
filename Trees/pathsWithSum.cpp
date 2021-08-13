/*
	For a given binary tree:
		we need to find the number of paths that have the sum 
		equal to a given target sum.

*/

class Solution {
public:
    void dfs(TreeNode* cur, int pathsumprefix, int targetSum, int& total,map<int, int>& val2count ){
        int pathsum = pathsumprefix + cur->val;
        if (val2count.find(pathsum-targetSum) != val2count.end() ) {
            total += (val2count[pathsum-targetSum]);
        }
        
        val2count[pathsum]++;
        
        if(cur->left){
            dfs(cur->left, pathsum, targetSum, total, val2count);
        }
        if(cur->right){
            dfs(cur->right, pathsum, targetSum, total, val2count);
        }
        val2count[pathsum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        int total = 0;
        map<int, int> val2count; 
        val2count[0] = 1;
        if(root)
            dfs(root, 0, targetSum, total, val2count);
        return total;
    }
};