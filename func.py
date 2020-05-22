def slice(a, start, stop, step=1):
    i = 0
    a = a[:]
    if step == -1:
        a.reverse()
        return a
        
    elif step < 0:
        a.reverse()
        step=abs(step)
        
    c = []
    while (i < stop - start):
        c.append(a[start + i])
        i+=step
    return c

n = input().split()

print(slice(n, 0, len(n), -3))

print(n[::-3])
