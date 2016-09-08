#include <iostream>
 
using namespace std;
 
int main()
{
    const int KM_L = 12, MY_DEC = 3;
    float spentTime, averageVelocity, liters;
 
    cin >> spentTime >> averageVelocity;
    liters = ((spentTime * averageVelocity) / KM_L);
 
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(MY_DEC);
    cout << "" << liters << endl;
 
    return 0;
}
