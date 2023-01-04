#include<iostream>
// There are two type of header files
using namespace std;

int main(){

    int a = 5, b = 4;
    cout<<"This is hello world"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    //Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- is "<<a--<<endl;
    cout<<"The value of ++ a is "<<++a<<endl;
    cout<<"The value of -- a is "<<--a<<endl;
    //Assignment operators --> used to assign values to variables
    //Comparison operator
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    //Logical operator
    cout<<"Following are the logical operator in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;

    return 0;

}