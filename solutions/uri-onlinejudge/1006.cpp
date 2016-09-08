// Gregorio Benatti - URI Online Judge | 1006 - Average 2

#include<iostream>
#include<iomanip>

using namespace std;

float inputNumber()
{
    float n;
    const int minValue = 0;
    const int maxValue = 10;
    cin >> n;
    if ((n >= minValue && n <= maxValue))
    {
        return n;
    }
}

int main()
{
    const int myDecimal = 1;
    const float firstWeight = 2;
    const float secondWeight = 3;
    const float thirdWeight = 5;
    float A, B, C, MEDIA;

    A = (inputNumber() * firstWeight);
    B = (inputNumber() * secondWeight);
    C = (inputNumber() * thirdWeight);

    MEDIA = (A + B + C) / (firstWeight+secondWeight+thirdWeight);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(myDecimal);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
