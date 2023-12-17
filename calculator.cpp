# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    //variables
    string op;
    double num1;
    double num2;

    //user input
    cout << "Enter number one";
    cin >> num1;
     cout << "Operation (+, -, *, /)";
    cin >> op;
     cout << "Enter number two";
    cin >> num2;

    //calculating

    if(op == "+"){
        cout << num1 + num2;
    }else if(op == "-"){
        cout << num1 - num2;
    }else if(op == "*"){
        cout << num1 * num2;
    }else if(op == "/"){
        cout << num1 / num2;
    }else{
        "Invalid input!";
    }
    return 0;
}
