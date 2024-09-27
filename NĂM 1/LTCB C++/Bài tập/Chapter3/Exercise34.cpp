#include <iostream>
#include<String>
using namespace std;

int main(){
    string letter;
    cout<<"Enter letter from keyboad : ";
    getline(cin,letter);
    cout<<letter;
    cout<<"Size of the letter = "<<letter.size();
}