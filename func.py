def slice(a, start, stop, step=1):
    a = a[:]
    c = []
    i = 0
    
    if step == -1:
        a.reverse()
        return a
        
    elif step < 0:
        n.reverse()
        step=abs(step)
        
    while (i < stop - start):
        print(i)
        c.append(a[start + i])
        i+=step
    return c

n = input().split()

print(slice(n, 0, len(n), -3))

print(n[::-3])
