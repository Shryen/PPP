#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age: \n";
    string FirstName = "";
    double Age = 0;
    cin >> FirstName;
    cin >> Age;
    cout << "Hello, " << FirstName << "! " << Age*12 << " months old!\n";


    keep_window_open();
    return 0;
}
