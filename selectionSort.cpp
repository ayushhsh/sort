#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                // int temp=a[i];
                // a[i]=a[j];
                // a[j]=temp;
                swap(a[i],a[j]);
            }
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