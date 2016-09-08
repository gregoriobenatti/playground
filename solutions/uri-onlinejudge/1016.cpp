#include <iostream>
 
using namespace std;
 
int main()
{
    const int VY = 90, VX = 60, HOUR_TO_MIN = 60;
    float d, t;
 
    cin >> d;
    t = (d / (VY - VX)) * HOUR_TO_MIN;
    cout << "" << t << " minutos" << endl;
 
    return 0;
}
