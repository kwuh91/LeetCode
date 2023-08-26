//#pragma GCC optimize("O3")
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    std::vector<int> runningSum(std::vector<int>& nums) {
//        //std::vector<int> res{nums[0]};
//        //for (size_t i = 1; i < nums.size(); ++i) res.push_back(nums[i] + res[i - 1]);
//        //return res;
//        for (size_t i = 1; i < nums.size(); ++i) nums[i] = nums[i] + nums[i - 1];
//        return nums;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> task_vec{ 1,2,3,4 };
//    std::vector<int> vec = obj.runningSum(task_vec);
//    for (auto i : vec) std::cout << i << " ";
//    std::cout << std::endl;
//    return 0;
//}