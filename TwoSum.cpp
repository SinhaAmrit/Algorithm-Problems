/*
* @author : Amrit Sinha
* Date : October 20, 2020
* GitHub : /SinhaAmrit
* CodePen : /SinhaAmrit
* Facebook : /codiizone
* Instagram : /codiizone
* Website : https://codiizone.blogspot.com
* Topic : Two Sum||LeetCode [1]
* Problem : Given an array of integers nums 
* and an integer target, return indices of the
* two numbers such that they add up to target.
* You may assume that each input would have exactly 
* one solution, and you may not use the same element
* twice. You can return the answer in any order.
* Example : 
* Input: nums = [2,7,11,15], target = 9
* Output: [0,1]
* Output: Because nums[0] + nums[1] == 9, 
* we return [0, 1].
* Constraints:
* 2 <= nums.length <= 105
* -109 <= nums[i] <= 109
* -109 <= target <= 109
* Only one valid answer exists.
*/
#include<iostream>
#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
            if(prevMap.count(diff)) 
                return { prevMap[diff], i };
            prevMap[nums[i]] = i;
        }
        return {};
    }
};
