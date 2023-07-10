//Create a function named isEven that takes an integer as a parameter and
//returns true if the number is even, and false otherwise.

#include<iostream>
using namespace std;

bool isEven(long long int a)
{
    if(a%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long long int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(isEven(a))
    {
        cout<<"The number is even. Condition is true"<<endl;
    }
    else
    {
        cout<<"The number is odd. condition is false."<<endl;
    }
    return 0;
}
