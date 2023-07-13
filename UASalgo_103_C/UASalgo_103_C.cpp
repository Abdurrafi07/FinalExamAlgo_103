#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100 ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
//isi disini
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data Mahasiswa." << endl;
	}
	else {
		cout << "======= Daftar Mahasiswa =======" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM : " << NIM[i] << endl;
			cout << "Nama : " << nama[i] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
		}
	}
};
//isi disini
void algorithmacariMahasiswaByNIM() {
	cout << "Cari Mahasiswa Berdasarkan NIM : ";
	int CariNIM;
	cin >> CariNIM;

	bool MahasiswaDitemukan = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == CariNIM) {
			cout << "======= Mahasiswa Ditemukan =======" << endl;
			cout << "NIM : " << NIM[i] << endl;
			cout << "Nama : " << nama[i] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
			MahasiswaDitemukan = true;
			break;
		}
	}
	if (!jumlahMahasiswa);
	cout << "Mahasiswa Ditemukan";
}

//isi disini
void algorithmaSortByTahunMasuk() {

}
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM  : " << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk : " << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

// 2. Algoritma liniersearch dan Algoritma Insertionsort
// 3. Algoritma Stack Mengunakan LIFO (Last In First Out) sedangkan Algoritma Queue Menggunakan FIFO (First In First Out)
// 4. Menghapus Tulisan di Word [Undo], Memunculkan yang telah dihapus Tulisan di Word [Redo], Kembali Ke halaman yang sebelumnya, Undo dan Redo
// 5. a. Kedalaman 4
//	  b. Preorder = 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50