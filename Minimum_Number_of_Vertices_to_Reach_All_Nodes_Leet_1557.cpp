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
//    std::vector<int> findSmallestSetOfVertices(int n, std::vector<std::vector<int>>& edges) {
//        int* arr = new int[n]();
//        for (std::vector<int> edge : edges) arr[edge[1]] = -1;
//        std::vector<int> res;
//        for (size_t i = 0; i < n; ++i) {
//            if (arr[i] == 0) res.push_back(i);
//        }
//        return res;
//    }
//};
//
//int main() {
//    Solution obj;
//    std::vector<std::vector<int>> vec = { {0,1},{0,2},{2,5},{3,4},{4,2} };
//    std::vector<int> res = obj.findSmallestSetOfVertices(6, vec);
//    for (auto i : res) std::cout << i << " ";
//    return 0;
//}
