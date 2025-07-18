//NAME : Dhakshayini Usha R
//ENTC A2
//PRN : 24070123039
//Even or Odd
#include<iostream>

using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    //Without using logical functions or operators(!=,==,&&,|)
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is greatest"<<endl;
        }
        else if(num3>num1){
            cout<<num3<<" is greatest"<<endl;
        }
        else{
            cout<<"Both "<<num1<<" &"<<num3<<" are greater"<<endl;
        }
    }
    
    else if(num2>num1){
        if(num2>num3){
            cout<<num2<<" is greatest"<<endl;
        }
        else if(num3>num2){
            cout<<num3<<" is greatest"<<endl;
        }
        else{
            cout<<"Both "<<num2<<" &"<<num3<<" are greater"<<endl;
        }
    }
    
    else {
        if(num1>num3){
            cout<<"Both "<<num2<<" &"<<num1<<" are greater"<<endl;
        }
        else if(num3>num1){
            cout<<num3<<" is greatest"<<endl;
        }
        else{
            cout<<"All are equal"<<endl;
        }
    }
    
    return 0;
}
