Find max product in the array
String Anagram Question
LinkedList cycle detection
Spiral Traversal of a matrix
Traversal question with respect to tree
Triplet sum Question
Right view of Binary Tree
https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1/#
https://practice.geeksforgeeks.org/problems/check-for-bst/1/
https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1/
print LIS from a given array


length of LCS 

//code 
int help(int i, int j,string &text1, string &text2,vector<vector<int>> &dp){
        if(i<0 || j< 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i] == text2[j]) return dp[i][j] = 1+help(i-1,j-1,text1,text2,dp);
        return dp[i][j] = max(help(i-1,j,text1,text2,dp),help(i,j-1,text1,text2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> dp(n,vector<int>(m+1,-1));
        return help(n-1,m-1,text1,text2,dp);
        
    }
Space optimise LCS
print all possible LCS
