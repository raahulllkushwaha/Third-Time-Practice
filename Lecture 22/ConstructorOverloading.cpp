#include <iostream>
using namespace std;

class Room
{
private:
    double length;
    double breadth;

public:
    Room()
    {
        length = 6.9;
        breadth = 4.2;
    }
    Room(double l, double b)
    {
        length = l;
        breadth = b;
    }
    Room(double len)
    {
        length = len;
        breadth = 7.2;
    }
    double calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Room room1, room2(8.2, 6.2), room3(7.2);
    cout << room1.calculateArea() << endl;
    cout << room2.calculateArea() << endl;
    cout << room3.calculateArea() << endl;
}