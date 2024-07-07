class Solution:
    @staticmethod
    def numWaterBottles(numBottles: int, numExchange: int) -> int:
        drank = numBottles

        exchanged = numBottles // numExchange
        left      = numBottles % numExchange
        temp      = exchanged + left
        drank += exchanged

        while temp // numExchange != 0:
            exchanged = temp // numExchange
            left      = temp % numExchange
            temp      = exchanged + left
            drank += exchanged

        return drank
    
if __name__ == '__main__':
    test = {
        9  : [3, 13],
        15 : [4, 19],
        10 : [3, 14]
    }

    for numBottles, data in test.items():
        numExchange = data[0]
        expected    = data[1]

        res = Solution.numWaterBottles(numBottles, numExchange)

        print(f'numBottles = {numBottles}, numExchange = {numExchange}, got {res}, expected {expected}')

print(15//4)
print(15%4)