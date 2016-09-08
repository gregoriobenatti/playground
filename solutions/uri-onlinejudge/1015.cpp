// Gregorio Benatti - URI Online Judge | 1015 - Distance between 2 points

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    const int MY_DEC = 4;
    int values[4];
    float result;

    cin >> values[0] >> values[1] >> values[2] >> values[3];

    result = sqrt((pow((values[2] - values[0]),2)) + (pow((values[3] - values[1]), 2)));

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "" << result << endl;
    return 0;
}
