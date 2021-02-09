#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int BoxSize = 0;
    string name;
    string gender;
    cout << "Vardas: ";
    cin >> name;

    if(name.back()=='a' or name.back()=='e') gender = " Sveika, ";
    	else gender = " Sveikas, ";

    string greeting = gender + name + "!"; // generate greeting string

    cout << "Dezutes dydis: ";
    cin >> BoxSize;

    while(true) {
            if(cin.fail() || BoxSize <= 0.0) { // test fail bit and check if box is greater than 0
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(),'\n');
                    cout << "Dezutes dydis turi buti uz 0 didesnis skaicius" << endl;
                    cout << "Dezutes dydis: ";
                    cin >> BoxSize;
                }
            else break; // end loop if number is correct
}

    int BoxHeight = BoxSize * 2 + 3;
    int BoxWidth = greeting.size() + BoxSize * 2 + 2;

    cout << endl;
    for(int i=0; i!=BoxHeight; ++i) {

        for(int j=0; j!=BoxWidth; ++j) {

            if(i == BoxSize + 1 && j == BoxSize + 1) { // print out greeting in the middle

                cout << greeting + " ";
                j = j + greeting.size();
                }
                else {

                    if(i==0 || i==BoxHeight-1 || j==0 || j==BoxWidth-1) // fill first and last lines and borders with stars
                        cout << "*";

                        else
                            cout << " "; // fill everything else with spaces
                }
        }

      cout << endl;

    }

    return 0;
}
