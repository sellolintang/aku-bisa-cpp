#include <iostream>
#include <iomanip> // Untuk format tabel
using namespace std;

class Jadwal{
    private:
        string mata_kuliah = "Sistem Informasi Manajemen";
        string tanggal = "26/02/2025";
        string jam_durasi = "08:00 - 10:00";
        string lokasi = "GSG 207";
        string dosen = "Bambang Warsuta";
        string jenis_pertemuan = "Offline";
        bool presensi = false;
    public:
        void absen();
        void show();
};

void Jadwal::absen(){
    string absen;
    cout << "Absen Presensi (Y/N)? ";
    cin >> absen;
    if(absen == "Y" || absen == "y"){
        presensi = true;
        cout << "Presensi berhasil!" << endl;
    }else{
        presensi = false;
        cout << "Presensi gagal!" << endl;
    }
}

void Jadwal::show(){
    cout << setfill('-') << setw(140) << "-" << setfill(' ') << endl;
    cout << "| " << left << setw(28) << "Mata Kuliah" << " | "
         << setw(11) << "Tanggal" << " | "
         << setw(12) << "jam/durasi" << " | "
         << setw(8) << "lokasi" << " | "
         << setw(18) << "dosen" << " | "
         << setw(15) << "jenis pertemuan" << " | "
         << setw(12) << "Presensi" << " |" << endl;
    cout << setfill('-') << setw(140) << "-" << setfill(' ') << endl;
    cout << "| " << left << setw(28) << mata_kuliah << " | "
         << setw(11) << tanggal << " | "
         << setw(12) << jam_durasi << " | "
         << setw(8) << lokasi << " | "
         << setw(18) << dosen << " | "
         << setw(15) << jenis_pertemuan << " | "
         << setw(12) << (presensi ? "Hadir" : "Tidak Hadir") << " |" << endl;
    cout << setfill('-') << setw(140) << "-" << setfill(' ') << endl;

    if(!presensi) {
        absen();
    }
}
