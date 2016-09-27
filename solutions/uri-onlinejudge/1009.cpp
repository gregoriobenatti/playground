// Gregorio Benatti - URI Online Judge | 1009 - Salary with Bonus

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float SALES_PERCENT = 15;
    const float PERCENT = 100;
    string name;
    float valueSold, salary;
    
    cin >> name >> salary >> valueSold;
    
    salary = salary + round((valueSold * SALES_PERCENT)) / PERCENT;
    
    printf("TOTAL = R$ %.2f\n", salary);
    
    return 0;
}
