#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string text;

    cout << "====================================\n";
    cout << "        ASCII TEXT ANALYZER\n";
    cout << "====================================\n";
    cout << "Enter text: ";
    getline(cin, text);

    cout << "\nCharacter    ASCII\n";
    cout << "------------------\n";

    for (unsigned char ch : text) {
        if (ch == ' ')
            cout << "Space        " << static_cast<int>(ch) << '\n';
        else
            cout << left << setw(13) << ch << static_cast<int>(ch) << '\n';
    }

    cout << "\nTotal characters: " << text.length() << '\n';
    return 0;
}
