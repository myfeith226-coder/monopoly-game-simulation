#include <iostream>

using namespace std;

struct Node{
    string petak;
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
    void initdepan(string nama_petak[40]) {
        for(int i = 0; i <= 40; i++) {
            Node* baru, *bantu;
            baru = new Node;

            baru->petak = nama_petak[40];
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

    // Inisialisasi Node (petak) di belakang
    void initbelakang(string petakbaru) {
        for(int i = 0; i <= 40; i++) {
            Node* baru, *bantu;
            baru = new Node;

            baru->petak = petakbaru;
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
    void kocokDaduDanJalan() {

    }
};

void screen() {
    cout << R"(   _____                                     .__            ________                          _________.__              .__          __                 
  /     \   ____   ____   ____ ______   ____ |  | ___.__.  /  _____/_____    _____   ____    /   _____/|__| _____  __ __|  | _____ _/  |_  ___________  
 /  \ /  \ /  _ \ /    \ /  _ \\____ \ /  _ \|  |<   |  | /   \  ___\__  \  /     \_/ __ \   \_____  \ |  |/     \|  |  \  | \__  \\   __\/  _ \_  __ \ 
/    Y    (  <_> )   |  (  <_> )  |_> >  <_> )  |_\___  | \    \_\  \/ __ \|  Y Y  \  ___/   /        \|  |  Y Y  \  |  /  |__/ __ \|  | (  <_> )  | \/ 
\____|__  /\____/|___|  /\____/|   __/ \____/|____/ ____|  \______  (____  /__|_|  /\___  > /_______  /|__|__|_|  /____/|____(____  /__|  \____/|__|    
        \/            \/       |__|               \/              \/     \/      \/     \/          \/          \/                \/                    )";
}

int main() {
// Array untuk petak dan namanya
string nama_petak[40] = {"cokelat tua", "cokelat tua", "biru muda", "biru muda", "biru muda", "ungu muda", "ungu muda", "ungu muda", "oranye", "oranye", "oranye", "merah", "merah", "merah", "kuning", "kuning", "kuning", "hijau", "hijau", "hijau", "biru tua", "biru tua", 
    "stasiun kereta", "stasiun kereta", "stasiun kereta", "stasiun kereta", "perusahaan", "perusahaan", "mulai", "penjara", "parkir bebas", "masuk penjara", "kesempatan", "kesempatan", "kesempatan", "dana umum", "dana umum", "dana umum", "pajak pendapatan"};

screen();

    return 0;
}