1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> v;
5        for (int i = 1; i <= n; i++) {
6            v.push_back((i % 15 == 0)  ? "FizzBuzz"
7                        : (i % 5 == 0) ? "Buzz"
8                        : (i % 3 == 0) ? "Fizz"
9                                       : to_string(i));
10        }
11
12        return v;
13    }
14};