//GROUP 10 MEMBERS:
//Vargas,John kenneth
//Ongtengco, Kiel
//Malubay, Carl
//Espiritu, Hanz Rafael
//Garcia, Kyle Marc

#include <iostream>
#include <limits>
#include <queue>
#include <stack>

using namespace std;

class Node {
public:
    dataval;
    Node* nextval;
    Node(dataval = ""){
        this->dataval = dataval;
        this->nextval = nullptr;
    }
};

class linkedlist{
public:
    Node* headval;
    linkedlist(){
        this->headval = nullptr;
    }
    void listprint(){
        Node* printval = this->headval;
        while (printval !=nullptr){
            cout << printval->dataval << endl;
            printval = printval->nextval;
        }
    }
};
void show(stack<int> stk) {
    stack<int> s = stk;
    while (!s.empty()) {
        cout << " " << s.top(); 
        s.pop();
    }
}

void show(queue<int>gq)
{
    queue <int> g = gq;
    while (!g.empty())
    {
        cout << " " << g.front();
        g.pop();
    }
}

int main()
{
    int num[3];
    int ans;
    stack<int> stacknamin;
    queue<int> qnamin;
    
    cout << "enter num 1: ";
    cin >> num[0];
    
    cout << "enter num 2: ";
    cin >> num[1];
    
    cout << "enter num 3: ";
    cin >> num[2];
    
    while (true) {
        cout << "\nMenu: \n1. Array \n2. Linked List \n3. Stack \n4. Queue \n5. Quit";
        cout << "\nEnter choice here: ";

        if (!(cin >> ans)) {
            cout << "\nerror\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (ans) {
            case 1:
            
                cout << "\nArray Data Structure Implemented\n";
                cout << "Items of the Array are:  ";
                for (int i = 0; i < 3; i++)
                {
                    cout << num[i] << " ";
                }
                cout << "\n";
                
                break;

            case 2:
                linkedlist list;
                list.headval = new Node(num[0]);
                Node* e2 = new Node(num[1]);
                list.headval->nextval = e2;
                Node* e3 = new Node(num[2]);
                e2->nextval = e3;
                

                break;

            case 3:
                
                stacknamin.push(num[0]);
                stacknamin.push(num[1]);
                stacknamin.push(num[2]);
                
                cout << "\nStack Data Structure Implemented";
                cout << "\nElements of stack:";
                show(stacknamin);
                cout << "\n";
                
                break;

            case 4:
               
                qnamin.push(num[0]);
                qnamin.push(num[1]);
                qnamin.push(num[2]);
                
                cout << "\nQueue Data Structure Implemented";
                cout << "\nElements of Queue:";
                show(qnamin);
                cout << "\n";
                
                break;
            
            case 5:
                return 0;
                
            default:
                cout << "error\n";
        }
    }
}
