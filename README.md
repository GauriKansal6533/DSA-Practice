# 🚀 DSA Practice in C++ – Interview Preparation

This repository contains my personal solutions to important Data Structures and Algorithms (DSA) problems. The goal is to build strong problem-solving skills and prepare for technical interviews at top tech companies.

---

## 📁 Folder Structure

DSA-Practice/
├── Arrays/
│ └── 01_Two_Sum.cpp
├── README.md


Each folder contains C++ solutions for problems related to that topic. Each file includes:
- 🔗 Problem link (in comments)
- 💡 Approach explanation
- ⏱️ Time and space complexity

---

## 🛠️ Technologies Used

- Language: **C++**
- Tools: VS Code, GitHub
- Platforms: LeetCode, GFG, Codeforces

---

## 📈 Progress Tracker

| Topic               | Problems Solved | Status       |
|---------------------|------------------|--------------|
| Arrays              | 5                | 🟢 In Progress |
| Linked List         | 3                | 🟢 In Progress |
| Stack & Queue       | 2                | 🟡 Partial     |
| Trees & Graphs      | 0                | 🔴 Not Started |
| Dynamic Programming | 0                | 🔴 Not Started |
| Bit Manipulation    | 0                | 🔴 Not Started |
| **Total**           | 10+              | 🚀 Ongoing     |

---

## 📎 Example Code Format

```cpp
// 🔗 Problem: https://leetcode.com/problems/two-sum/
// 💡 Approach: Hash map to store complements
// ⏱️ Time: O(n), Space: O(n)

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); ++i) {
        int diff = target - nums[i];
        if (mp.find(diff) != mp.end()) {
            return {mp[diff], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}
