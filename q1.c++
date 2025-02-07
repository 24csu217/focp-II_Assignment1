Q-1 
  a)
#include <iostream>
using namespace std;
int main() {
    int n;
    bool Prime = true;
    cout << "Enter a +ve integer: ";
    cin >> n; 
    if (n < 2) {  //Conditon 1 - If less than 2 then can't be prime
        Prime = false;
    }else {
        //Factors checking from 2 to sqrt(n)
        for (int i = 2; i*i <= n; i++){
            if (n%i == 0) {
                Prime = false;
                break;
            }
        }
    }
    if (Prime==true) {
        cout << n << " is prime" << endl;
    }else {
        cout << n << " is not prime" << endl;
    }
    return 0;
}


b) 

if (Prime==true) {
        cout << n << " is prime" << endl;
    }else{
        cout << n << " is not prime" << endl;
        cout << "Factors are: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << ","<< i; 
            }
        }
        cout << endl;
    }
    return 0;
}

