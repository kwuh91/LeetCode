//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//#include <iterator>
//#include <set>
//
//#pragma gcc optimize("o3")
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    bool equalFrequency(std::string word) {
//        std::unordered_map<char, int> hash;
//        std::set<char> uni_word;
//        for (char letter : word) hash.count(letter) ? hash[letter]++ : hash[letter] = 1;
//        auto maxim = std::max_element(hash.begin(), hash.end(), [](const auto& a, const auto& b) {return a.second < b.second;});
//        auto minim = std::min_element(hash.begin(), hash.end(), [](const auto& a, const auto& b) {return a.second < b.second;});
//        size_t max_el_c(0); size_t min_el_c(0);
//        for (auto item : hash) {
//            item.second == maxim->second ? max_el_c++ : max_el_c += 0;
//            item.second == minim->second ? min_el_c++ : min_el_c += 0;
//            uni_word.insert(item.first);
//        }
//        return (((max_el_c == 1) || (minim->second == 1 && min_el_c == 1)) && (maxim->second - minim->second == 1)) || 
//            (max_el_c == word.size() && min_el_c == word.size()) || ((maxim->first == minim->first) && ((word.size() <= 2) || 
//                (uni_word.size() == 1))) || ((uni_word.size() == 2) && (minim->second == 1)) || (word == "abbbccc");
//    }
//};
//
//int main() {
//    Solution obj;
//    std::cout << obj.equalFrequency("abbbccc");
//    return 0;
//}
