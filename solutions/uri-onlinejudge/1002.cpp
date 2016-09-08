// Gregorio Benatti - URI Online Judge | 1001 - Area of a Circle

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const float PI = 3.14159;
    float A = 0, R = 0;
    const int d = 4;

    cin >> R;
    A = (PI * (R*R));

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(d);
    cout << "A=" << A << endl;

    return 0;
}
