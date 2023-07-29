#include<iostream>
using namespace std;

int main(){
    long long int binary=0, decimal,remainder,product =1;
    cout<<"Enter a decimal number to convert binary:- "<<endl;
    cin>>decimal;
    while(decimal!=0){
        remainder=decimal%2;
        binary=binary+remainder*product;
        decimal=decimal/2;
        product = product*10;
    }
    cout<<"binary is "<<binary;
}