#include <iostream>
using namespace std;

int main() {
    int n = 2;

    for (int i = 1; i <= n; i++) {
        char ch = (char)('E' - i);
        for (int j = 0; j <= i; j++) {
            if (j < i) {
                cout << ch;
                ch++;
            } else {
                cout << " ";
            }
        }
        cout << " " << endl;
    }

    return 0;
}