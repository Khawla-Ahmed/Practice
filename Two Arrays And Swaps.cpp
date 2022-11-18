//https://codeforces.com/problemset/problem/1353/B
#include<bits/stdc++.h>
using namespace std;
void sort_ascending(int arr[31],int n)
{
    int temp;

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }
}
void sort_descending(int arr[31],int n )
{
    int temp;

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]< arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }



}


int main()
{
    int test_case;
    cin>>test_case;
    for(int p=0; p<test_case; p++)
    {
        int arr_size,swapp;
        cin>>arr_size>>swapp;
        int arr1[arr_size],arr2[arr_size];
        for(int m=0; m<arr_size; m++)
        {
            cin>>arr1[m];
        }
        for(int q=0; q<arr_size; q++)
        {
            cin>>arr2[q];
        }
        sort_ascending(arr1,arr_size);
        sort_descending(arr2,arr_size);

        for(int x=0; x<swapp; x++)
        {
            if(arr1[x]<arr2[x])
            {
                arr1[x]=arr2[x];

            }
        }




        int sum=0;
        for(int w=0; w<arr_size; w++)
        {
            sum=sum+arr1[w];
        }
        cout<<sum<<endl;

    }


    return 0;
}
