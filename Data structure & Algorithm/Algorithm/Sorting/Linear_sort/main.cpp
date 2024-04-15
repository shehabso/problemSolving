#include <iostream>
#include<cstdlib>
#define max 100
using namespace std ;
int main(void){
    int arr[max];
    int n;
    cout<<"Enter a number N:"<<endl;
    cin>>n;
    // taking a random number 
    for(int i=0;i<n;i++){
        arr[i]=rand()%10;
    }
    // display the output 
    cout << "Before sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // sorting algoritm 
    cout<<endl<<"After sorting "<<endl;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            int temp=0;
            
            // if(arr[j]<arr[i]){
            //     temp=arr[i];
            //     arr[i]=arr[j];
            //     arr[j]=temp;
            // }
            if(arr[j]<arr[i]) {swap(arr[i],arr[j]);}
            else{}
        }
    }
    // display the output 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}