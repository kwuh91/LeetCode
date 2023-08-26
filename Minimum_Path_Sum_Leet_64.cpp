//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
//#include <numeric>
//
//class Solution {
//public:
//    // bottom up with extra space
//    //int minPathSum(std::vector<std::vector<int>>& grid) {
//    //    size_t m = grid.size(); size_t n = grid[0].size();
//    //    int** dp = new int*[m];
//    //    int res = grid[0][0];
//    //    for (size_t i = 0; i < m; ++i) dp[i] = new int[n];
//    //
//    //    dp[0][0] = grid[0][0];
//    //    for (size_t i = 1; i < n; ++i) dp[0][i] = dp[0][i-1] + grid[0][i];
//    //    for (size_t i = 1; i < m; ++i) dp[i][0] = dp[i - 1][0] + grid[i][0];
//    //
//    //    for (size_t i = 1; i < m; ++i) {
//    //        for (size_t j = 1; j < n; ++j) {
//    //            dp[i][j] = std::min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
//    //        }
//    //    }
//    //    return dp[m - 1][n - 1];
//    //}
//
//    // bottom up without extra space 
//    int minPathSum(std::vector<std::vector<int>>& grid) {
//        size_t m = grid.size(); size_t n = grid[0].size();
//
//        for (size_t i = 0; i < m; ++i) {
//            for (size_t j = 0; j < n; ++j) {
//                if (!(i == 0 && j == 0)) {
//                    if (i == 0 && j > 0) grid[i][j] += grid[i][j - 1];
//                    else if (i > 0 && j == 0) grid[i][j] += grid[i - 1][j];
//                    else grid[i][j] = std::min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
//                }
//            }
//        }
//        return grid[m - 1][n - 1];
//    }
//
//    // bottom up without extra space switch
//    //int minPathSum(std::vector<std::vector<int>>& grid) {
//    //    size_t m = grid.size(); size_t n = grid[0].size();
//    //
//    //    for (size_t i = 0; i < m; ++i) {
//    //        for (size_t j = 0; j < n; ++j) {
//    //            switch (i){
//    //            case 0: {
//    //                switch (j){
//    //                case 0: {
//    //                    continue;
//    //                    break;
//    //                }
//    //                default: {
//    //                    grid[i][j] += grid[i][j - 1];
//    //                    break;
//    //                }
//    //                }
//    //                break;
//    //            }
//    //            default: {
//    //                switch (j){
//    //                case 0: {
//    //                    grid[i][j] += grid[i - 1][j];
//    //                    break;
//    //                }
//    //                default:
//    //                    grid[i][j] = std::min(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
//    //                    break;
//    //                }
//    //                break;
//    //            }
//    //            }
//    //        }
//    //    }
//    //    return grid[m - 1][n - 1];
//    //}
//};
//
//int main() {
//    Solution obj;
//    std::vector <std::vector<int>> vec{ {1,3,1},{1,5,1},{4,2,1} };
//    std::cout << obj.minPathSum(vec);
//    return 0;
//}
