#include <iostream>
using namespace std;

class Rect_Box
{
    int length;
    int breadth;
    int height;

public:
    Rect_Box(int, int, int);

    int area_of_rect()
    {
        return (length * breadth);
    }
    int volume_of_rect()
    {
        return (length * breadth * height);
    }
    int length1()
    {
        return length;
    }
    int breadth1()
    {
        return breadth;
    }
    int height1()
    {
        return height;
    }
};

Rect_Box :: Rect_Box(int x, int y, int z)
{
    length = x;
    breadth = y;
    height = z;
}
int main()
{
    Rect_Box my_rectangle(2, 2, 2);

    // cout << "The length of rectangle " << my_rectangle.length1() << endl;
    // cout << "The breadth of rectangle " << my_rectangle.breadth1() << endl;
    cout << "The length of rectangle " << my_rectangle.area_of_rect() << endl;
    cout << "The length of rectangle " << my_rectangle.volume_of_rect() << endl;

    return 0;
}