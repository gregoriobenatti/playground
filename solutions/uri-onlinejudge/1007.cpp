// Gregorio Benatti - URI Online Judge | 1007 - Difference

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int A, B, C, D, DIFERENCA;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    DIFERENCA = (A*B - C*D);

    cout << "DIFERENCA = " << DIFERENCA << endl;

    return 0;
}
