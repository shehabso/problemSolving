#include <bits/stdc++.h>
using namespace std;
void updateArray(int arr[],int i,int val){
    arr[i]=val;
}
void print (int arr[],int n){
    for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
}
int main(){
int arr [5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
updateArray(arr,1,13);
print(arr,n);
    return 0;
}
	