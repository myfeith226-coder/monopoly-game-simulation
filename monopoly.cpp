#include <iostream>

using namespace std;

struct Node {
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

    // Menambah data di depan
    void insertdepan(string petakbaru) {
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
            baru->next = Head;
            Head = baru;
            bantu->next = Head;
        }
        cout << "Data berhasil masuk di depan!" << endl;
    }

    // Menambah data di belakang
    void insertbelakang(string petakbaru) {
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
        cout << "Data berhasil masuk di belakang!" << endl;
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

screen();

    return 0;
}