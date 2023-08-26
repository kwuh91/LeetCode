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
//    int uniquePathsWithObstacles(std::vector<std::vector<int>>& grid) {
//        size_t m = grid.size(); size_t n = grid[0].size();
//        if (grid[m - 1][n - 1] == 1 || grid[0][0] == 1) return 0;
//
//        for (size_t i = 0; i < m; ++i) {
//            for (size_t j = 0; j < n; ++j) {
//                if (grid[i][j] != 1) {
//                    if (i == 0 && j == 0) grid[i][j] = 1;
//                    else if ((i == 0 && j == 1) && (grid[i][j] != -1)) grid[i][j] = 1;
//                    else if ((i == 1 && j == 0) && (grid[i][j] != -1)) grid[i][j] = 1;
//                    else {
//                        if (i == 0 && j > 0) { if (grid[i][j - 1] != -1) grid[i][j] = grid[i][j - 1]; }
//                        else if (i > 0 && j == 0) { if (grid[i - 1][j] != -1) grid[i][j] = grid[i - 1][j]; }
//                        else {
//                            if (grid[i][j - 1] == -1 && grid[i - 1][j] == -1) grid[i][j] = 0;
//                            else if (grid[i][j - 1] == -1) grid[i][j] = grid[i - 1][j];
//                            else if (grid[i - 1][j] == -1) grid[i][j] = grid[i][j - 1];
//                            else grid[i][j] = grid[i][j - 1] + grid[i - 1][j];
//                        }
//                    }
//                }
//                else grid[i][j] = -1;
//            }
//        }
//
//        return grid[m - 1][n - 1];
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector <std::vector<int>> vec{ {0,1,0,0},{1,1,0,0},{0,0,0,0},{0,0,1,0},{0,0,0,0} };
//    std::cout << obj.uniquePathsWithObstacles(vec);
//    return 0;
//}
