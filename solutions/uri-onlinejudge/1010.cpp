// Gregorio Benatti - URI Online Judge | 1010 - Simple Calculate

#include<iostream>

using namespace std;

int main()
{
    const int MY_DEC = 2;
    string auxInput;
    float firstInput[3], secondInput[3], totalBill;

    cin >> firstInput[0] >> firstInput[1] >> firstInput[2];
    cin >> secondInput[0] >> secondInput[1] >> secondInput[2];

    totalBill = (firstInput[1] * firstInput[2]) + (secondInput[1] * secondInput[2]);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "VALOR A PAGAR: = R$ " << totalBill << endl;
    
    return 0;
}
