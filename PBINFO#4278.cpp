#include <iostream>

using namespace std;

int main()
{
    int a, S = 0, cnt = 0;
    cin >> a;
    while (a != 0)
    {
        if (a % 2 == 0)
            S = S + a;
        if (a > 9 && a < 100)
            cnt++;
        cin >> a;
    }
    cout << S << " " << cnt << endl;
    return 0;
}
//https://www.pbinfo.ro/probleme/4278/sumcnt1