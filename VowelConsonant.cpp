//Name : Dhakshayini Usha R
//PRN : 24070123039
//ENTC A2

#include<iostream>
using namespace std;

int main(){
    char alpha;
    char A,E,I,O,U,a,e,i,o,u;
    
    cout<<"Enter an alphabet :";
    cin>>alpha;
    
    if(alpha == A| alpha == E | alpha == I | alpha == O | alpha == U | alpha == a | alpha == e | alpha == i | alpha == o | alpha == u){
        cout<<alpha<<" is a vowel"<<endl;
    }
    else{
        cout<<alpha<<" is a consonant"<<endl;
    }
    return 0;
}
