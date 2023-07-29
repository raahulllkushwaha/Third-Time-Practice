#include <iostream>
using namespace std;
class Employee
{
    int id;
    char name[30];

public:
    void getData();
    void putData();
};
void Employee::getData()
{
    cout << "Enter id" << endl;

    cin >> id;
    cout << "Enter name" << endl;
    cin >> name;
}
void Employee::putData()
{
    cout << id << " " << endl;
    cout << name << " " << endl;
}
int main()
{
    Employee emp[30];
    int n, i;
    cout << "Enter no. of Employee";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        emp[i].getData();
        cout << "Employee data: " << endl;
    }
    for (i = 0; i < n; i++)
    {
        emp[i].putData();
    }
    return 0;
}