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
//class NumMatrix {
//public:
//    NumMatrix(std::vector<std::vector<int>>& matrix) {
//        size_t n = matrix.size(); size_t m = matrix[0].size();
//
//        // initialize pr_sum_matr
//        pr_matr = new int*[n];
//        for (size_t i = 0; i < n; ++i) {
//            pr_matr[i] = new int[m];
//        }
//
//        // fill 1st element
//        pr_matr[0][0] = matrix[0][0];
//
//        // fill 1st row
//        for (size_t j = 1; j < m; ++j) {
//            pr_matr[0][j] = pr_matr[0][j - 1] + matrix[0][j];
//        }
//
//        // fill 1st column
//        for (size_t i = 1; i < n; ++i) {
//            pr_matr[i][0] = pr_matr[i-1][0] + matrix[i][0];
//        }
//
//        // fill the rest of the pr_sum_matr
//        for (size_t i = 1; i < n; ++i) {
//            for (size_t j = 1; j < m; ++j) {
//                pr_matr[i][j] = pr_matr[i - 1][j] + pr_matr[i][j - 1] - pr_matr[i - 1][j - 1] + matrix[i][j];
//            }
//        }
//    }
//
//    int sumRegion(int row1, int col1, int row2, int col2) {
//        if (row1 == 0 && col1 == 0) return pr_matr[row2][col2];
//        else if (row1 == 0) return pr_matr[row2][col2] - pr_matr[row2][col1 - 1];
//        else if (col1 == 0) return pr_matr[row2][col2] - pr_matr[row1 - 1][col2];
//        return pr_matr[row2][col2] - pr_matr[row1 - 1][col2] - pr_matr[row2][col1 - 1] + pr_matr[row1 - 1][col1 - 1];
//    }
//private:
//    int** pr_matr;
//};
//
//int main() {
//    //std::vector<std::vector<int>> vec {{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
//    //NumMatrix* obj = new NumMatrix(vec);
//    //std::cout << obj->sumRegion(2, 1, 4, 3) << std::endl;
//    //std::cout << obj->sumRegion(1, 1, 2, 2) << std::endl;
//    //std::cout << obj->sumRegion(1, 2, 2, 4) << std::endl;
//
//    std::vector<std::vector<int>> vec{ {-4,-5} };
//    NumMatrix* obj = new NumMatrix(vec);
//    std::cout << obj->sumRegion(0, 0, 0, 0) << std::endl;
//    std::cout << obj->sumRegion(0, 0, 0, 1) << std::endl;
//    std::cout << obj->sumRegion(0, 1, 0, 1) << std::endl;
//    return 0;
//}
