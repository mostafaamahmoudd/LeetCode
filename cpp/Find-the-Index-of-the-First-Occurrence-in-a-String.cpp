1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int ns = needle.size();
5
6        for (int i = 0; i < haystack.size(); i++) {
7            string str = haystack.substr(i, ns);
8
9            if (str == needle) {
10                return i;
11            }
12        }
13
14        return -1;
15    }
16};