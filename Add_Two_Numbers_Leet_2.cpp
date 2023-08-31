#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <set>
#include <iomanip>
#include <numeric>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = nullptr;
        int hold = 0;
        int num = 0;
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 != nullptr && l2 != nullptr) {
                num = l1->val + l2->val + hold;
                hold = num / 10;
                res = new ListNode(num % 10, res);
                l1 = l1->next; l2 = l2->next;
            }
            else if (l1 != nullptr) {
                num = l1->val + hold;
                hold = num / 10;
                res = new ListNode(num % 10, res);
                l1 = l1->next;
            } else {
                num = l2->val + hold;
                hold = num / 10;
                res = new ListNode(num % 10, res);
                l2 = l2->next;
            }
        }
        if (hold != 0) res = new ListNode(hold, res);
        ListNode* temp = nullptr;
        while (res != nullptr) {
            temp = new ListNode(res->val, temp);
            res = res->next;
        }
        return temp;
    }
};

int main() {
    Solution obj;
    ListNode* num1 = new ListNode(3);
    num1 = new ListNode(4, num1);
    num1 = new ListNode(2, num1);

    ListNode* num2 = new ListNode(4);
    num2 = new ListNode(6, num2);
    num2 = new ListNode(5, num2);

    ListNode* temp1 = num1;
    ListNode* temp2 = num2;
    while (temp1 != nullptr) {
        std::cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    std::cout << std::endl;
    while (temp2 != nullptr) {
        std::cout << temp2->val << " ";
        temp2 = temp2->next;
    }
    std::cout << std::endl;

    ListNode* test = obj.addTwoNumbers(num1, num2);
    while (test != nullptr) {
        std::cout << test->val << " ";
        test = test->next;
    }
    std::cout << std::endl;
    return 0;
}
