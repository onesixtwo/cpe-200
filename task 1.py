print("RECURSIVE")
list =[3, 7, 10, 5, 45, 20, 33]

def sum(n):
    if len(n)==0:
        return 0
    elif type(n[0]) is list:
        return sum(n[0]) + sum(n[1:])
    else:
        return n[0] + sum(n[1:]) 
print("Sum:",(sum(list)))   

print("")
print("")
print("NON RECURSIVE")
list = []

n=int(input("enter list lenght: "))

while (n > 0):
    list.append(n)
    n = n-1

print("The sum is:",(sum(list)))

