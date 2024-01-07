#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string word ;
    int count =0;
    cin >>word;
    for (int i=0;i<word.size();i++){
        if(isupper(word[i])){
            count ++;
        }
        else{
            count --;
        }
    }
    if (count >0){
        for(int i=0;i<word.size();i++){
            word[i]=toupper(word[i]);
            cout<<word[i];
        }
    }
    else{
        for(int i=0;i<word.size();i++){
            word[i]=tolower(word[i]);
            cout<<word[i];
        }
    }

    return 0;
}