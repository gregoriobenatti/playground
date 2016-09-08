// Gregorio Benatti - URI Online Judge | 1011 - Sphere

#include<iostream>

using namespace std;

int main()
{
	const int MY_DEC = 3;
    const float PI = 3.14159, FORMULA_DIVIDEND = 4.0, FORMULA_DIVISOR = 3.0;
    float v;
    int r;

    cin >> r;

    v = (FORMULA_DIVIDEND/FORMULA_DIVISOR) * PI * (r*r*r);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "VOLUME = " << v << endl;
    
    return 0;
}
