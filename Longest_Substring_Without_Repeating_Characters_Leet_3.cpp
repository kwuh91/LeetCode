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
    int lengthOfLongestSubstring(std::string s) {
        size_t len = s.size();
        if (len == 0 || len == 1) return len;
        if (len == 2) return s[0] == s[1] ? 1 : 2;
        if (len == 3) {
            std::set<char> myset;
            for (auto chr : s) myset.insert(chr);
            return myset.size();
        }
        int ans = 1;
        int temp = 1;
        std::unordered_map<char, bool> umap;
        std::unordered_map<char, bool>::iterator it;
        size_t start = 0, end = 1;
        umap[s[start]] = true; 
        bool f1 = false, f3 = false;
        while (end != s.size() - 1) {
            f1 = false, f3 = false;
            if (!umap.count(s[end])) {
                umap[s[end]] = true;
                temp++;
                end++;
                f1 = true;
            }
            else {
                if (s[start] == s[end]) {
                    start++; end++;
                    f1 = true;
                }
                else {
                    ans = std::max(ans, temp);
                    it = umap.find(s[start]);
                    it = umap.erase(it);
                    start++;
                    temp--;
                    while ((s[start] != s[end]) && (start != end)) {
                        it = umap.find(s[start]);
                        it = umap.erase(it);
                        start++;
                        temp--;
                    }
                    f3 = true;
                }
            }
        }
        ans = std::max(ans, temp);
        if (f3) ans = std::max(ans, temp);
        if (f1 && (s[start] != s[end])) {
            temp++;
            int newtemp = temp;
            bool flag = false;
            while (!flag && (start != end)) {
                if (s[start] == s[end]) flag = true;
                start++;
                temp--;
            }
            if (!flag) ans = std::max(ans, newtemp);
        }
        return ans;
    }
};

int main() {
    Solution obj;
    std::cout << obj.lengthOfLongestSubstring("ohvhjdml");
    return 0;
}
