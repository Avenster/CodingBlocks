def modifyMatrix(mat, m, n):
    row_to_modify = [False] * m
    col_to_modify = [False] * n

    for i in range(m):
        for j in range(n):
            if mat[i][j] == 1:
                row_to_modify[i] = True
                col_to_modify[j] = True
    
    for i in range(m):
        for j in range(n):
            if row_to_modify[i] or col_to_modify[j]:
                mat[i][j] = 1
    
    return mat


m, n = map(int, input().split())
mat = []
for _ in range(m):
    row = list(map(int, input().split()))
    mat.append(row)

modified_mat = modifyMatrix(mat, m, n)

for row in modified_mat:
    print(" ".join(map(str, row)))
