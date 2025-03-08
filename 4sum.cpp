#include <iostream>
#include<vector>
class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target)
    {
        std::vector<std::vector<int>> solution_vector;
        std::vector<int> inner_vector;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    for (int l = k + 1; l < nums.size(); l++)
                    {
                        if ((nums[i] + nums[j] + nums[k] + nums[l]) == target)
                        {
                            inner_vector.push_back(nums[i]);
                            inner_vector.push_back(nums[j]);
                            inner_vector.push_back(nums[k]);
                            inner_vector.push_back(nums[l]);
                            solution_vector.push_back(inner_vector);
                            inner_vector.clear();
                        }

                    }

                }

            }

        }
        return solution_vector;
    }
};
int main()
{
    Solution my_solution;
    std::vector<int> my_nums = { 1, 0, -1, 0, -2, 2 }; 
   int target = 0;
   std::vector<std::vector<int>> my_sol = my_solution.fourSum(my_nums, target);
   for (std::vector<int> my_vector : my_sol)
   {
       for (int i : my_vector)
       {
           std::cout << i;
       }
   }
}
