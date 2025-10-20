
// Calcula el MCD (Máximo Común Divisor)
long long mcd(long long x, long long y) {
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    long long a, b;
    cout << "Ingrese dos números positivos: ";
    if (!(cin >> a >> b) || a <= 0 || b <= 0) {
        cout << "Entrada inválida. Intente nuevamente." << endl;
        return 1;
    }

    long long gcd = mcd(a, b);
    long long mcm = (a / gcd) * b; // evitar overflow

    cout << "El MCD de " << a << " y " << b << " es " << gcd << endl;
    cout << "El MCM de " << a << " y " << b << " es " << mcm << endl;

    return 0;
}
