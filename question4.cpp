#include <iostream>
using namespace std;
int main(){
    cout << "Enter minimum range" << "\n";
    int minimum_range = 0;
    cin >> minimum_range;

    cout << "Enter maximum range" << "\n";
    int maximum_range = 0;
    cin >> maximum_range;

    for(int i = minimum_range ; i <= maximum_range ; i++){
        if(i % 2 == 0 && i % 5 == 0){
            cout << i << ", ";
        }
    }
    cout << "\n";

    return 0;
}