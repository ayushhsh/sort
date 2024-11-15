#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int h)
{
    int n1=mid+1-l;
    int n2=h-mid;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++)
        x[i]=a[l+i];
    for(int i=0;i<n2;i++)    
        y[i]=a[mid+i+1];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(x[i]<=y[j])
        {
            a[k]=x[i];
            i++;
        }
        else{
        a[k]=y[j];
        j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=x[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=y[j];
        j++;
        k++;
    }
}
void ms(int a[],int l,int h)
{
    if(l<h)
    {
        int mid=l+(h-l)/2;
        ms(a,l,mid);
        ms(a,mid+1,h);
        merge(a,l,mid,h);
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
    ms(a,0,n-1); 
    // for(int i=0;i<n;i++)
    // cout<<a[i]<<" ";
    printArray(a,n);
}
