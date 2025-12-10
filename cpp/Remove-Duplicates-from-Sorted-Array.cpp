1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.empty())
5            return 0;
6
7        int x = 0;
8        for (int i = 0; i < nums.size(); i++) {
9            if (nums[i] != nums[x]) {
10                x++;
11                nums[x] = nums[i];
12            }
13        }
14
15        return x + 1;
16    }
17};