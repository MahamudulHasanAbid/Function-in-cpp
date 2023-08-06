
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

double power(double m,int n=2)
{
    double result =  pow(m,n);
    return result;
}
int main()
{

    double m, result;
    int n;
    cout<<"Enter value for base: ";
    cin>>m;
    cout<<"Enter value for power: ";
    cin>>n;

    cout<<power(m,n)<<" "<<endl;

    cout<<power(m)<<" "<<endl;

    return 0;
}
