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
//    int subarraySum(std::vector<int>& nums, int k) {
//        std::unordered_map<int, int> hash;
//        int currSum = 0; int res = 0;
//        for (auto i : nums) {
//            currSum += i;
//            if (currSum == k) res++;
//            if (hash.find(currSum - k) != hash.end()) res += hash[currSum - k];
//            hash[currSum]++;
//        }
//        return res;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<int> vec{ 1,1,1 };
//    std::cout << obj.subarraySum(vec, 2);
//    return 0;
//}
