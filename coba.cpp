#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
// Inisialisasi seed
srand(time(0));

// Inisialisasi variabel untuk menghasilkan angka acak menggunakan fungsi rand()
int angkaacak = rand() % 10 + 1;

cout << "Angka acak: " << angkaacak << endl;

    return 0;
}