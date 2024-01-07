#include <iostream>
#include <string>
using namespace std;
int main(){
  string arr1;
  string arr2;
int result =0;
  cin >> arr1 ;
  cin >> arr2;
  
  for (int i=0;i<arr1.size();i++){
      arr1[i]=toupper(arr1[i]);
      arr2[i]=toupper(arr2[i]);
        if(arr1[i]-arr2[i]>0){
        result=1;
        break;
    }
    else if (arr1[i]-arr2[i]<0)
    {
        result=-1;
        break; 
    }
    else{
        /*No thing MISRA C */
    }
  }
cout <<result;
}