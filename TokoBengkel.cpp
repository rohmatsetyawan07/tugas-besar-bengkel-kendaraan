#include <iostream>
#include <string>
using namespace std;

int main()
{
    string namaPelanggan;
    string platNomor;
    string jenisKendaraan;
    int hargaServis;
    string namaServis;
    char kodeKendaraan;
    int jenisServis;

    cout << "+_+_+_+_+_+_Bengkel Jaya Terpadu_+_+_+_+_+_+\n\n";

    cout << "Masukan Nama Anda= ";
    getline(cin, namaPelanggan);
    cout << "Masukan Plat Nomor Kendaraan= ";
    getline(cin, platNomor);
    cout << "Masukan Jenis Kendaraan Anda (motor (A) / mobil (B))= ";
    getline(cin, jenisKendaraan);
    cout << endl;

    cout << "+_+_+_+_+_+_Daftar Harga Sevis_+_+_+_+_+_+\n\n";

    if (jenisKendaraan == "motor")
    {
        kodeKendaraan = 'A';
        cout << "1. Ganti oli (75.000) " << endl;
        cout << "2. Servis Ringan (500.000) " << endl;
        cout << "3. Servis Berat (750.000)" << endl;
        cout << "4. Ganti Kampas Rem (45.000)" << endl;
        cout << "5. Tune Up (300.000)" << endl;
    }

    else if (jenisKendaraan == "mobil")
    {
        kodeKendaraan = 'B';
        cout << "1. Ganti oli (85.000) " << endl;
        cout << "2. Servis Ringan (600.000) " << endl;
        cout << "3. Servis Berat (800.000)" << endl;
        cout << "4. Ganti Kampas Rem (50.000)" << endl;
        cout << "5. Tune Up (400.000)" << endl;
    }

    else
    {
        cout << "Jenis kendaraan tidak dikenali";
    }

    cout << "Masukan Nomor Servis Sesuai Menu : ";
    cin >> jenisServis;

    if (kodeKendaraan == 'A')
    {
        switch (jenisServis)
        {
        case 1:
            hargaServis = 75000;
            namaServis = "Ganti Oli";
            break;
        case 2:
            hargaServis = 500000;
            namaServis = "Servis ringan";
            break;
        case 3:
            hargaServis = 750000;
            namaServis = "Servis Berat";
            break;
        case 4:
            hargaServis = 45000;
            namaServis = "Ganti Kampas Rem";
            break;
        case 5:
            hargaServis = 300000;
            namaServis = "Tune Up";
            break;
        }
    }
    else
    {
        switch (jenisServis)
        {
        case 1:
            hargaServis = 85000;
            namaServis = "Ganti Oli";
            break;
        case 2:
            hargaServis = 600000;
            namaServis = "Servis ringan";
            break;
        case 3:
            hargaServis = 800000;
            namaServis = "Servis Berat";
            break;
        case 4:
            hargaServis = 50000;
            namaServis = "Ganti Kampas Rem";
            break;
        case 5:
            hargaServis = 400000;
            namaServis = "Tune Up";
            break;
        }
    }

    cout << "+_+_+_+_+_+_NOTA BELANJA_+_+_+_+_+_+\n\n";
    cout << "Nama Pelanggan: " << namaPelanggan << endl;
    cout << "Jenis Kendaraan & Plat Nomor: " << jenisKendaraan << " , " << platNomor << endl;
    cout << "Jenis Servis: " << namaServis << endl;
    cout << "Harga Layanan: " << hargaServis << endl;
}