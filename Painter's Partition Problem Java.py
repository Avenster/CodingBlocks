def is_valid(painters, boards, max_time):
    total_painters = 1
    current_time = 0

    for board in boards:
        current_time += board

        if current_time > max_time:
            total_painters += 1
            current_time = board

    return total_painters <= painters

def minimum_painting_time(painters, boards):
    low = max(boards)
    high = sum(boards)

    while low < high:
        mid = (low + high) // 2

        if is_valid(painters, boards, mid):
            high = mid
        else:
            low = mid + 1

    return low


K = int(input())
N = int(input())
board_lengths = list(map(int, input().split()))

result = minimum_painting_time(K, board_lengths)
print(result)
