//#include <iostream>
//#include <string>
//#include <stack>
//#include <unordered_map>
//
//#pragma GCC optimize("O3")
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    bool isValid(std::string s) {
//        std::stack<char> mystack;
//        std::unordered_map<char, char> hash{ {'(',')'},{'{','}'},{'[',']'} };
//        for (char i : s) {
//            if (mystack.empty()) mystack.push(i);
//            else if (hash[mystack.top()] == i) mystack.pop();
//            else mystack.push(i);
//        }
//        return mystack.empty();
//    }
//};
//
//int main() {
//    Solution obj;
//    std::cout << obj.isValid("{[]}");
//	return 0;
//}

// Ctrl+K+C - comment
// Ctrl+K+U - uncomment
