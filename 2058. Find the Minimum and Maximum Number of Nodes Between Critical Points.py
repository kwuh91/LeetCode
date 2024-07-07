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
    def nodesBetweenCriticalPoints(head: Optional[ListNode]) -> List[int]:
        pos = []
        
        count = 1
        critPointsFound = 0
        
        searchingForMinDist = None
        minDist = 10e9

        prev = head
        cur  = head.next
        next = cur.next if cur is not None else None

        crit = lambda a, b, c : a < b > c or a > b < c 

        while next is not None:
            prevVal = prev.val
            curVal  = cur.val
            nextVal = next.val

            if crit(prevVal, curVal, nextVal):
                pos.append(count)
                critPointsFound += 1
                if searchingForMinDist is None:
                    searchingForMinDist = 0
                else:
                    minDist = min(minDist, searchingForMinDist)
                    searchingForMinDist = 0
            
            prev = cur
            cur  = cur.next
            next = cur.next if cur is not None else None
            count += 1
            if searchingForMinDist is not None:
                searchingForMinDist += 1

        if critPointsFound <= 1:
            return [-1, -1]
        else:
            maxDist = pos[-1] - pos[0]
            return [minDist, maxDist]

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
    expected: List

# main 
if __name__ == '__main__':

    tests: list[Test] = [
        # # 1
        # Test(input   =computeList([3, 1]),
        #      expected=[-1, -1]),
        # # 2
        # Test(input   =computeList([5, 3, 1, 2, 5, 1, 2]),
        #      expected=[1, 3]),
        
        # 3
        Test(input   =computeList([4, 2, 4, 1]),
             expected=[1, 1])
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

        res = Solution.nodesBetweenCriticalPoints(head)

        print('data: ', end='')
        printList(head)
        print(f'got: {res}; expected: {expected}.')
