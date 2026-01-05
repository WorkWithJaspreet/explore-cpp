// 961. N-Repeated Element in Size 2N Array

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int repeatedNTimes(vector<int> &nums)
{
    unordered_set<int> frequencySet;
    for (int i = 0; i < nums.size(); i++)
    {
        if (frequencySet.count(nums[i]))
            return nums[i];
        frequencySet.insert(nums[i]);
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 3, 3};
    int result = repeatedNTimes(nums);
    cout << result << "\n";
    return 0;
}