#include <iostream>
using namespace std;
class person
{
    int id;
    char name[100];

public:
    void set_p()
    {
        cout << "Enter the Id:  ";
        cin >> id;
        fflush(stdin);
        cout << "Enter the name: ";
        cin.get(name, 100);
    }
    void display_p()
    {
        cout << endl
             << id << "\t" << name << "\t";
    }
    class Student : private Person
    {
        char course[50];
        int fee;

    public:
        void set_s()
        {   
            set_p();
            cout << "Enter teh course name: " << endl;
            fflush(stdin);
            cin.getline(course, 50);
            cout << "Enter the course fee: ";
            cin >> fee;
        } 
            display_p();
            cout << course << "\t" << fee << endl;
        }
    };

 int main(){
    Student s;
    s.set_s();
    s.display_s();
    return 0;
 }