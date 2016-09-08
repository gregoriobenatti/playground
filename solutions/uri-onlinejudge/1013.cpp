// Gregorio Benatti - URI Online Judge | 1013 - The Greatest

#include<iostream>

using namespace std;

int greatest(int n1, int n2)
{
    const int DIVISOR = 2, MAKE_IT_POSITIVE = -1;
    int n = n1 - n2;
    (n2 > n1) ? n = n * (MAKE_IT_POSITIVE) : n;

    return ((n1+n2+n) / DIVISOR);
}

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    a = greatest(a, b);
    b = greatest(b, c);
    c = greatest(a, b);

    cout << "" << c << " eh o maior" << endl;

    return 0;
}
