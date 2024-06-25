#DEF
def count_problems(t, test_cases):
    for case in test_cases:
        n = case[0]
        codes = case[1]

        start38_count = codes.count("START38")
        ltime108_count = n - start38_count

        print(f"{start38_count} {ltime108_count}")

def main():
    t = int(input())
    test_cases = []

    for _ in range(t):
        n = int(input())
        codes = input().split()
        test_cases.append((n, codes))

    count_problems(t, test_cases)

if __name__ == "__main__":
    main()

