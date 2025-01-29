#include <iostream>
using namespace std;
int main() {
    int a;
    char d;
    int b;
    int c;
    cout<< "first number: "; cin>> a;
    cout<< "arithmetic opperation: "; cin>> d;
    cout<< "second number: "; cin>> b;
    if (d == '+'){
        c = a + b;
    }
    else if (d == '-'){
        c = a - b;
    }
    else if (d == '*'){
        c = a * b;
    }
    else if (d == '/'){
        c = a / b;
    }
    cout<< "The result is: "; cout<< c;
    }