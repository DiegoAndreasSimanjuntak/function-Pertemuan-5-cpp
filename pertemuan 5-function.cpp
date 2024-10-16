#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung gaji pokok
void pokok(int jam_kerja, int & gaji_pokok) {
    int gaji_per_jam = 7500;
    if (jam_kerja <= 8) {
        gaji_pokok = jam_kerja * gaji_per_jam;
    } else {
        gaji_pokok = 8 * gaji_per_jam;
    }
}

// Fungsi untuk menghitung lembur
void lembur(int jam_kerja, int & gaji_lembur) {
    int gaji_per_jam_lembur = 7500 * 1.5;
    if (jam_kerja > 8) {
        int lembur_jam = jam_kerja - 8;
        gaji_lembur = lembur_jam * gaji_per_jam_lembur;
    } else {
        gaji_lembur = 0;
    }
}

// Fungsi untuk menghitung uang makan
void makan(int jam_kerja, int & uang_makan) {
    if (jam_kerja >= 9) {
        uang_makan = 10000;
    } else {
        uang_makan = 0;
    }
}

// Fungsi untuk menghitung uang transport
void transport(int jam_kerja, int & uang_transport) {
    if (jam_kerja >= 10) {
        uang_transport = 13000;
    } else {
        uang_transport = 0;
    }
}

int main() {
    string nip, nama;
    int jam_kerja;

    cout << "Nama  : Diego Andreas Simanjuntak" << endl;
    cout << "Kelas : 1B Informatika" << endl;
    cout << "NPM   : 2410631170068" << endl;
    cout << "\nTugas 5 Function" << endl;

    cout << "\n\nMasukkan NIP karyawan: ";
    cin >> nip;
    cout << "Masukkan nama karyawan: ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jam_kerja;

    int gaji_pokok, gaji_lembur, uang_makan, uang_transport;

    pokok(jam_kerja, gaji_pokok);
    lembur(jam_kerja, gaji_lembur);
    makan(jam_kerja, uang_makan);
    transport(jam_kerja, uang_transport);

    int total_gaji = gaji_pokok + gaji_lembur + uang_makan + uang_transport;


    cout << "\n\n=== Slip Gaji Karyawan PT. XYZ ===" << endl;
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "a. Gaji Pokok: Rp. " << gaji_pokok << endl;
    cout << "b. Lembur: Rp. " << gaji_lembur << endl;
    cout << "c. Uang Makan: Rp. " << uang_makan << endl;
    cout << "d. Transport: Rp. " << uang_transport << endl;
    cout << "Total Gaji: Rp. " << total_gaji << endl;

    return 0;
}
