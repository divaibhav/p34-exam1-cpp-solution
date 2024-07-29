#include <iostream>
using namespace std;
int main(){
    cout << "Enter your birth month" << "\n";
    cout << "press 1 for Jan, 2 for Feb ...... and so on 11 for Nov, 12 for Dec" << "\n";
    int birth_month = 0;
    cin >> birth_month;

    switch(birth_month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 Days" << "\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 Days" << "\n";
            break;
        case 2:
            cout << "28 or 29 Days" << "\n";
            break;
        default:
            cout << "Invalid Input" << "\n";
    }
    return 0;
}