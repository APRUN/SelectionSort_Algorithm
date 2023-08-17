#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    // Write C++ code here
    int arr[6]={2,4,2,1,4,-4};
    int size=sizeof(arr)/sizeof(arr[0]);
int min_index,temp;
    for(int i=0;i<size;i++)
    {
        min_index=i;
        for(int j=i;j<size;j++)
        {
            if(arr[min_index]>arr[j])
            {
                temp=arr[min_index];
                arr[min_index]=arr[j];
                arr[j]=arr[temp];
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i],",";
    }
}