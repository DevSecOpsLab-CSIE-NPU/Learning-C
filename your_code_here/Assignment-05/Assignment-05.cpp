#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int timer, hours, minutes, seconds;
    cout << "Enter the amount of seconds: ";
    cin >> timer;

    hours = timer / 3600;
    minutes = (timer % 3600) / 60;
    seconds = (timer % 3600) % 60;

    cout << timer << " seconds is equal to " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0;
}