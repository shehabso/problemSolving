#include<iostream>
#include<vector>
using namespace std;
// steps 
//the number will start from 2 
// calculate the facorial is more powerful to use the number 
// reverse the largest array then make a operation on it so pass by reference
// create a vector 1000 elements with size 0
// you should take the second digit for example 15 *2 =30
// write 0 then the carry should be 3

// then handle a carry 
// if the carry is 13  you should put 3 then 1and dont forget to extend the size 

 
void multiply(vector<int> &a, int no, int &size){

	int carry = 0;
	for(int i=0; i < size; i++){

		int product = a[i] * no + carry;
		a[i] = product % 10;
		carry = product / 10;
	}

	//to handle the carry
	while(carry){
		a[size] = carry % 10;
		carry = carry/10;
		size = size + 1;	
	}

}


void bigFactorial(int n){

	vector<int> a(1000,0);
	a[0] = 1;
	int size = 1;

	for(int i=2; i<=n; i++){
		multiply(a,i,size);
	}

	// Print the Result in the Reverse Order
	// size - 1 to 0 
	for(int i = size - 1; i >=0 ; i--){
		cout << a[i];
	}
	cout <<endl;

}


int main(){

	int n;
	cin >> n;

	bigFactorial(n);


	return 0;
}