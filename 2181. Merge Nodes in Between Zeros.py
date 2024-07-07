from typing import Optional, List
from dataclasses import dataclass

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val  = val
        self.next = next

# task algorithm
class Solution:
    @staticmethod
    def mergeNodes(head: Optional[ListNode]) -> Optional[ListNode]:
        temp = ListNode()
        currAns = temp

        tempnum = 0
        head = head.next
        while head is not None:
            tempnum += head.val

            if head.val == 0:
                currAns.next = ListNode(tempnum)
                currAns = currAns.next
                tempnum = 0

            head = head.next
        
        return temp.next

# make list out of an array
def computeList(arr):
    temp = ListNode()
    curr = temp 

    for el in arr:
        curr.next = ListNode(el)
        curr = curr.next

    return temp.next

testarr = [1,2,3,4,5]

# datatype for testing purposes
@dataclass
class Test:
    input:    Optional[ListNode]
    expected: Optional[ListNode]

# main 
if __name__ == '__main__':

    tests: list[Test] = [
        # 1
        Test(input   =computeList([0,3,1,0,4,5,2,0]),
             expected=computeList([4, 11])),

        # 2
        Test(input   =computeList([0,1,0,3,0,2,2,0]),
             expected=computeList([1, 3, 4]))
    ]

    def printList(head):
        print('[ ', end='')
        while head is not None:
            print(head.val, end=', ')
            head = head.next
        print(']', end='; ')

    for test in tests:
        head     = test.input
        expected = test.expected

        res = Solution.mergeNodes(head)

        print('data: ', end='')
        printList(head)
        print('got: ', end='')
        printList(res)
        print('expected: ', end='')
        printList(expected)
        print('')
