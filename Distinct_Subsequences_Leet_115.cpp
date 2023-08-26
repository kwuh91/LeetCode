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
//    int numDistinct(std::string& s, std::string& t) {
//        size_t n = s.size(), m = t.size();
//        unsigned int** dp = new unsigned int* [n + 1];
//        for (size_t i = 0; i < n + 1; ++i) {
//            dp[i] = new unsigned int[m + 1]{ 0 };
//        }
//
//        int res = 0;
//
//        for (size_t i = 1; i < n + 1; i++) {
//            for (size_t j = 1; j < m + 1; j++) {
//                if (s[i - 1] == t[j - 1]) {
//                    if (j == 1) dp[i][j] = 1;
//                    else {
//                        unsigned int num = 0;
//                        for (size_t k = i - 1; k > 0; --k) {
//                            num += dp[k][j - 1];
//                        }
//                        dp[i][j] = num;
//                    }
//                    if (j == m) res += dp[i][j];
//                }
//
//            }
//        }
//
//        //for (size_t i = 0; i < n + 1; ++i) {
//        //    for (size_t j = 0; j < m + 1; ++j) {
//        //        std::cout << dp[i][j] << " ";
//        //    }
//        //    std::cout << std::endl;
//        //}
//
//        return res;
//
//    }
//
//    //int numDistinct(std::string s, std::string t) {
//    //    int n = s.size(), m = t.size();
//    //    std::vector<std::vector<double>>dp(n + 1, std::vector<double>(m + 1, 0));
//    //    for (int j = 0;j <= n;j++) {
//    //        dp[j][0] = 1;
//    //    }
//
//    //    for (int i = 1;i <= n;i++) {
//    //        for (int j = 1;j <= m;j++) {
//    //            if (s[i - 1] == t[j - 1]) {
//    //                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//    //            }
//    //            else {
//    //                dp[i][j] = dp[i - 1][j];
//    //            }
//    //        }
//    //    }
//
//    //    for (size_t i = 0; i < n + 1; ++i) {
//    //        for (size_t j = 0; j < m + 1; ++j) {
//    //            std::cout << dp[i][j] << " ";
//    //        }
//    //        std::cout << std::endl;
//    //    }
//
//    //    return (int)dp[n][m];
//    //}
//};
//
//int main() {
//    Solution obj;
//    std::string s1 = "rabbbit";
//    std::string s2 = "rabbit";
//    std::cout << obj.numDistinct(s1, s2);
//    return 0;
//}
