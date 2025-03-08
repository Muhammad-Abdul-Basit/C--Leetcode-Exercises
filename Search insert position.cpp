

#include <iostream>
#include<vector>
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) //[1,3,5,6] target=2
    {
        int target_index=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                target_index = i;
            }
            else
            {
                if (nums[i] < target)
                {
                    target_index = i+1;
                }
            }
        }
        return target_index;
    }
};
int main()
{
    std::vector<int> my_vector = { 1,2,3,4,5 };
    Solution my_Solution;
    int x=my_Solution.searchInsert(my_vector, 0);
    std::cout << x;
}