#include <iostream>
#include<cstdlib>
using namespace std;
#define max 100
int GetThesmallest_number(int arr[],int s,int e){
   int i=s;
   int j=i;
   while(i<=e){
      if(arr[i]<arr[j]){ j=i;}
    i++;  
   }
   return j;
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
 // Selection sorting algorithm
for(int i=0;i<n;i++){
   int number =GetThesmallest_number(arr,i,n-1);
   swap(arr[i],arr[number]);
}
cout <<endl;
 cout <<"numbers after sorting "<<endl;
  for(int i=0;i<n;i++){
   cout<< arr[i]<< " ";
 }

 return 0;
}
