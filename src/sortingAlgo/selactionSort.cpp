#include<bits/stdc++.h>
using namespace std;

void interchange(int *f,int *p)
{
    int temp=*f;
    *f=*p;
    *p=temp;
}
void selactionSort(int a[],int n)
{
    int minIndex=0;
    for(int i=0; i<n-1; i++)
    {
        minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }

        }
        interchange(&a[i],&a[minIndex]);
    }
}

    void printArray(int a[],int n){
        for(int i=0;i<n;i++)
        {
            cout<< a[i] <<"\t";

        }

    }


    int main()
    {
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }

        selactionSort(a,n);
        printArray(a,n);
    }

