#include <bits/stdc++.h>
using namespace std;

void insert(int a[],int n)
{
    int i=n,temp;
    temp=a[i];
    while(i>1 && temp>a[i/2])
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
}

int del(int b[],int n)
{
    int i,j,m,temp,val;
    val=b[1];
    m=b[n];
    b[1]=b[n];
    b[n]=val;
    i=1;
    j=i*2;

    while(j<=n-1)
    {
        if(j<n-1 && b[j+1]>b[j])
            j=j+1;
        if(b[i]<b[j])
        {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            i=j;
            j=j*2;
        }
        else
            break;
    }
    return val;
}


int main()
{

   int arr[] = {0,3,54,16,84,61,68,91};
   for(int i=2;i<=7;i++)
        insert(arr,i);
   for(int i=7;i>1;i--)
        del(arr,i);

      for(int i=1;i<=7;i++)
            cout<<arr[i]<<" ";
      cout<<endl;
    return 0;
}
