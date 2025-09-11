#include "std_lib_facilities.h"


int main()
{
    string FirstName = "";
    cout << "What is your name? ";
    cin >> FirstName;

    string Target;
    cout << "Hello " << FirstName << " who would you like to write for? ";
    cin >> Target;

    cout << "Dear " << Target << ", \n";

    string FriendName = " ";
    cout << "Name a friend: ";
    cin >> FriendName;

    char friend_sex = ' ';
    cout << "Please give the friend's sex. M if male F if female: ";
    cin >> friend_sex;

    if (friend_sex == 'M')
        cout << "If you see " << FriendName << " please ask him to call me!\n";
    if (friend_sex == 'F')
        cout << "If you see " << FriendName << " please ask her to call me!\n";

    int age = 0;
    cout << "Target's age: ";
    cin >> age;
    if (age <= 0 || age > 120) {
        simple_error("You're kidding!");
    }
    cout << "I heard you just had your birthday and you are " << age << " years old!\n";
    if (age <= 12)
        cout << "Next year you will be " << age + 1 << "\n";
    if (age == 17)
        cout << "Next year you will be able to vote!\n";
    if (age >= 70)
        cout << "I hope you're enjoying your retirement!\n";

    cout << "Yours sincerely, __ " << FirstName;
    
    cout << '\n';
    keep_window_open();
    return 0;
}

