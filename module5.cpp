//The Program will perform the enqueue (2 times) , dequeue and front operations.
#include <iostream>
#include <queue>
using namespace std;


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
    
    queue<int> q;
    
    q.push(1);
    q.push(2);
    
    cout << "\nElements of queue:";
    show(q);
    cout << "\nQueue size: " << q.size()<< "\n";
    cout << "\nDequeue\n";
    
    q.pop();
    
    cout << "\nQueue size: " << q.size();
    cout << "\nQueue front: " << q.front();
    cout << "\nElements of queue:";
    show(q);
    
    return 0;
    
    
    
    
    
    
}
