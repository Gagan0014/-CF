// for min check the left and right values for max go for last minus i and i - beg ki abs value ke liye 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    vector<int> cord(m);
    for (int i = 0; i < m; i++) {
        cin >> cord[i];
    }

    for (int i = 0; i < m; i++) {
        int minval, maxval;
        if (i == 0) {
            minval = abs(cord[i + 1] - cord[i]);
        } else if (i == m - 1) {
            minval = abs(cord[i] - cord[i - 1]);
        } else {
            minval = min(abs(cord[i] - cord[i - 1]), abs(cord[i + 1] - cord[i]));
        }
        maxval = max(abs(cord[i] - cord[0]), abs(cord[i] - cord[m - 1]));

        cout << minval << " " << maxval << endl;
    }

    return 0;
}
