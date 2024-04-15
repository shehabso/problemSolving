#include <iostream>
#include<cstdlib>
using namespace std;
#define max 100
void insertion_sort(int arr[],int e){
for (int step = 1; step < e; step++) {
    int key = arr[step];
    int j = step - 1;
    while (key > arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
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
        arr[i]=rand()%100;
    }

    // display the output 
    cout << "Before sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 //  insertion sort algorithm
    insertion_sort(arr,n);
cout <<endl;
 cout <<"numbers after sorting "<<endl;
  for(int i=0;i<n;i++){
   cout<< arr[i]<< " ";
 }

 return 0;
}
