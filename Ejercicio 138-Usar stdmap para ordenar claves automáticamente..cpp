#include <bits/stdc++.h>
using namespace std;
int main() {
    bitset<8> a(string("10101010"));
    bitset<8> b(string("11001100"));
    cout << "AND: " << (a & b) << "\n";
    cout << "OR:  " << (a | b) << "\n";
}
