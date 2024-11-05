#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string first, last;

    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your last name: ";
    cin >> last;

    cout << "Hello " << first << " " << last << "!" << endl;
    return 0;
}