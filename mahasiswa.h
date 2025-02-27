#include <iostream>
using namespace std;

class Mahasiswa {
  private:
    string nim = "1";
    string nama = "ray kinaya";
    string alamat = "Depok anti kendor";
    string no_telp = "0812696969";
    string prodi = "Sarjana Terapan - Teknik Informatika";
    string kelas_mahasiswa = "Reguler B (B)";
    string status_mahasiswa = "Aktif";
    string password = "1";

  public:
    bool login();
    void show();
};

bool Mahasiswa::login() {
  string input_username;
  string input_password;
  bool login = false;

  while (!login) {
    system("cls");
    cout << " --- LOGIN ACADEMIA --- " <<endl;
    cout << " Username : ";
    cin >> input_username;
    cout << " Password : ";
    cin >> input_password;
    
    if (input_username == nim && input_password == password) {
      login = true;
    } else {
      login = false;
    }
  }
  return login;
}

void Mahasiswa::show() {
  cout <<endl << " Informasi Mahasiswa " <<endl;
  cout << " ------------------------------------------------------------" <<endl;
  cout << " NIM               : " << nim <<endl;
  cout << " Nama              : " << nama <<endl;
  cout << " Alamat            : " << alamat <<endl;
  cout << " No.Telp/HP        : " << no_telp <<endl;
  cout << " Program Studi     : " << prodi <<endl;
  cout << " Kelas Mahasiswa   : " << kelas_mahasiswa <<endl;
  cout << " Status Mahasiswa  : " << status_mahasiswa <<endl;
  cout << " ------------------------------------------------------------" <<endl;
}