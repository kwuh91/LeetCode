//#pragma GCC optimize("O3")
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    std::vector<int> productExceptSelf(std::vector<int>& nums) {
//        size_t n = nums.size();
//        std::vector<int> res(n);
//        int* p_p = new int[n];
//        int* s_p = new int[n];
//        p_p[0] = nums[0];
//        s_p[n - 1] = nums[n - 1];
//        for (size_t i = 1; i < n; ++i) p_p[i] = p_p[i - 1] * nums[i];
//        for (size_t i = n - 2; i > 0; --i) s_p[i] = s_p[i + 1] * nums[i];
//        for (size_t i = 0; i < n; ++i) {
//            if (i == 0) res[i] = s_p[i + 1];
//            else if (i == n - 1)  res[i] = p_p[i - 1];
//            else res[i] = p_p[i - 1] * s_p[i + 1];
//        }
//        return res;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> vec{ 1,2,3,4 };
//    std::vector<int> res = obj.productExceptSelf(vec);
//    for (auto i : res) std::cout << i << " ";
//    return 0;
//}
