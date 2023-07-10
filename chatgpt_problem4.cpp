/*Create a function named printPattern that takes an integer as a parameter
and prints a pattern of asterisks. The pattern should have n rows,
where the ith row contains i asterisks.*/

#include<iostream>
using namespace std;
void printPattern(int a)
{
    int i,j;
    cout<<"This is a pattern of left triangle"<<endl;

    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}


int main()
{
     int n;
    cout<<"Line: ";
    cin>>n;

    printPattern(n);

    return 0;
}


