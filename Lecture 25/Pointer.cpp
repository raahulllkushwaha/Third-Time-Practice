#include <iostream>
using namespace std;

int main()
{

    // int num = 5;
    // int *ptr = &num;
    // cout << num+1<<endl<<++(*ptr)<<endl<<endl;

    // cout<<sizeof(num)<<endl<<sizeof(ptr);

    // int *p = 0;
    // cout<<p;

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "Before " << num << endl;
    (*p)++;
    cout << "After " << num << endl;

    // copying a pointer
    //  int *q = p;
    //  cout << p <<" - " << q << endl;
    //  cout << *p <<" - " << *q << endl;

    int i = 3;
    int *t = &i;
    *t = *t - 1;
    cout << "Before t" << t << endl;
    t = t - 1;
    cout << "After t" << t << endl;
    return 0;
}