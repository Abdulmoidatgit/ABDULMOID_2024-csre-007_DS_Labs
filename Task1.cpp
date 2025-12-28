//maryam naeem
//2024-csre-010
//Lab-1 task-1
#include <iostream>   // For input/output
using namespace std;

int main() {
    int x = 10;       // Normal integer variable with value 10
    int* p = &x;      // Pointer p stores the address of x
    int** q = &p;     // Pointer to pointer q stores the address of p

    cout << "x = " << x << endl;       // Print value of x
    cout << "*p = " << *p << endl;     // *p means value at address stored in p → x
    cout << "**q = " << **q << endl;   // **q means value at address stored in q → *p → x

    return 0;         // End program
}