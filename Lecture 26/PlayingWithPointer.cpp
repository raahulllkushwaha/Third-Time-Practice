#include <iostream>
using namespace std;

int main()
{

    // int arr[10] = {1, 5, 3};
    // int arr1[10] = {23, 122, 41, 67};
    // cout << "Address of first memory block is " << arr << endl;
    // cout << "Address of first memory block is " << *arr << endl;
    // cout << "Address of first memory block is " << *arr[0] << endl;

    // cout << "Address of first memory block is " << &arr[0] << endl;
    // cout << "Address of first memory block is " << &arr[1] << endl;
    // cout << "Address of first memory block is " << &arr[6] << endl;

    // cout << arr[5];

    // cout << *arr + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr) + 1 << endl;

    // cout<<"1st " <<arr1[2]<<endl;
    // cout<<"2nd "<<*(arr1+2)<<endl;

    // int i = 3;
    // cout<< i[arr1]<<endl;
    // cout<< arr1[i]<<endl;

    /* int temp[10] = {1, 3};
     cout << sizeof(temp) << endl;
     cout << "1st " << sizeof(*temp) << endl;
     cout << "2nd " << sizeof(&temp) << endl;
     int *ptr = &temp[0];
     cout << sizeof(ptr) << endl;
     cout << sizeof(&ptr) << endl;
     cout << sizeof(*ptr) << endl;


    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    int *ptr = &a[0];
    //   cout<<"1st "<< (ptr) << endl;
     cout <<"2nd "<< (&ptr) << endl;
    //  cout <<"3rd "<< (*ptr) << endl;
       */

    int arr[4] = {1, 2, 3, 4};
    //   arr = arr + 1;  //error

    // int *ptr = &arr[0];
    // cout << ptr << endl;
    // ptr = ptr + 1;
    // cout << ptr << endl;

    // char ch[6]="abcde";

    // cout<<arr<<endl;
    // cout<<ch<<endl;

    // char *c = &ch[0];
    // //Print entire string
    // cout<<c<<endl<<endl<<endl;

    // char temp = 'z';
    // char *p = &temp;
    // cout << p << endl;

    char ch[6]="abcde";
    // char *c = "abcde";  //Very risky
    cout<<ch<<endl;
    return 0;
}