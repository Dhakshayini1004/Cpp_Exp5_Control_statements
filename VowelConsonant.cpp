//Dhakshayini Usha R
//PRN-24070123039
//ENTC A2

#include <iostream>
using namespace std;

int main() {
    
    char alphabet;
    
    cout << "Enter a alphabet: ";
    cin >> alphabet;
    
    if(alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U' || alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
    {
        cout << "It is a vowel";
    }
    else{
        cout << "It is a consonant";
    }

    return 0;
}
