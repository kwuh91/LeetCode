//#include <iostream>
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//#pragma GCC optimize("O3")
//auto init = [] {std::ios::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0); return 0;}();
//
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        ListNode* res = nullptr;
//        while (list1 || list2) {
//            
//            if (list1 && list2) {
//                if ((list1->val < list2->val) && (list1->next) && (list1->next->val < list2->val)) {
//                    res = new ListNode(list1->val, res);
//                    list1 = list1->next;
//                }
//                else if ((list2->val < list1->val) && (list2->next) && (list2->next->val < list1->val)) {
//                    res = new ListNode(list2->val, res);
//                    list2 = list2->next;
//                }
//                else {
//                    res = new ListNode(std::min(list1->val,list2->val), res);
//                    res = new ListNode(std::max(list1->val, list2->val), res);
//                    list1 = list1->next;
//                    list2 = list2->next;
//                }
//            }
//
//            else if (list1) { 
//                res = new ListNode(list1->val, res);
//                list1 = list1->next; 
//            }
//
//            else if (list2) {
//                res = new ListNode(list2->val, res);
//                list2 = list2->next;
//            }
//        }
//        auto reverse = [](ListNode* head) {ListNode* reversed_l = nullptr; while (head != nullptr) { reversed_l = new ListNode(head->val, reversed_l); head = head->next; } return reversed_l;};
//        return reverse(res);
//    }
//};
//
//int main() {
//    ListNode* l1 = nullptr;
//    l1 = new ListNode(4, l1);
//    l1 = new ListNode(3, l1);
//    l1 = new ListNode(2, l1);
//    l1 = new ListNode(1, l1);
//
//    ListNode* l2 = nullptr;
//    l2 = new ListNode(9, l2);
//    l2 = new ListNode(8, l2);
//    l2 = new ListNode(7, l2);
//
//    Solution obj;
//    ListNode* res = obj.mergeTwoLists(l1, l2);
//    while (res != nullptr) {
//        std::cout << res->val << " ";
//        res = res->next;
//    }
//	return 0;
//}
