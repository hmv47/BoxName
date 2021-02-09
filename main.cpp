#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Vardas: ";
    cin >> name;

    string greeting = " Sveikas, " + name + "!"; // generate greeting string
    string tabulation(greeting.size(), ' '); // generate space string based on the lenght of the greeting string
    string starsEnding = "* " + tabulation + " *"; // ending *
    string stars(starsEnding.size(), '*'); // * of the first and last lines

    cout << stars << endl;
    cout << starsEnding << endl;
    cout << "* " << greeting << " *" << endl;
    cout << starsEnding << endl;
    cout << stars << endl;

    return 0;
}
