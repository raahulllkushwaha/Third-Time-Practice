#include <iostream>
using namespace std;
class Employee
{
private:
    int salary, experience;

public:
    Employee(int x, int y)
    {
        salary = x;
        experience = y;
    }
    Employee(const Employee &newEmployee)
    {
        salary = newEmployee.salary;
        experience = newEmployee.experience;
    }
    void display()
    {
        cout << "Salary: " << salary << endl;
        cout << "Years of experience : " << experience << endl;
    }
};
int main()
{
    Employee emp(12000, 4);
    Employee emp1 = emp;
    cout << "Employee 1 using parameterized " << endl;
    emp.display();
    cout << "Employee 2 using copy constructor " << endl;
    emp.display();
    return 0;
}