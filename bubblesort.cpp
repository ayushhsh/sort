#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
     cout<<"sorted array\n";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    cout<<"Enter no of array elements\n";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,n);
}


