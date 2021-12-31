
#include <iostream>

using namespace std;

int main() {

    int num, tempvar;
    int count = 0;

    // Take input from user
    cout << "Enter any number : ";
    cin >> num;

    // Store to temporary variable.
    tempvar = num;
    
    while(tempvar != 0) {

        // Increment counter
        count++;

        // Remove last digit of 'temp'
        tempvar /= 10;
    }

    cout << endl << "Total digits in " << num << " : "  << count;

    return 0;
}
