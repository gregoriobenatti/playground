// Gregorio Benatti - URI Online Judge | 1009 - Salary with Bonus

#include<iostream>

using namespace std;

int main()
{
    const int MY_DEC = 2;
    const float SALES_PERCENT = 15;
    const float PERCENT = 100;
    string name;
    float valueSold, salary;

    cin >> name >> salary >> valueSold;

    salary = salary + ((valueSold * SALES_PERCENT)/PERCENT);

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "TOTAL = R$ " << salary << endl;
    
    return 0;
}
