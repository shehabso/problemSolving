#include <iostream>
#include<cstdlib>
using namespace std;
#define max 100
void bubble_sort(int arr[],int e){
    int i=e;
    while (i>0){
        if(arr[i]>arr[i-1])swap(arr[i],arr[i-1]);
        i--;
    }
}
int main(void){
int arr[max];
int n;

 cout<< "enter the number of element "<< endl;
cin >>n;
 int i=0;
    // taking a random number 
    for(int i=0;i<n;i++){
        arr[i]=rand()%10;
    }

    // display the output 
    cout << "Before sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 // Selection bubble algorithm
for (int i=0;i<n;i++){
    bubble_sort(arr,n-1);
}
cout <<endl;
 cout <<"numbers after sorting "<<endl;
  for(int i=0;i<n;i++){
   cout<< arr[i]<< " ";
 }

 return 0;
}
