import sys
def egg_drop(egg, floor):
    if floor == 1 or floor == 0:
        return floor

    if egg == 1:
        return floor

    min = sys.maxsize
    for i in range(1, floor+1):
        temp = max(egg_drop(egg-1, i-1), egg_drop(egg, floor-i))
        if temp < min:
            min = temp

    return min + 1

eggs = 2

floors = 10

print(egg_drop(eggs, floors))
