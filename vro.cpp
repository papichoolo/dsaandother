// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class calculator {
public:
    int a, b, add, sub, mul;
    float div;
    void get() {
        cout << "enter first no ";
        cin >> a;
        cout << "enter second no ";
        cin >> b;

    }
    void summ() {
        add = a + b;
        cout << "the sum is " << add << endl;
    }
    void diff() {
        sub = a - b;
        cout << "the diff is " << sub << endl;

    }
    void mult() {
        mul = a * b;
        cout << "the product is " << mul << endl;

    }
    void divi() {
        div = a / b;
        cout << "the quotient is " << div << endl;
    }
};
int main() {
    calculator bruh;
    bruh.get();
    bruh.summ();
    bruh.diff();
    bruh.mult();
    bruh.divi();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
