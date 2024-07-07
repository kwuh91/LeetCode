class Solution:
    @staticmethod
    def passThePillow(n: int, time: int) -> int:
        if time < n:
            return time + 1

        hodok = time // (n-1)

        if hodok % 2 != 0:
            return n - (time % (n - 1))
        else:
            return 1 + (time % (n - 1))

if __name__ == '__main__':
    test = {
        4 : [5, 2],
        3 : [2, 3],
        7 : [3, 4],
        8 : [3, 4],
        5 : [5, 4]
    }

    for n, data in test.items():
        print(n, data)

        time     = data[0]
        expected = data[1]

        res = Solution.passThePillow(n, time)

        print(f'n = {n}, time = {time}, got {res}, expected {expected}')