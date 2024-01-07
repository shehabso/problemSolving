#include<iostream>
using namespace std;
int main(void){
     string word;
     int moves =0;
     int count =0;
     char base ='a';
     
     cin>> word ;
     for (int i=0;i<word.size();i++){
        moves=abs(word[i]-base);
        if(moves>13){
            count +=abs(moves-26);
        }
        else{
            count+=moves;
        }
        base=word[i];
     }
     cout <<count;    
}