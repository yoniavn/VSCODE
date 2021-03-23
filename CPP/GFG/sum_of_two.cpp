/*
        Created by Yoni Avni 
        2021-03-23

    Problem: Two Sum
        Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
        You may assume that each input would have exactly one solution, and you may not use the same element twice.
        You can return the answer in any order.
        Example 1:
            Input: nums = [2,7,11,15], target = 9
            Output: [0,1]
            Output: Because nums[0] + nums[1] == 9, we return [0, 1].
        Example 2:
            Input: nums = [3,2,4], target = 6
            Output: [1,2]
*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

//O(N*N)
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res{};

    for (size_t i = 0; i < nums.size() - 1; i++)
    {
        for (size_t j = 1; j < nums.size(); j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                res.push_back(i);
                res.push_back(j);
                std::cout << "found two numbers: " << nums[i] << " + " << nums[j] << " = " << target << std::endl;
                return res;
            }
        }
    }
    cout << "did not found two numbers\n";

    return res;
}

//O(log N) after sort
vector<int> twoSum2(vector<int> &nums, int target)
{
    vector<int> res{};
    int front = 0;
    int back = nums.size() - 1;
    while (front != back)
    {
        if ((nums[front] + nums[back]) > target)
        {
            --back;
        }
        else if ((nums[front] + nums[back]) < target)
        {
            ++front;
        }
        else
        {
            res.push_back(front);
            res.push_back(back);
            std::cout << "found two numbers: " << nums[front] << " + " << nums[back] << " = " << target << std::endl;
            return res;
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //twoSum(nums, 9);
    //twoSum(nums, 19);

    twoSum2(nums, 11);
    return 0;
}