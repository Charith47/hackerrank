#include <bits/stdc++.h>

using namespace std;

// Splution ---

void staircase(int n) {
     for (int i = 0; i < n; i++) {
        for (int j = n-i-1; j > 0; j--) cout << " ";
        for (int k = 0; k <= i; k++) cout << "#";
        cout << '\n';
    }
}
// End Solution ---

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
