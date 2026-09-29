

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O lines
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your code goes here
      int x1,x2,v1,v2;
      
      cin >> x1 >> v1 >> x2 >> v2;

      int startGap = x2-x1;
      int gain = v2-v1;

      if (v1 > v2)
           {
                   if ( startGap % gain ==0)
                   {
                    cout << "YES";
                   }

            else 
            {
              cout << "NO";
            }
           }

      else 
      {

        cout << "NO";
      }
  


    return 0;
}






