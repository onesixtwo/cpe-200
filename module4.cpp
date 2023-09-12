//The Program will push 5 items on the stack, perform 2 pop operation before displaying the items from the stack.

#include <iostream>
#include <stack> 
using namespace std;

void show(stack<int> stk) {
    stack<int> s = stk;
    while (!s.empty()) {
        cout << " " << s.top(); 
        s.pop();
    }
}

int main() {
    stack<int> mystack; 

    mystack.push(1);
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    
    cout << "\nElements of stack:";
    show(mystack);
    cout << "\nStack size: " << mystack.size()<<"\n";
    cout << "\nPopping 2 stacks\n" ;
    
    mystack.pop();
    mystack.pop();

    cout << "\nStack size: " << mystack.size();
    cout << "\nStack top element: " << mystack.top(); 

    cout << "\nElements of stack:"; 

    show(mystack);

    return 0;
}