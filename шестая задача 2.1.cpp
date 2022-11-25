#include <cstdio>

#define SIZE 100

int main() {

int n, m, maxmin = -1001, minmax = 1001,

       mn, mx, i, j, a[SIZE][SIZE];

scanf("%d%d", &n, &m);

for(i = 0; i < n; i++) {

   mn = 1001;

   for(j = 0; j < m; j++) {

       scanf("%d", &a[i][j]);

       if(a[i][j] < mn) mn = a[i][j];

   }

   if (mn > maxmin) maxmin = mn;

}

for(j = 0; j < m; j++) {

   mx = -1001;

   for(i = 0; i < n; i++)

       if(a[i][j] > mx) mx = a[i][j];

   if (mx < minmax) minmax = mx;

}

printf("%d %d", maxmin, minmax);

}