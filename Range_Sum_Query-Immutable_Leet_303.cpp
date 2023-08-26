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
//class NumArray {
//public:
//    int* pr_s;
//    NumArray(std::vector<int>& nums) { 
//        size_t n = nums.size(); pr_s = new int[n]; pr_s[0] = nums[0];
//        for (size_t i = 1; i < n; ++i) pr_s[i] = pr_s[i - 1] + nums[i];
//    }
//
//    int sumRange(int left, int right) { return left == 0 ? pr_s[right] : pr_s[right] - pr_s[left - 1]; } 
//};
//
//int main() {
//    std::vector<int> vec{ -2, 0, 3, -5, 2, -1 };
//    NumArray* obj = new NumArray(vec);
//    std::cout << obj->sumRange(0, 2) << std::endl;
//    std::cout << obj->sumRange(2, 5) << std::endl;
//    std::cout << obj->sumRange(0, 5) << std::endl;
//    return 0;
//}
