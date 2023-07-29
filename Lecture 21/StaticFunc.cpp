// #include <iostream>
// using namespace std;

// class MyClass
// {
// public:
//     static int staticVar;
//     static void staticFunc();
// };

// int MyClass::staticVar = 0;
// void MyClass::staticFunc()
// {
//     cout << "Hello from a static function! " << endl;
// }
// int main()
// {
//     MyClass obj1, obj2;
//     obj1.staticVar = 5;
//     cout << obj2.staticVar << endl;
//     MyClass::staticFunc();
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
   int num = 10; // declaring an integer variable num and initializing it with the value 10
   int *ptr; // declaring a pointer variable ptr which will store the memory address of an integer
   ptr = &num; // storing the memory address of num variable in the pointer variable ptr
   
   cout << "The value of num is: " << num << endl;
   cout << "The memory address of num is: " << &num << endl;
   cout << "The value stored in the pointer variable ptr is: " << ptr << endl;
   cout << "The value pointed to by the pointer variable ptr is: " << *ptr << endl;

   return 0;
}
