#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int i , valueIn, valueOut;
    cout<<"Enter value : ";
    cin>>valueIn;
    valueOut = 1;
    i =1;
    int valueOut1 = 1;
    int valueOut2 = 0;
    do
    {
        valueOut1 = i * i;
        valueOut2 += valueOut1;
        i++;
    }
    while(i <=valueIn);

    for(int a = 1; a <=valueIn; a++){
        if(a < valueIn){
        cout<<"("<<a<<"*"<<a<<")+";
        }
        else if(a == valueIn){
            cout<<"("<<a<<"*"<<a<<")";
        }
    }
    cout<<" = "<<valueOut2;
}