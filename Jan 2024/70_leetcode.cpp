// 70. Climbing Stairs

// https://leetcode.com/problems/climbing-stairs/?envType=daily-question&envId=2024-01-18

class Solution {
public:
    int climbStairs(int n) {
        vector<int> v (n+1);

        v[0] =1;
        v[1] = 1;

        for(int i=2 ;i<n+1;i++)
            v[i] = v[i-1] + v[i-2];

        return v[n];
    }
};