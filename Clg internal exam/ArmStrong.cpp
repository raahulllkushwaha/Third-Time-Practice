#include<iostream>
using namespace std;

int main(){
    int num,originalNum,remainder,result=0;
    cout<<"Enter a number:- "<<endl;
    cin>>num;
    originalNum = num;
    while(originalNum!= 0){
        remainder = originalNum %10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }
    if(result==num){
        cout<<num<<" is Arm strong number "<<endl;
    }
    else{
        cout<<num<<" is not a Arm Strong Number "<<endl;
    }
}