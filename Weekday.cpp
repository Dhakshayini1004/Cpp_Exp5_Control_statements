// Name : Dhakshayini Usha R
//ENTC A2
//PRN: 24070123039

#include<iostream>
using namespace std;

int main(){
    int choice;
    
    cout<<"Enter a number"<<endl;
    cin>>choice;
    
    switch(choice){
        case 1 : 
        cout<<"It's a Monday!! Prepare for the week "<<endl;
        break;
        
        case 2 :
        cout<<"It's a Tuesday!! Long miles to go  "<<endl;
        break;
        
        case 3 :
        cout<<"It's a Wednesday!! You're Halfway to weekend "<<endl;
        break;
        
        case 4 :
        cout<<"It's a Thursday!! Plan your weekend "<<endl;
        break;
        
        case 5 :
        cout<<"It's a Friday!! Chill you have Saturday,Sunday"<<endl;
        break;
        
        case 6 :
        cout<<"It's a Saturday!! Have Plans, Enjoy Life "<<endl;
        break;
        
        case 7 :
        cout<<"It's a Sunday!! The real enjoyment of next week begins "<<endl;
        break;
        
        default :
        cout<<"Invalid";
        exit(0);
    }
    return 0;
}
