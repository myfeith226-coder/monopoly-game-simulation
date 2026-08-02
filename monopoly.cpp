#include <iostream>
// Library untuk menghasilkan angka acak
#include <cstdlib>
#include <ctime>

using namespace std;

struct Node{
    string petak;
    char player;
    Node* next;
};

struct monopolySllc {
    
    // Deklarasi dan inisialisasi Head
    Node* Head = NULL;

    // Fungsi untuk mengetahui kosong tidaknya suatu SIngle Linkedlist Circular dengan Head
    int isEmpty() {
        if(Head == NULL) {
            return 1; 
        } else {
            return 0;
        }
    }

    // Inisialisasi Node (Petak) sebanyak 40 petak
    // Inisialisasi 40 petak dengan memasukkannya satu per satu di depan
    void initdepan(const string nama_petak[40]) {
            for(int i = 0; i < 40; i++) {
                Node* baru, *bantu;
                baru = new Node;

                baru->petak = nama_petak[i];
                baru->next = baru;

                if(isEmpty() == 1) {
                    Head = baru;
                    Head->next = Head;
                } else {
                    bantu = Head;
                    while(bantu->next != Head) {
                        bantu = bantu->next;
                    }
                    baru->next = Head;
                    Head = baru;
                    bantu->next = Head;
                }
            }
    }

    // Inisialisasi 40 Node (petak) dengan memasukkannya satu per satu di belakang
    void initbelakang(const string nama_petak[40]) {
        for(int i = 0; i < 40; i++) {
            Node* baru, *bantu;
            baru = new Node;

            baru->petak = nama_petak[i];
            baru->next = baru;

            if(isEmpty() == 1) {
                Head = baru;
                Head->next = Head;
            } else {
                bantu = Head;
                while(bantu->next != Head) {
                    bantu = bantu->next;
                }
                bantu->next = baru;
                baru->next = Head;
            }  
        }
    }

    // Fungsi untuk menggeser posisi pemain sebanyak angka dadu
    void kocokDaduDanJalan(char player, int angkadadu) {
         
    }
};

void screen() {
    cout << "=============================================================================================================================================" << endl;
    cout << "1. Mainkan Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Pilih: ";
}

int main() {
// Inisialisasi Seed (benih) menggunakan fungsi srand() untuk mengatur seed agar menghasilkan angka acak setiap kali program di jalankan
srand(time(0));

// Menghasilkan angka acak dari satu sanpai enam
int dadu = rand() % 6 + 1;

// variabel untuk menghasilkan huruf random dari rentang a-z
char random_letter = 'a' + rand() % 26; // huruf acak dari a-z

// Array untuk petak dan namanya
string nama_petak[40] = {"cokelat tua", "cokelat tua", "biru muda", "biru muda", "biru muda", "ungu muda", "ungu muda", "ungu muda", "oranye", "oranye", "oranye", "merah", "merah", "merah", "kuning", "kuning", "kuning", "hijau", "hijau", "hijau", "biru tua", "biru tua", 
    "stasiun kereta", "stasiun kereta", "stasiun kereta", "stasiun kereta", "perusahaan", "perusahaan", "mulai", "penjara", "parkir bebas", "masuk penjara", "kesempatan", "kesempatan", "kesempatan", "dana umum", "dana umum", "dana umum", "pajak pendapatan"};

// Deklarasi dan Inisialisasi Objek struct monopolySllc
monopolySllc mnp;
mnp.initdepan(nama_petak);

int pilihan;
char kocok, player;
screen();
cin >> pilihan;

if(pilihan == 1) {
    cout << "Tekan 'P' untuk memilih karakter secara acak: ";
    cin >> player;
    if(player == 'p' || player == 'P') {
        cout << "Karakter player: " << random_letter << endl; 
    } else {
        cout << "Error: input anda tidak valid!" << endl;
    }
    cout << "Ketik 'K' untuk mengocok dadu: ";
    cin >> kocok;
    if(kocok == 'K' || kocok == 'k') {
        cout << "Dadu: " << dadu << endl;
    } else {
        cout << "Error: input anda tidak valid!" << endl;
    }
}

    return 0;
}