#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i * i;
    cout << "Rezultatul este " << s << endl;
    return 0;
}
// https://www.pbinfo.ro/probleme/47/sumapatrate