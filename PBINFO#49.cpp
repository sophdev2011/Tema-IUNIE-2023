#include <iostream>

using namespace std;

int main()
{
    int n, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        p = p * i;
    cout << p << endl;

    return 0;
}
// https://www.pbinfo.ro/probleme/49/factorial