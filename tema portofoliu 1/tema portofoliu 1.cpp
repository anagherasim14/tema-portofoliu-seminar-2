#include <iostream>
using namespace std;

int cmmdc(int x, int y) {
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int functiaEuler(int a, int v[]) {
    int contor = 0;

    for (int b = 1; b < a; b++) {
        if (cmmdc(a, b) == 1) {
            v[contor] = b;
            contor++;
        }
    }

    return contor;
}

int main()
{
    int v[100];
    int a;
    cin >> a;
    int count = functiaEuler(a, v);
    for (int i = 0; i < count; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Functia lui Euler pentru " << a << " este: " << count << endl;

}
