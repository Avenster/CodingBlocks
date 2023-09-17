def can_place_cows(stalls, num_cows, min_distance):
    cows_placed = 1
    prev_stall = stalls[0]

    for i in range(1, len(stalls)):
        if stalls[i] - prev_stall >= min_distance:
            cows_placed += 1
            prev_stall = stalls[i]

    return cows_placed >= num_cows

def largest_minimum_distance(stalls, num_cows):
    stalls.sort() 

    low, high = 0, stalls[-1]
    result = -1

    while low <= high:
        mid = (low + high) // 2

        if can_place_cows(stalls, num_cows, mid):
            result = mid
            low = mid + 1
        else:
            high = mid - 1

    return result

N, C = map(int, input().split())
stall_positions = list(map(int, input().split()))

result = largest_minimum_distance(stall_positions, C)
print(result)
