//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
//#include <numeric>
//
//#pragma GCC optimize("O3")
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    int numberOfBeautifulIntegers(int low, int high, int k) {
//        if (countdigits(low) % 2 != 0 && countdigits(high) % 2 && countdigits(high) - countdigits(low) == 0) return 0;
//        int res = 0;
//        if (high > 1e8) {
//            high = 1e8;
//        }
//        while (!(beatiful(low)) || low%k != 0) low++;
//        while (low <= high) {
//            res += beatiful(low) ? 1 : 0;
//            low += k;
//        }
//        return res;
//    }
//    int countdigits(int num) {
//        int res = 0;
//        while (num) {
//            res++;
//            num /= 10;
//        }
//        return res;
//    }
//    bool beatiful(int num) {
//        int odds = 0; int evens = 0;
//        while (num) {
//            (num % 10) % 2 == 0 ? evens++ : odds++;
//            num /= 10;
//        }
//        return odds == evens;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::cout << obj.numberOfBeautifulIntegers(1, 1000000000, 20);
//    return 0;
//}
