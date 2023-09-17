N = int(input())
matrix = []

for _ in range(N):
    row = list(map(int, input().split()))
    matrix.append(row)

transposed_matrix = [list(x) for x in zip(*matrix)]

for row in transposed_matrix:
    for num in row:
        print(num, end=" ")
    print()