// Name : Dhakshayini Usha R
//ENTC A2
//PRN: 24070123039

#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    int choice;
    cout<<"Enter 2 numbers for basic calculator: ";
    cin>>num1;
    cin>>num2;
    
    cout<<"Enter 1 for addition"<<endl<<"Enter 2 for Subtraction"<<endl<<"Enter 3 for Multiplication"<<endl<<"Enter 4 for Division"<<endl;
    cin>>choice;
    
    switch(choice){
        case 1 : 
        cout<<"Sum: "<<num1+num2<<endl;
        break;
        
        case 2 :
        cout<<"Difference: "<<num1-num2<<endl;
        break;
        
        case 3 :
        cout<<"Product: "<<num1*num2<<endl;
        break;
        
        case 4 :
        if(num2 != 0){
        cout<<"Quotient: "<<num1/num2<<endl;
        }
        else{
            cout<<"Invalid";
            exit(0);
        }
        break;
        
        default :
        cout<<"Invalid";
        exit(0);
    }
    return 0;
}
