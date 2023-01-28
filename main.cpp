#include <iostream>

#define max 100000
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        long n; cin >> n;
        long a[max];
        long begins = 0, i = 2;
        // luu so nguyen to vao mang a
        while (i * i <= n) {
            if (n % i == 0) {
                a[begins++] = i;
                n /= i;
                continue;
            }
            i++;
        }
        if (n != 1)
            a[begins] = n;
        // xuat
        for (int j = begins; j >= 0; j--)
            j == 0 ? (cout << a[0]) : cout << a[j] << " x ";
        cout << endl;
    }
}
