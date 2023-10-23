// Example

// Input:
// str: apples
// ch1: a
// ch2: p

// Output:
// paales

// Explanation
// All the ‘a’ in the string is replaced with ‘p’. And all the ‘p’s are replaced with ‘a’.

#include<iostream>

using namespace std;

int replace_char(string& str, char ch1, char ch2){

    for(int i = 0; i < str.length(); i++){

    if( str[i] == ch1){
        str[i] = ch2;
    }
    else if( str[i] == ch2){
        str[i] = ch1;
    }

    }

}

int main(){

    string str = "apples";
    char ch1 = 'a';
    char ch2 = 'p';

    replace_char(str, ch1, ch2);

    cout<<"Replaced string: "<< str << endl;

    return 0;

}
