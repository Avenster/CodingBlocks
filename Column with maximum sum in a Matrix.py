def find_max_sum_column(matrix):
    if not matrix:
        return -1 
    num_rows = len(matrix)
    num_cols = len(matrix[0])

    max_sum = float('-inf') 
    max_col_index = -1

    for col in range(num_cols):
        col_sum = sum(matrix[row][col] for row in range(num_rows))

        if col_sum > max_sum:
            max_sum = col_sum
            max_col_index = col

    return max_col_index, max_sum

n = int(input())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

max_col_index, max_sum = find_max_sum_column(matrix)

print(f"{max_col_index + 1} {max_sum}")
