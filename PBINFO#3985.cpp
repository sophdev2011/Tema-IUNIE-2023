#include <iostream>

using namespace std;

int main()
{
    int n, x, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x >= 10 && x <= 99)
            s = s + x;
    }
    cout << s;
    return 0;
}
// https://www.pbinfo.ro/probleme/3985/suma-c2