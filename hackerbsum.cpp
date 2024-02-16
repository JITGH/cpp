


#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int P) {
    if (P < 41) {
        return vector<int>(0);
    }
    vector<int> res(41, 1);
    P -= 41;
    int i = 40;
    while (P > 0 && i >= 0) {
        int add = min(P, 14);
        res[i] += add;
        P -= add;
        i--;
    }
    if (P > 0) {
        return vector<int>(0);
    } else {
        return res;
    }
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int P;
        cin >> P;
        vector<int> res = solve(P);
        if (res.size() == 0) {
            cout << "Case #" << t << ": -1" << endl;
        } else {
            cout << "Case #" << t << ": " << res.size();
            for (int i = 0; i < res.size(); i++) {
                cout << " " << res[i];
            }
            cout << endl;
        }
    }
    return 0;
}