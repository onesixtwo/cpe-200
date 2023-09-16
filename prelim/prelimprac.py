class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            return None

    def is_empty(self):
        return len(self.items) == 0

num = int(input("Enter number: "))

n = str(num)
stack = Stack()

for digit in n:
    stack.push(digit)

rnum = ''
while not stack.is_empty():
    rnum += stack.pop()

if n == rnum:
    print("number is a palindrome")
    
else:
    print("not a palindrome number")
