//NAME : Dhakshayini Usha R
//ENTC A2
//PRN : 24070123039
//Even or Odd
#include<iostream>

using namespace std;

int main(){
    int num1;
    cout<<"ENter a number for odd-even test: ";
    cin>>num1;
    
    if(num1%2 == 0){
        cout<<"The entered number "<<num1<<" is even"<<endl;
    }
    else{
        cout<<"The entered number "<<num1<<" is odd"<<endl;
    }
    return 0;
}
