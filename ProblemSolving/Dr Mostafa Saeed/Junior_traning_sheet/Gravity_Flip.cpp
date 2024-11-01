#include<iostream>
#include<algorithm>
using namespace std;
int main(void){

    int n;
    int arr[101];
    int temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
        for(int j=0;j<n;j++){
            cout<<" "<<arr[j];
       }
}