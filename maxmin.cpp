#include<iostream>
using namespace std;
int main()
{
    int a[30];
    int max=0,min=a[0],i,n;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"Enter the numbers:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
         if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum element of the array:"<<max<<endl;
    cout<<"Minimum element of the array:"<<min;
    return 0;
}