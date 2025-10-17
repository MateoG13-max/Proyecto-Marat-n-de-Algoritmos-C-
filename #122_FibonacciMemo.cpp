// Ejercicio 122 - Fibonacci con memoización (mejor que recursivo puro)
#include <iostream>
#include <vector>
using namespace std;

long long fib(int n, vector<long long>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}

int main(){
    int n;
    cout << "Fibonacci con memo. Ingresa n (0..90 recomendado): ";
    cin >> n;
    if(n < 0){ cout << "n inválido\n"; return 1; }
    vector<long long> memo(n+1, -1);
    cout << "F("<<n<<") = " << fib(n, memo) << "\n";
    return 0;
}
