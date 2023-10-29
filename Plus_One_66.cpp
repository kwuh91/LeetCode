#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <set>
#include <iomanip>
#include <numeric>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != 9) {
                digits[i]++;
                return digits;
            }
            if (digits[i] == 9) {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);

        return digits;
    }
};
// 9 9 9
// 8 9 -> 9 0
int main() {
    Solution obj;

    std::vector<int> init{ 8,9 };
    std::vector<int> res = obj.plusOne(init);

    for (const int& el : res) {
        std::cout << el << " ";
    }

    return 0;
}
