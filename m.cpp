#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    int cas = 1;

    while (true)
    {
        cin >> a;

        if (a == "*")
        {
            break;
        }

        if (a == "Hajj")
        {
            cout << "Case " << cas << ": Hajj-e-Akbar\n";
        }
        else if (a == "Umrah")
        {
            cout << "Case " << cas << ": Hajj-e-Asghar\n";
        }

        cas++;
    }

    return 0;
}
