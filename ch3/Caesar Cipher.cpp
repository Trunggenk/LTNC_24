#include "../all.h"
using namespace std;

string caesarCipher(string s, int k) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = static_cast<char>(base + (c - base + k) % 26);
        }
        result += c;
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << caesarCipher(s, k);
}