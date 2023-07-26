#include <iostream>

using namespace std;

int main()
{
    int n, k, a, S = 0, cnt = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a % 2 != 0)
            S = S + a;
        if (a % k == 0)
            cnt++;
    }
    cout << S << " " << cnt << endl;
    return 0;
}
// https://www.pbinfo.ro/probleme/4279/sumcnt2