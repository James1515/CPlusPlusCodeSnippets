/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        bool valt = false; //turns true if at end of search
        
        int size = nums.size(); //obtain size from vector
        
        vector<int> myvector;
        
      //  for(i=0;i<nums.size()-1;i++)
      //  for(j=i+1;j<nums.size();j++)
        
        for(int i = 0; i < nums.size()-1; ++i)
        {
             for(int j = i+1; j < nums.size(); ++j)
             {
                if((nums[i] + nums[j]) == target)
                {
                    myvector.push_back(i);
                    myvector.push_back(j);
                    return myvector;
                }
             }
            
        }
        
        return myvector;
        
    }
};
