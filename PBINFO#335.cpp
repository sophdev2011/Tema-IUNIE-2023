#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; ++i)
        s += (i % 2 ? 1 : -1) * i * (i + 1);
    cout << "Rezultatul este " << s << endl;
    return 0;
}
//https://www.pbinfo.ro/probleme/335/expresie3