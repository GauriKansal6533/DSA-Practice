// 01-two-sum.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end())
            return {mp[complement], i};
        mp[arr[i]] = i;
    }
    return {-1, -1}; // not found
}
