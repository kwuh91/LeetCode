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
    int searchInsert(std::vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size()-1;

        int pivot;
        while (begin <= end) {
            pivot = (begin + end) / 2;
            int guess = nums[pivot];

            if (guess == target) return  pivot;
            if (guess <  target) begin = pivot + 1;
            if (guess >  target) end   = pivot - 1;
        }
        pivot = (begin + end) / 2;

        return begin;
    }
};

class RecursiveSolution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        return binSearch(nums, target, 0, nums.size() - 1);
    }
private:
    int binSearch(std::vector<int>& nums, int target, int begin, int end) {
        if (begin > end) return begin;

        int pivot = (begin + end) / 2;
        int guess = nums[pivot];

        if      (guess == target) return pivot;
        else if (guess < target)  return binSearch(nums, target, pivot + 1,   end);
        else                      return binSearch(nums, target, begin, pivot - 1);
    }
};

int main() {
    Solution obj1;
    RecursiveSolution obj2;

    std::vector<int> vec{ 1,3,5,6 };
    std::cout << obj1.searchInsert(vec, 2) << std::endl;
    std::cout << obj2.searchInsert(vec, 2) << std::endl;

    return 0;
}
