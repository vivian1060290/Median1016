#include <iostream>
using namespace std;

int main() {
    int input[200000], i, tmp, cnt = 0;
    while (cin >> tmp) {
        for (i = cnt - 1; i >= 0 && input[i] > tmp; i--)
            input[i + 1] = input[i];

        input[i + 1] = tmp;
        cnt++;
        cout << ((cnt % 2) ? (input[cnt / 2]) : (input[cnt / 2 - 1] + input[cnt / 2]) / 2) << endl;
    }
}