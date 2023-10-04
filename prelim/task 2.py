print("RECURSIVE")
def rec(n):
   if n <= 1:
       return n
   else:
       return(rec(n-1) + rec(n-2))

nthterm = 15

if nthterm <= 0:
   print("enter number")
else:
   print("Fibonacci:")
   for i in range(nthterm):
       print(rec(i))

print("")
print("")
print("NON RECURSIVE")
def fb(n):
    if n == 1:
        return [1]
    if n == 2:
        return [1, 1]
    fibs = [1, 1]
    for _ in range(2, n):
        fibs.append(fibs[-1] + fibs[-2])
    return fibs

print("Fibonacci:")
print(fb(1))
print(fb(2))  
print(fb(3))
print(fb(4))
print(fb(5))
print(fb(6))
print(fb(7))
print(fb(8))
print(fb(9))
print(fb(10)) 