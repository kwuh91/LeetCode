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
//    int minFallingPathSum(std::vector<std::vector<int>>& matrix) {
//        size_t n = matrix.size(); 
//        if (n == 1) return *std::min_element(matrix[0].begin(), matrix[0].end());
//        for (size_t i = 1; i < n; ++i) {
//            for (size_t j = 0; j < n; ++j) {
//                if (j == 0) matrix[i][j] += std::min(matrix[i - 1][j], matrix[i - 1][j + 1]);
//                else if (j == matrix[i].size()-1) matrix[i][j] += std::min(matrix[i - 1][j], matrix[i - 1][j - 1]);
//                else matrix[i][j] += std::min(std::min(matrix[i - 1][j], matrix[i - 1][j - 1]), matrix[i - 1][j + 1]);
//            }
//        }
//
//        return *std::min_element(matrix[n - 1].begin(), matrix[n - 1].end());
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<std::vector<int>> vec{ {2,1,3}, {6,5,4}, {7,8,9} };
//    std::cout << obj.minFallingPathSum(vec);
//    return 0;
//}
