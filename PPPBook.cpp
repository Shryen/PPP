#include "std_lib_facilities.h"


int main()
{
    int a{ 0 };
    cout << "Please enter a number between 1-10!\n";
    cin >> a;
    switch (a) {
    case 1: case 3: case 5: case 7: case 9:
        cout << a << " is odd!";
        break;
    case 2: case 4: case 6: case 8: case 10:
        cout << a << " is even!";
        break;
    default:
        cout << a << " is not a digit or not between 1 and 10!";
        break;
    }
    
    cout << '\n';
    keep_window_open();
    return 0;
}

