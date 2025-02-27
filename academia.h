#include <iostream>
#include "mahasiswa.h"
#include "jadwal.h"
#include<conio.h>
#include <vector>
using namespace std;

struct matkul {
    string matakuliah;
    string prodi;
    string kelas;
    string konsen;
    string pengajar;
    string tahunAkademik;
    string jenisPertemuan;

};

class Academia {
    public : 
        Academia();
        void dashboard();
        void mahasiswa();
        void perkuliahan();
        void kemahasiswaan();
        void rekap();
        void ttdDigital();
    private : 
        Mahasiswa mhs;
        Jadwal jadwal;
};

    Academia::Academia() {
        bool isAuthenticated = false;
        int menu;
        while(!isAuthenticated) {
            isAuthenticated = mhs.login();
        }

        system("cls");
        //calling dashboard method as a default action after sign in
        dashboard();

        while(true) {
            system("cls");

            cout << "Menu : " << endl;
            cout << "-------------------" << endl;
            cout << "1. Dashboard" << endl;
            cout << "2. Mahasiswa" << endl;
            cout << "3. Perkuliahan" << endl;
            cout << "4. Kemahasiswaan" << endl;
            cout << "5. Rekap" << endl;
            cout << "6. TTD Digital" << endl;
            cout << "7. Logout" << endl;
            cout << "-------------------" << endl;
            cout << endl;
            cout << "Pilih Menu : ";
            cin >> menu;

            switch (menu)
            {
            case 1:
                dashboard();
                break;
            case 2:
                mahasiswa();
                break;
            case 3:
                perkuliahan();
                break;
            case 4:
                kemahasiswaan();
                break;
            case 5:
                rekap();
                break;
            case 6:
                ttdDigital();
                break;
            case 7:
                return;
                break;
            default:
                break;
            }
        }

    }

    void Academia::dashboard() {
        system("cls");        
        cout << "Selamat datang di Academia PNJ" << endl;
        cout << "Dashboard Page" << endl;

        mhs.show();
        jadwal.show();
        cout << "Klik key mana saja untuk lanjut...";
        _getch();
        
    }

    void Academia::mahasiswa() {
        system("cls");
        cout << "fitur mahasiswa" << endl;
        cout << "Klik key mana saja untuk lanjut...";
        _getch();
    }

    void Academia::perkuliahan() {
        system("cls");
        int menu;
        vector<vector<matkul>> mataKuliah = {
            {{"TIK204 - Algoritma & Struktur Data", "Sarjana Terapan - Teknik Informatika", "2B", "Reguler", "DEWI YANTI LILIANA", "2024/2025 Genap", "Offline"}},
            {{"TIK208 - Sistem Informasi Manajemen", "Sarjana Terapan - Teknik Informatika", "2B", "Reguler", "BAMBANG WARSUTA", "2024/2025 Genap", "Offline"}},
        };

        cout << "Menu : " << endl;
        cout << "-------------------" << endl;
        cout << "1. Isian Kuisioner EDOM" << endl;
        cout << "2. Kelas Perkuliahan" << endl;
        cout << "3. Aktivitas Perwalian" << endl;
        cout << "-------------------" << endl;
        cout << endl;
        cout << "Pilih Menu : ";
        cin >> menu;

        switch (menu)
        {
        case 1: 
            cout << "Fitur Isian kuisioner EDOM" << endl;
            break;
        case 2: 
            cout << setfill('-') << setw(170) << "-" << setfill(' ') << endl;
            cout << "| " << left << setw(40) << "Mata Kuliah" << " | "
                << setw(36) << "Prodi" << " | "
                << setw(5) << "Kelas" << " | "
                << setw(12) << "Konsentrasi" << " | "
                << setw(20) << "Pengajar" << " | "
                << setw(16) << "Tahun Akademik" << " | "
                << setw(15) << "Jenis Pertemuan" << " |" << endl;
            cout << setfill('-') << setw(170) << "-" << setfill(' ') << endl;
            for(int i = 0; i < mataKuliah.size(); i++) {
                for(int j = 0; j < mataKuliah[i].size(); j++) {
                    cout << "| " << left << setw(40) << mataKuliah[i][j].matakuliah << " | "
                        << setw(36) << mataKuliah[i][j].prodi << " | "
                        << setw(5) << mataKuliah[i][j].kelas << " | "
                        << setw(12) << mataKuliah[i][j].konsen << " | "
                        << setw(20) << mataKuliah[i][j].pengajar << " | "
                        << setw(16) << mataKuliah[i][j].tahunAkademik << " | "
                        << setw(15) << mataKuliah[i][j].jenisPertemuan << " |" << endl;
                    cout << setfill('-') << setw(170) << "-" << setfill(' ') << endl;
                }
                cout << endl;
            }
            break;

        case 3: 
            cout << "Fitur Aktivitas Perwalian" << endl;
            break;
        default:
            break;
        }

        cout << "Klik key mana saja untuk lanjut...";
        _getch();
    }

    void Academia::kemahasiswaan() {
        system("cls");
        cout << "fitur kemahasiswaan" << endl;
        cout << "Klik key mana saja untuk lanjut...";
        _getch();
    }

    void Academia::rekap() {
        system("cls");
        cout << "fitur rekap" << endl;
        cout << "Klik key mana saja untuk lanjut...";
        _getch();
    }

    void Academia::ttdDigital() {
        system("cls");
        cout << "fitur ttdDigital" << endl;
        cout << "Klik key mana saja untuk lanjut...";
        _getch();
    }