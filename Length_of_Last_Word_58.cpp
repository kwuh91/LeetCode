#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <set>
#include <iomanip>
#include <numeric>

class solution {
public:
    int lengthOfLastWord(std::string s) {
        bool word_reached = false;
        int count = 0;
        for (auto it = std::rbegin(s); it != std::rend(s); ++it) {
            if (word_reached && *it == ' ') break;
            if (*it != ' ') word_reached = true;
            if (word_reached) count++;
        }
        return count;
    }
};

int main() {
    solution obj;

    std::cout << obj.lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}
