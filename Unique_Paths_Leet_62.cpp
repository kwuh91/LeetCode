//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//#include <iomanip>
//#include <numeric>

// not really backtracking
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        res = 0;
//        int x_movement[2]{ 0, 1 };
//        int y_movement[2]{ 1, 0 };
//        uniquePathsUtil(m, n, 0, 0, x_movement, y_movement);
//        return res;
//    }
//private:
//    int res;
//    bool isSafe(int m, int n, int x, int y) { return x < m&& x >= 0 && y < n&& y >= 0; }
//    void uniquePathsUtil(int m, int n, int x, int y, int* move_x, int* move_y) {
//        if (x == m - 1 && y == n - 1) {
//            res++;
//            return;
//        }
//
//        for (size_t i = 0; i < 2; ++i) {
//            int new_x = x + move_x[i];
//            int new_y = y + move_y[i];
//            if (isSafe(m, n, new_x, new_y)) uniquePathsUtil(m, n, new_x, new_y, move_x, move_y);
//        }
//    }
//};
//

// dp memoization
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        int** dp = new int* [m];
//        for (size_t i = 0; i < m; ++i) {
//            dp[i] = new int[n];
//        }
//
//        for (size_t i = 0; i < m; ++i) {
//            for (size_t j = 0; j < n; ++j) {
//                if (i == 0 && j == 0) dp[i][j] = 1;
//                else if ((i == 0 && j == 1) || (i == 1 && j == 0)) dp[i][j] = 1;
//                else {
//                    if (i == 0 && j > 0) dp[i][j] = dp[i][j - 1];
//                    else if (i > 0 && j == 0) dp[i][j] = dp[i - 1][j];
//                    else dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
//                }
//                
//            }
//        }
//
//        return dp[m - 1][n - 1];
//    }
//};

// dp memoization with optimized space complexity
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        std::vector<int> cur(n, 1);
//        for (int i = 1; i < m; i++) {
//            for (int j = 1; j < n; j++) {
//                cur[j] += cur[j - 1];
//            }
//        }
//        return cur[n - 1];
//    }
//};

//int main() {
//    Solution obj;
//    std::cout << obj.uniquePaths(4, 4);
//    return 0;
//}
