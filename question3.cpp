#include <iostream>
using namespace std;
int main(){
    cout << "Enter number1" << "\n";
    int number1 = 0;
    cin >> number1;

    cout << "Enter number2" << "\n";
    int number2 = 0;
    cin >> number2;

    cout << "Enter number3" << "\n";
    int number3 = 0;
    cin >> number3;

    if(number1 == number2 && number1 == number3){
        cout << "bingo" << "\n";
    }
    else if(number1 == number2 || number2 == number3 || number1 == number3){
        cout << "team" << "\n";
    }
    else{
        cout << "try again" << "\n";
    }
    return 0;
}