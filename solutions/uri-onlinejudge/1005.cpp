// Gregorio Benatti - URI Online Judge | 1005 - Average 1

#include<iostream>
#include<iomanip>

using namespace std;

const int myDecimal = 5;
const float firstWeight = 3.5;
const float secondWeight = 7.5;
float n1, n2, MEDIA;

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
    n1 = (inputNumber() * firstWeight);
    n2 = (inputNumber() * secondWeight);

    MEDIA = (n1 + n2) / (firstWeight+secondWeight);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(myDecimal);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}
