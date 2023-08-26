//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
//#include <numeric>
//
//// dp memoization
//class Solution {
//public:
//    // bottom up without extra space 
//    int minimumTotal(std::vector<std::vector<int>>&triangle) {
//        size_t n = triangle.size();
//        if (n == 1) return *std::min_element(triangle[0].begin(), triangle[0].end());
//        for (size_t i = 1; i < n; ++i) {
//            for (size_t j = 0; j < triangle[i].size(); ++j) {
//                if (j == 0) triangle[i][j] += triangle[i - 1][j];
//                else if (j == triangle[i].size()-1) triangle[i][j] += triangle[i - 1][j-1];
//                else triangle[i][j] += std::min(triangle[i - 1][j], triangle[i - 1][j - 1]);
//            }
//        }
//        return *std::min_element(triangle[n - 1].begin(), triangle[n - 1].end());
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<std::vector<int>> vec{ {2}, {3,4}, {6,5,7}, {4,1,8,3} };
//    std::cout << obj.minimumTotal(vec);
//    return 0;
//}
