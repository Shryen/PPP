#include "std_lib_facilities.h"

double ConvertToMeters(double number, string unit);

int main()
{
    int NumberOfInputs = 0;
    string unit{};
    vector<string> BannedUnits = { "y", "yard", "meter", "km", "gallons" };
    double a{0};
    double bigger{0};
    double smaller{0};
    double sum{};
    vector<double> ValuesInMeter = {};
    while (cin >> a >> unit) { 
        a = ConvertToMeters(a, unit);
        if (NumberOfInputs == 0) {
            bigger = a;
            smaller = a;
        }
        else if (a > bigger)
            bigger = a;
        else if (a < smaller)
            smaller = a;

        sum += a;
        ++NumberOfInputs;
        ValuesInMeter.push_back(a);


        for (const string& BannedUnit : BannedUnits)
            if (unit == BannedUnit) {
                cout << "Rejected unit. Please try again!\n";
                sum = 0;
                smaller = 0;
                bigger = 0;
                NumberOfInputs = 0;
                ValuesInMeter.clear();
                break;
            }
    }

    cout << "The numbers are all converted to meter.\n";
    cout << "Largest number: " << bigger << "\n" << "Smallest number: " << smaller << "\n";
    cout << "The sum of all numbers: " << sum << "\n";
    cout << "Number of values used: " << NumberOfInputs << "\n";
    cout << "Values used: \n";
    sort(ValuesInMeter);
    for (double value : ValuesInMeter) {
        cout << value << "m\n";
    }

    cout << '\n';
    keep_window_open();
    return 0;
}

double ConvertToMeters(double number, string unit)
{
    if (unit == "cm")
        number /= 100;
    if (unit == "in")
        number = (number * 2.54) / 100;
    if (unit == "ft")
        number *= 0.3048;
    return number;
}
