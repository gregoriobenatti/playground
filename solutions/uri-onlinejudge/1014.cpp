// Gregorio Benatti - URI Online Judge | 1014 - Consumption

#include<iostream>

using namespace std;

int main()
{
    const int MY_DEC = 3;
    int totalDistance;
    float spentFuel, comsumptiom;

    cin >> totalDistance >> spentFuel ;

    comsumptiom = totalDistance / spentFuel;

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "" << comsumptiom << " km/l" << endl;
    
    return 0;
}
