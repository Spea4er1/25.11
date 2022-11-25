#include <iostream>
#include <vector>
using namespace std;

int main() {
       int x, y;
       cin >> x >> y;
       if (abs(x) >= 1000000000 || abs(y) >= 1000000000) { 
             cout << "NO"; return 0;
       }
       cout << "YES" << endl;
       if (y < 999999999) { 
             cout << x - 1 << " " << y - 1 << endl;
             cout << x << " " << y + 2 << endl;
             cout << x + 1 << " " << y - 1;
       }
       Else { 
             cout << x - 1 << " " << y + 1 << endl;
             cout << x << " " << y - 2 << endl;
             cout << x + 1 << " " << y + 1;
       }
       return 0;
}