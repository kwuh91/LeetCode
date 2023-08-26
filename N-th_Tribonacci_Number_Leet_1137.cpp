//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//
//#pragma GCC optimize("O3")
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    // DP MEMOIZATION
//    int tribonacci(int n) {
//        if (n == 0 || n == 1) return n;
//        if (n == 2) return n-1;
//        int* array = new int[n + 2]; array[0] = 0; array[1] = 1; array[2] = 1; short i;
//        for (i = 3; i <= n; ++i) array[i] = array[i - 1] + array[i - 2] + array[i - 3];
//        return array[i - 1];
//    }
//};
//
//int main() {
//    Solution obj;
//    std::cout << obj.tribonacci(3);
//    return 0;
//}