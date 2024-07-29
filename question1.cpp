#include <iostream>
using namespace std;
int main(){
    cout << "enter your roll number" << "\n";
    int roll_number = 0;
    cin >> roll_number;
    
    cout << "Enter your totam marks" << "\n";
    float total_marks = 0.0;
    cin >> total_marks;

    cout << "Enter number of subjects" << "\n";
    int no_of_subjects = 0;
    cin >> no_of_subjects;

    float percentage = total_marks / no_of_subjects;

    cout << "Name = Vaibhav Diwan" << "\n";
    cout << "Roll Number = " << roll_number << "\n";
    cout << "Email = divaibhav@gmail.com" << "\n";
    cout << "Precentage = " << percentage << "\n";

    return 0;

}