// Gregorio Benatti - URI Online Judge | 1008 - Salary

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int myDec = 2;
    int NUMBER, HOURS;
    float MONEYHOUR, SALARY;

    cin >> NUMBER;
    cin >> HOURS;
    cin >> MONEYHOUR;

    SALARY = MONEYHOUR * HOURS;

    cout << "NUMBER = " << NUMBER << endl;
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(myDec);
    cout << "SALARY = U$ " << SALARY << endl;

    return 0;
}
