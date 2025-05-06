#include <iostream>
#include "functionDeclarations.h"
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <limits>

using namespace std;

int main()
{


    string username;

    if (isUserLoggedIn(username)) {
        cout << endl << "                                                   Welcome back, " << username << "!" << endl;
        mainMenu(username);
        return 0;
    }

    string choice;
    while (true) {
        cout << endl;
        title();
        desc();
        cout << "     1. Sign Up\n     2. Log In\n\n     - Choice: ";
        getline(cin, choice);


        if (choice == "1") {
            system("cls");

            createAccount();
        } else if (choice == "2") {

            login();

        } else {
            system("cls");
            cout << endl << "-> Invalid choice. Please try again." << endl << endl;
        }
    }


    return 0;
}
