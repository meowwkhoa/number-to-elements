#include <iostream>
#include <math.h>
using namespace std;
bool checkSnt(int n){
    if(n == 0 || n == 1)
        return false;
    else
        for(int i = 2; i <= sqrt(n); i++)
            if(n % i == 0)
                return 0;
    return 1;
}

void xuat(int n){
    for(int i = n; i >= 2; i--)
        if(checkSnt(i) == 1 && n % i == 0){
            cout << i;
            n /= i;
            if(n != 1)
                cout << " x ";
            i = n;
            i++;
        }
}

int main(){
    int n, a[10000];
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    for(int i = 0; i < n; i++){
        xuat(a[i]);
        cout << endl;
    }
            
}
