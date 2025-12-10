1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int size = nums.size();
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == val) {
8                --size;
9                nums.erase(nums.begin() + i);
10                --i;
11            }
12        }
13
14        return size;
15    }
16};