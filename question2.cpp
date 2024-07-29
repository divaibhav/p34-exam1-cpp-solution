#include <iostream>
using namespace std;
int main(){
    cout << "Enter circumference of the circle" << "\n";
    float circumference = 0.0;
    cin >> circumference;

    float radius = circumference / (2 * 3.14);

    cout << "Radius = " << radius << "\n";

    return 0; 
}