#include <iostream>
using namespace std ;

int main (void){
    string name;
    cin >> name ;
    name[0]=toupper(name[0]);
    cout << name ;
}