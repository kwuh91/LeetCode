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
//    std::string convertToTitle(int columnNumber) {
//        std::string res = "";
//        while (columnNumber > 0) {
//            columnNumber--;
//            res.push_back((char)(columnNumber % 26 + int('A')));
//            columnNumber /= 26;
//        }
//        auto reverse = [](std::string str) {std::string res; for (int i = str.size() - 1; i >= 0; i--) { res.push_back(str[i]); } return res;};
//        return reverse(res);
//    }
//};
//
//int main() {
//    Solution obj;
//    std::cout << obj.convertToTitle(701);
//    return 0;
//}
