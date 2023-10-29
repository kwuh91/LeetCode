#include <iostream>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        for (size_t i = 0; i < haystack.size(); ++i) {
            if (haystack[i] == needle[0] &&
                i + needle.size() <= haystack.size()) {
                bool flag = true;
                size_t ind = 0;
                for (size_t j = i; j < i + needle.size(); j++) {
                    if (haystack[j] != needle[ind]) flag = false;
                    ind++;
                }
                if (flag) return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;

    return 0;
}
