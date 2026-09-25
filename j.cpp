#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O lines
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Your code goes here
    int n;
    cin>> n;

    int a[n];
    for (int i=0;i<n;i++)
    {
      cin>>a[i];
    }
       
    int  max = *max_element(a,a+n);  
      int c = 0; 

    for (int i=0;i<n;i++)
    {
      
        if (a[i] == max)
         {
          c +=1;
         }
    }
         
      
     cout << c;
    
       
    
    return 0;
}
