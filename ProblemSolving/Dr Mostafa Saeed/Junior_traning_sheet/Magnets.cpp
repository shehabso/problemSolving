#include<iostream>
using namespace std;
int main(void){
    int n,x;
    int count=0;
    int flag1=0;int flag2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if((x==10)&&(flag1==0)){
            flag1=1;
            flag2=0;
            count++;
        }
        else if((x==01)&&(flag2==0)){
            count++;
            flag2=1;
            flag1=0;
        
    } 
}
cout<<count;
}