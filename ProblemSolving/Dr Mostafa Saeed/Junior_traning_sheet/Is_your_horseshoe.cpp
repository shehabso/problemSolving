#include <iostream>
using namespace std ;
int main(void)
{
    long arr[4];
    int ans=0;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
      for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
           if( arr[i]==arr[j]){
            ans++;
           }
        }
      }
      if(ans==3){
       ans=ans-1;
      }
    else if(ans>4){
        ans=ans-3; 
    }
cout <<ans;
}