#include <iostream>

using namespace std;

template <class T1, class T2>
T1 suma(T1, T2);
template <class T1, class T2>
T1 roznica(T1, T2);
template <class T1, class T2>
T1 iloczyn(T1, T2);
template <class T1, class T2>
T1 iloraz(T1, T2);
template <class T1, class T2, class T3>
T3 max(T1, T2);
template <class T1, class T2, class T3>
T3 min(T1, T2);

int main() {
   double a, b;
   cout << "Podaj liczbe a: ";
   cin >> a;
   cout << "\nPodaj liczbe b: ";
   cin >> b;
   cout << "\nSuma: " << suma(a, b) << endl;
   cout << "\nRoznica: " << roznica(a, b) << endl;
   cout << "\nIloczyn: " << iloczyn(a, b) << endl;
   cout << "\nIloraz: " << iloraz(a, b) << endl;
   cout << "\nMaksymalna liczba: " << max(a, b) << endl;
   cout << "\nMinimalna liczba: " << min(a, b) << endl;
    return 0;
}
template <class T1, class T2>
T1 suma(T1 a, T2 b){
    return (a + b);
}
template <class T1, class T2>
T1 roznica(T1 a, T2 b){
    return (a - b);
}
template <class T1, class T2>
T1 iloczyn(T1 a, T2 b){
    return (a * b);
}
template <class T1, class T2>
T1 iloraz(T1 a, T2 b){
    return (a / b);
}
template <class T1, class T2, class T3>
T3 max(T1 a, T2 b){
        return (a >= b) ? a : b;
}
template <class T1, class T2, class T3>
T3 min(T1 a, T2 b){
        return (a <= b) ? a : b;
}