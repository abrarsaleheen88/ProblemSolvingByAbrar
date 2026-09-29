

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O lines
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your code goes here
       int t;
       cin >> t;

       for (int i = 0; i < t; i++)
       {
            long long x, y, z;
            cin >> x >> y >> z;

            double res = ( (double)z/(x * y)) * 100;

            if (  res > 50)
            {
              cout << "YES\n";
            }
            else
            {
              cout << "NO\n";
            }







       }

       return 0;

      }



   







