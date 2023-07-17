#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> ticketQueue; // Membuat antrian kosong
    int choice, ticketNumber;

    do {
        // Menampilkan menu pilihan
        cout << "MENU" << endl;
        cout << "1. Ambil tiket" << endl;
        cout << "2. Panggil nomor antrian" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Memasukkan nomor tiket ke dalam antrian
                cout << "Nomor tiket Anda: ";
                cin >> ticketNumber;
                ticketQueue.push(ticketNumber);
                cout << "Nomor tiket " << ticketNumber << " telah dimasukkan ke dalam antrian." << endl;
                break;
            case 2:
                // Memanggil nomor antrian dan menghapusnya dari antrian
                if (ticketQueue.empty()) {
                    cout << "Antrian kosong." << endl;
                } else {
                    cout << "Nomor antrian yang dipanggil: " << ticketQueue.front() << endl;
                    ticketQueue.pop();
                }
                break;
            case 3:
                // Keluar dari program
                cout << "Terima kasih." << endl;
                break;
            default:
                // Pilihan yang tidak valid
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}