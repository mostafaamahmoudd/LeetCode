1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int x = s.size(), cnt = 0;
5        
6        reverse(s.begin(), s.end());
7
8        for (int i = 0; i < x; i++) {
9            if (s[i] != ' ') {
10                ++cnt;
11                if (s[i + 1] == ' ')
12                    break;
13            }
14        }
15
16        return cnt;
17    }
18};