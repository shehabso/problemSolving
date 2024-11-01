#include<iostream>
#include <string>
using namespace std;

int main (void){
   string arr;
   int sum=0;


   cin>> arr;
   for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]==arr[j]){
            sum--;
            break;
       }
     }   
     sum++;
   }
      if(sum%2){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}