#include <iostream>

using namespace std;

int main()
{
    int n, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        p = p * i * i;
    cout << p;
    return 0;
}
//https://www.pbinfo.ro/probleme/4273/prodpp