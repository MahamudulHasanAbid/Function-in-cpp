#include<iostream>
using namespace std;

long int calculateFactorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    return  n*calculateFactorial(n-1);
}

int main()
{
    int number;
    cout<<"Give the range for calculate factorial: ";
    cin>>number;

    int result= calculateFactorial(number);
    cout<<"Factorial of "<<number<<" is: "<<result;

    return 0;
}
