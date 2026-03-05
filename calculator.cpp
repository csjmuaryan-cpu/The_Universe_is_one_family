#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Calculator शुरू करें (संख्या 1 [ऑपरेटर +, -, *, /] संख्या 2): " << endl;
    
    // यूजर से इनपुट लेना
    cin >> num1 >> op >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! शून्य से भाग नहीं दिया जा सकता।";
            break;

        default:
            // यदि ऑपरेटर गलत है
            cout << "गलत ऑपरेटर! कृपया +, -, *, या / का उपयोग करें।";
            break;
    }

    return 0;
}
