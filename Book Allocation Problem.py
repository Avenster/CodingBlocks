def is_possible(pages, n, m, max_pages):
    students_needed = 1
    current_pages = 0

    for i in range(n):
        current_pages += pages[i]

        if current_pages > max_pages:
            students_needed += 1
            current_pages = pages[i]

    return students_needed <= m

def minimum_max_pages(pages, n, m):
    low = max(pages)
    high = sum(pages)

    while low < high:
        mid = (low + high) // 2

        if is_possible(pages, n, m, mid):
            high = mid
        else:
            low = mid + 1

    return low

t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    book_pages = list(map(int, input().split()))
    result = minimum_max_pages(book_pages, n, m)
    print(result)
