#include <iostream>
using namespace std;
int main() {
    int* dynamicArray = nullptr;
    int n = 0;
    cout << "Enter the size of the array: ";
    cin >> n;
    // Dynamically allocate memory
    dynamicArray = new int[n];
    // Check if the memory was successfully allocated
    if(dynamicArray == nullptr) {
        cerr << "Memory could not be allocated for the array!" << endl;
        return 1;
    }
    // Get the elements of the array from the user
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> dynamicArray[i];
    }
    // Display the elements of the array
    cout << "Elements of the array: ";
    for(int i = 0; i < n; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    // Deallocate memory
    delete[] dynamicArray;
    return 0;
}