#include <iostream>

using namespace std;

int main()
{
    int n, p = 1, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
        s = s + p;
    }
    cout << "Rezultatul este " << s << endl;

    return 0;
}
// https://www.pbinfo.ro/probleme/50/expresie