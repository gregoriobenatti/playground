// Gregorio Benatti - URI Online Judge | 1012 - Area

#include<iostream>

using namespace std;

int main()
{
	const int MY_DEC = 3;
    const float PI = 3.14159;
    const float TRAPEZIUM_CONST = 0.5;
    float floatingPointValues[3];

    cin >> floatingPointValues[0] >> floatingPointValues[1] >> floatingPointValues[2];

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "TRIANGULO: " << ((floatingPointValues[0] * floatingPointValues[2]) / 2) << endl;
    cout << "CIRCULO: "   << (PI * (floatingPointValues[2] * floatingPointValues[2])) << endl;
    cout << "TRAPEZIO: "  << ((TRAPEZIUM_CONST * (floatingPointValues[0] + floatingPointValues[1])) * floatingPointValues[2]) << endl;
    cout << "QUADRADO: "  << (floatingPointValues[1] * floatingPointValues[1]) << endl;
    cout << "RETANGULO: " << (floatingPointValues[0] * floatingPointValues[1]) << endl;
    
    return 0; 
}
