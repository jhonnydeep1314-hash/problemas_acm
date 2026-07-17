#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector <long long> lista;
    long long x;

    cout << fixed << setprecision(4);

    while (cin >> x)
    {
        lista.push_back(x);
    }

    for (int i = lista.size() - 1; i >= 0; i--)
    {
        cout << sqrt((long double)lista[i]) << endl;
    }
    return 0;
}
