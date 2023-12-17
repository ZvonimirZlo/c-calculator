# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    //variables
    string operation;
    double number1;
    double number2;

    //user input
    cout << "Enter number one";
    cin >> number1;
     cout << "Operation (+, -, *, /)";
    cin >> operation;
     cout << "Enter number two";
    cin >> number2;

    //calculating

    if(operation == "+"){
        cout << number1 + number2;
    }else if(operation == "-"){
        cout << number1 - number2;
    }else if(operation == "*"){
        cout << number1 * number2;
    }else if(operation == "/"){
        cout << number1 / number2;
    }else{
        "Invalid input!";
    }
    return 0;
}