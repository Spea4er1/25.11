#include <iostream>
#include <vector>
using namespace std;
int main() {
       int n,s=0;
       cin >> n;
       vector <int> x(n);
       vector <int> y(n);
       vector <bool> z1(n, 1);    
       for (int z = 0; z < n; z++) {     
             cin >> x[z] >> y[z];
       }
       for (int z = 0; z < n-1; z++) 
             if (z1[z])
             for (int v=z+1; v<n; v++) 
                    if ((z1[v]) && (x[z] * y[v] == x[v] * y[z]) && x[z] * x[v] >= 0 && y[z] * y[v] >= 0)
                           z1[v] = 0;
       for (int z = 0; z < n; z++) s += z1[z];
       cout << s;
       return 0;
}