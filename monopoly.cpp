#include <iostream>

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
    // Inisialisasi data di depan
    void initdepan(string &nama_petak) {
            Node* baru, *bantu;
            baru = new Node;

            baru->petak = nama_petak;
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

    // Inisialisasi Node (petak) di belakang
    void initbelakang(string &nama_petak) {
            Node* baru, *bantu;
            baru = new Node;

            baru->petak = nama_petak;
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

    // Fungsi untuk menggeser posisi pemain sebanyak angka dadu
    void kocokDaduDanJalan(char player, int angkadadu) {
        Node* posisi;
        posisi = new Node;

        posisi->player = player;

        do {
            posisi = posisi->next;
        } while(angkadadu > 0);
    }
};

void screen() {
    cout << R"(   _____                                     .__            ________                          _________.__              .__          __                 
  /     \   ____   ____   ____ ______   ____ |  | ___.__.  /  _____/_____    _____   ____    /   _____/|__| _____  __ __|  | _____ _/  |_  ___________  
 /  \ /  \ /  _ \ /    \ /  _ \\____ \ /  _ \|  |<   |  | /   \  ___\__  \  /     \_/ __ \   \_____  \ |  |/     \|  |  \  | \__  \\   __\/  _ \_  __ \ 
/    Y    (  <_> )   |  (  <_> )  |_> >  <_> )  |_\___  | \    \_\  \/ __ \|  Y Y  \  ___/   /        \|  |  Y Y  \  |  /  |__/ __ \|  | (  <_> )  | \/ 
\____|__  /\____/|___|  /\____/|   __/ \____/|____/ ____|  \______  (____  /__|_|  /\___  > /_______  /|__|__|_|  /____/|____(____  /__|  \____/|__|    
        \/            \/       |__|               \/              \/     \/      \/     \/          \/          \/                \/                    )";
    cout << "=============================================================================================================================================" << endl;
    cout << "1. Mainkan Game" << endl;
    cout << "2. Exit" << endl;
    cout << "Pilih: ";
}

int main() {
// Array untuk petak dan namanya
string nama_petak[40] = {"cokelat tua", "cokelat tua", "biru muda", "biru muda", "biru muda", "ungu muda", "ungu muda", "ungu muda", "oranye", "oranye", "oranye", "merah", "merah", "merah", "kuning", "kuning", "kuning", "hijau", "hijau", "hijau", "biru tua", "biru tua", 
    "stasiun kereta", "stasiun kereta", "stasiun kereta", "stasiun kereta", "perusahaan", "perusahaan", "mulai", "penjara", "parkir bebas", "masuk penjara", "kesempatan", "kesempatan", "kesempatan", "dana umum", "dana umum", "dana umum", "pajak pendapatan"};

monopolySllc mnp;
mnp.initdepan(nama_petak[40]);
mnp.initbelakang(nama_petak[40]);

int pilihan;
screen();
cin >> pilihan;

if(pilihan == 1) {

}

    return 0;
}