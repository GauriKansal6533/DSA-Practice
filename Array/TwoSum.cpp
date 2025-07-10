#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;  // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // If complement is found in map
            if (hashMap.find(complement) != hashMap.end()) {
                return { hashMap[complement], i };
            }

            // Store the current value with its index
            hashMap[nums[i]] = i;
        }

        return {}; // No solution found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers found that add up to the target." << endl;
    }

    return 0;
}
