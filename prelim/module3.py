#Create a singly Linked List with 10 elements using C++ or Python.

class Node:
    def __init__(self,dataval = None):
        self.dataval = dataval
        self.nextval = None
        
class SLinkedlist:
    def __init__(self):
        self.headval = None
        
    def listprint(self):
        printval=self.headval
        while printval is not None:
            print(printval.dataval)
            printval=printval.nextval


list = SLinkedlist()

list.headval=Node("Gal Gadot")

e2=Node("Amber Heard")

list.headval.nextval=e2

e3 = Node ("scarllet johansson")

e2.nextval=e3

e4 = Node ("Elizabeth Olsen")

e3.nextval=e4

e5 = Node ("Megan Fox")

e4.nextval=e5

e6 = Node ("Emma Stone")

e5.nextval=e6

e7 = Node ("Natalie Portman")

e6.nextval=e7

e8 = Node ("Jennifer Lawrence")

e7.nextval=e8

e9 = Node ("Ana de Armas")

e8.nextval=e9

e10 = Node ("Angelina Jolie")

e9.nextval=e10

list.listprint()

