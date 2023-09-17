def find_x_power_k(n, k):
    left = 1 
    right = n  
    result = 0
    
    while left <= right:
        mid = left + (right - left) // 2
        mid_power_k = mid ** k
        
        if mid_power_k <= n:
            result = mid
            left = mid + 1
        else:
            right = mid - 1
    
    return result

# Input
T = int(input())
for _ in range(T):
    n, k = map(int, input().split())
    x = find_x_power_k(n, k)
    print(x)
