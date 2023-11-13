class Node:
    def __init__(self, data):
        self.data = data
        self.L = None
        self.R = None

def createNode(data):
    nNode = Node(data)
    return nNode

def insertNode(root, data):
    if not root:
        root = createNode(data)
    else:
        if data < root.data:
            root.L = insertNode(root.L, data)
        else:
            root.R = insertNode(root.R, data)
    return root

def show(root):
    if root:
        show(root.L)
        print(root.data, end=" ")
        show(root.R)

if __name__ == "__main__":
    numNodes = int(input("Enter the number of nodes: "))
    
    root = None

    for i in range(numNodes):
        nodeValue = input(f"Enter value for node {i + 1}: ")
        root = insertNode(root, nodeValue)

    print("Tree elements:")
    show(root)
