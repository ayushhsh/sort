#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0&&a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
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
