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
//    //int findSubarraySum(int target, std::vector<int>& nums) {
//    //    size_t n = nums.size();
//    //    std::unordered_map<int, int> prevSum;
//    //    int res = 0; int currSum = 0;
//    //    for (auto i : nums) {
//    //        currSum += i;
//    //        if (currSum == target) res++;
//    //        if (prevSum.find(currSum-target) != prevSum.end()) res += prevSum[currSum - target];
//    //        prevSum[currSum]++;
//    //    }
//    //    return res;
//    //}
//
//    int numSubmatrixSumTarget(std::vector<std::vector<int>>& matrix, int target) {
//        size_t n = matrix.size(); size_t m = matrix[0].size();
//        std::unordered_map<int, double> prevSum;
//        double res = 0; 
//        
//		// turn matrix to prefix sum by rows
//		for (size_t i = 0; i < n; ++i) {
//			for (size_t j = 1; j < m; ++j) {
//				matrix[i][j] = matrix[i][j - 1] + matrix[i][j];
//			}
//		}
//
//        // findSubarraySum
//		for (size_t i = 0; i < m; ++i) {
//			for (size_t j = i; j < m; ++j) {
//                prevSum.clear();
//                int currSum = 0;
//				for (size_t k = 0; k < n; ++k) {
//					currSum += matrix[k][j] - (i > 0 ? matrix[k][i - 1] : 0);
//					if (currSum == target) res++;
//					if (prevSum.find(currSum - target) != prevSum.end()) res += prevSum[currSum - target];
//					prevSum[currSum]++;;
//				}
//			}
//		}
//
//		return res;
//    }
//
//};
//
//int main() {
//    Solution obj;
//    std::vector<std::vector<int>> vec{ {0,1,0},{1,1,1},{0,1,0} };
//    std::cout << obj.numSubmatrixSumTarget(vec, 0);
//    //std::cout << obj.foo(7, vec);
//    return 0;
//}
//
////#include <random>
////#include <iostream>
////#include <iomanip>
//
////int main() {
////	srand(time(NULL));
////	size_t n = 3; size_t m = 4;
////	int** matr = new int*[n];
////	for (size_t i = 0; i < n; ++i) {
////		matr[i] = new int[m];
////	}
////
////	for (size_t i = 0; i < n; ++i) {
////		for (size_t j = 0; j < m; ++j) {
////			matr[i][j] = rand() % 10;
////		}
////	}
////
////	for (size_t i = 0; i < n; ++i) {
////		for (size_t j = 0; j < m; ++j) {
////			std::cout << std::setw(1) << matr[i][j] << " ";
////		}
////		std::cout << std::endl;
////	}
////
////	std::cout << std::endl;
////
////	for (size_t i = 0; i < m; ++i) {
////		for (size_t j = i; j < m; ++j) {
////			for (size_t k = 0; k < n; ++k) {
////				std::cout << std::setw(1) << matr[k][j] << " - " << (i > 0 ? matr[k][i - 1] : 0) << std::endl;;
////			}
////		}
////	}
////	return 0;
////}