
#include <iostream>
#include<vector>
#include<algorithm>
class Solution 
{
    public:
        std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target)
        {
            std::sort(nums.begin(), nums.end());
            std::vector<int> inner_vector;
            std::vector<std::vector<int>> solution_vector;
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    int left = j + 1;
                    int right_most = nums.size() - 1;
                    while (left < right_most)
                    {
                        if (nums[i] + nums[j] + nums[left] + nums[right_most] == target)
                        {
                            inner_vector.push_back(nums[i]);
                            inner_vector.push_back(nums[j]);
                            inner_vector.push_back(nums[left]);
                            inner_vector.push_back(nums[right_most]);
                            solution_vector.push_back(inner_vector);
                            inner_vector.clear();
                        }
                        left++;
                    }
                }
            }
            return solution_vector;
        }
};
int main()
{ 
    return 0;
}
