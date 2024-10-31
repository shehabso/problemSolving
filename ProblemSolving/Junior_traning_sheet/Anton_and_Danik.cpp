#include <iostream>
using namespace std;
int main(){
int d=0;
int A=0;
int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
	if(a[i]=='A'){
		A++;
	}else{
		d++;
	}
}
if(A>d){
	cout<<"Anton";
}else if(d>A){
	cout<<"Danik";
}else{
	cout<<"Friendship";
}
}