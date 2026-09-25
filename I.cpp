#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O lines
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your code goes here

    int arr[5];
    for (int i=0;i<5;i++)
    {
      cin>>arr[i];
    }
       
       int maxsum = 0;
       int minsum = 0;
   
         maxsum = arr[0]+arr[1]+arr[2]+arr[3];
         minsum =  arr[4]+arr[1]+arr[2]+arr[3];

      cout << maxsum;
      cout << " ";
      cout << minsum;
    
       
    
    return 0;
}
