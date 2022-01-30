// 剑指 Offer 03. 数组中重复的数字
// 找出数组中重复的数字。
// 在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，
// 但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

#include <vector>
#include <unordered_map>
#include <iostream>


using namespace std;

class Solution 
{
public:
    int findRepeatNumber(vector<int>& nums) 
    {
        int nSize=nums.size();
        int i=0;
        while (i<nSize)
        {
            if(i==nums[i])
            {
                i++;
                continue;
            }
            else if (nums[nums[i]]==nums[i])
            {
                return nums[i];
            }
            swap(nums[i],nums[nums[i]]);
        }
        return -1;
    }
};

class Solution_2
{
public:
    int findRepeatNumber(vector<int>& nums) 
    {
        unordered_map<int,bool> unorderdmap;
        for (int i : nums)
        {
            if(unorderdmap[i])
            {
                return i;
            }
            else
            {
                unorderdmap[i]=true;
            }
        }
        return -1;
    }
};