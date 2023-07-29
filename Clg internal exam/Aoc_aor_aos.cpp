#include <iostream>
using namespace std;

int main()
{
    float length, breadth, side, radius, area;
    int ch;

    cout << "1. Area of circle " << endl;
    cout << "2. Area of Rectangle " << endl;
    cout << "3. Area of square " << endl;
    cout << "Enter your choice:  " << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        cout << "Enter the radius of thr circle " << endl;
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "The area of circle is : " << area << endl;
        break;
    }
    case 2:
    {
        cout << "Enter the length and breadth of rectangle: " << endl;
        cin >> length >> breadth;
        area = length * breadth;
        cout << "Area of rectangle is: " << area << endl;
        break;
    }
    case 3:
    {
        cout << "Enter the side of square : " << endl;
        cin >> side;
        area = side * side;
        cout << "Area of square is: " << area << endl;
        break;
    }
    default:
    {
        cout << "Invalid Choice...Try Again!!" << endl;
        break;
    }
    }
    return 0;
}