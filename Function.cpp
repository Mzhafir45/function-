#include<iostream>
#include<cmath>

using namespace std;
//(mencari nilai rata rata)
void hitungRerata(int jumlah) {
float total = 0;
float temp;
for (int i = 0; i < jumlah; i++) {
cin >> temp;
total += temp;
}
double rata = total / jumlah;
cout << rata;
}

int main() {
int jumlah;
cout << "Masukkan jumlah bilangan: ";
cin >> jumlah;
hitungRerata(jumlah);
return 0;
}

//mencari bilangan terbesar

//void findMax(int jumlah) {
//int max = 0;
//int temp;
//for (int i = 0; i < jumlah; i++) {
//cin >> temp;
//if (temp > max) {
//max = temp;
//}
//}
//cout << max;
//}
//
//int main() {
//int jumlah;
//cout << "Masukkan jumlah bilangan: ";
//cin >> jumlah;
//findMax(jumlah);
//return 0;
//}
//
//(fibbonaci)
//
//int fib(int n) {
//if (n <= 1) {
//return n;
//}
//return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//int n;
//cout << "Masukkan nilai n: ";
//cin >> n;
//cout << "Deret Fibonacci ke-" << n << " adalah " << fib(n);
//return 0;
//}
