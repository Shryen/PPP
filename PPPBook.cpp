#include "std_lib_facilities.h"

void Operators(double n);

int main()
{
    /*
    cout << "Please enter your first name and age: \n";
    string FirstName = "";
    double Age = 0;
    cin >> FirstName;
    cin >> Age;
    cout << "Hello, " << FirstName << "! " << Age*12 << " months old!\n";
    */
    cout << "Please enter a floating-point value: ";
    double n = 0.0;
    cin >> n;
    Operators(n);


    keep_window_open();
    return 0;
}

void Operators(double n) {
    cout << "n == " << n
        << "\nn+1==" << n + 1
        << "\nthree times n == " << 3 * n
        << "\ntwice n == " << n + n
        << "\nsquared n == " << n * n
        << "\nhalf of n == " << n / 2
        << "\nsquare root of n == " << sqrt(n)
        << "\n";
}