#include<bits/stdc++.h>
using namespace std;
int part(int a[],int low,int high)
{
    int pi=a[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<pi)
        {
            //swap a[i] with a[j]
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    // swap a[i+1] with a[high]
        int t=a[i+1];
        a[i+1]=a[high];
        a[high]=t;
        return i+1;
}
void qs(int a[],int low,int high)
{
    if(low<high)
    {
        int p=part(a,low,high);
        qs(a,low,p-1);
        qs(a,p+1,high);
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
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
    qs(a,0,n-1); 
    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";
    printArray(a,n);
}