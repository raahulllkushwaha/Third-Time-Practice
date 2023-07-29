#include <iostream>
using namespace std;
class sum
{
private:
   int a;
   int b;
    public:
     int add(int a, int b){
        return a + b;
    }

};
// sum::add(int , int);
int main()
{
    sum s;
    cout << "The sum is:- " << s.add(20, 29) << endl;
    return 0;
}