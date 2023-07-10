#include<iostream>
using namespace std;

 void func(int arr[10])
    {
        int i;
        for(i=0; i<10; i++)
        {

            cout<<arr[i]<<"\t";

        }
    }

int main()
{
   int arr[10] = {2,3,5,7,2,9};
   cout<<endl;
   func(arr);
   cout<<endl;
    return 0;
}
