// Problem: Diagonal Sum of a Matrix
// Platform: LeetCode
// Time Complexity: O(n * m) where n is the number of rows and m is the number of columns in the matrix
// Space Complexity: O(n * m) due to the input matrix

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int sum = 0;
        int mid;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat.size() % 2 != 0 && i == mat.size()/2 && j == mat[i].size()/2)
                {
                    mid = mat[i][j];
                    sum-=mid;
                }
                if(i == j)
                {
                    sum+=mat[i][j];
                }
                if(j == mat[i].size()-1-i)
                {
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};

