Q-2 
  a)
#include <iostream>
using namespace std;
int main() {
    int size, arr[size];
    cout << "Enter number of elements in array ";
    cin >> size;
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // accepting input from user for array 
    }   
    cout << endl;
    return 0;
}

b)

#include <iostream>
using namespace std;
int main() {
    int size, arr[size];
    cout << "Enter number of elements in array ";
    cin >> size;
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // accepting input from user for array 
    }
    cout << "Reversed array: ";
    for (int i = size-1; i >= 0; i--) {
        cout << arr[i] << " "; //printing reverse array
    }
    
    cout << endl;
    return 0;
}
