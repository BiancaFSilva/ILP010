/* Faça um programa que apresente a série de Fibonacci até o décimo quinto termo.  
A série é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, etc.    */

#include <iostream>
using namespace std;

int main() {
    int fib, a, b;

    for (int i = 0; i < 15; i++) {
        fib = a + b;
        a = b;
        b = a;

        cout << i << "\n";
    }
}