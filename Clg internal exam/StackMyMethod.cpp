#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);

    cout << "Top element: - " << s.top() << endl;
    // cout << "Top element: - " << s.z<< endl;
    s.pop();
    cout << "Top element: - " << s.top() << endl;
    // s.pop();
    // s.pop();
    // s.pop();
    cout << "Size of the stack is: - " << s.size() << endl;
    // cout<<"Top element: - "<<s.pop(8);
}