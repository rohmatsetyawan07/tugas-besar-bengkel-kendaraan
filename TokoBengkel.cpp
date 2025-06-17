#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void salamPembuka()
{
    cout << "Selamat Datang di Bengkel Andalan Anda\n\n";
}

void pilihanAplikasi()
{
	int pilihan;
    cout << "Apakah Anda Ingin Kembali ke Halaman Utama? \n\n";
    cout << "Jika Iya Tekan Y "<<endl;
    cout<<"Jika Tidak Tekan N"<<endl;
    cout<<"Masukan Pilihan Anda: ";
    cin>>pilihan;
    
    
    if (pilihan=='y'){
    	
    	system ("cls");
    	getch();
	}
	else{
		cout<<"Terima Kasih, Permintaan Anda Sedang di Proses"<<endl;
	}
}

int main()
{
    string namaPelanggan, platNomor, jenisKendaraan;
    string namaServis[7] = {"Ganti oli", "Servis Ringan", "Servis Berat", "Ganti Kampas Rem", "Tune Up", "Ganti Lampu", "Cek Crank Case"};
    int hargaServisMotor[7] = {75000, 500000, 750000, 45000, 300000, 15000, 40000};
    int hargaServisMobil[7] = {85000, 600000, 800000, 50000, 400000, 20000, 45000};
    char kodeKendaraan;
    int jumlahServis, totalHarga = 0;
    int pilihan[10]; // max 10 layanan

    cout << "+_+_+_+_+_+_Bengkel Jaya Terpadu_+_+_+_+_+_+\n\n";

    salamPembuka();

    cout << "Masukan Nama Anda: ";
    getline(cin, namaPelanggan);

    cout << "Masukan Plat Nomor Kendaraan: ";
    getline(cin, platNomor);

    cout << "Masukan Jenis Kendaraan Anda (motor / mobil): ";
    getline(cin, jenisKendaraan);

    cout << "\n+_+_+_+_+_+_Daftar Harga Servis_+_+_+_+_+_+\n\n";

    if (jenisKendaraan == "motor")
    {
        kodeKendaraan = 'A';
        for (int i = 0; i <7; i++)
        {
            cout << i + 1 << ". " << namaServis[i] << " (" << hargaServisMotor[i] << ")\n";
        }
    }
    else if (jenisKendaraan == "mobil")
    {
        kodeKendaraan = 'B';
        for (int i = 0; i <7; i++)
        {
            cout << i + 1 << ". " << namaServis[i] << " (" << hargaServisMobil[i] << ")\n";
        }
    }
    else
    {
        cout << "Jenis kendaraan tidak dikenali.\n";
        return 0;
    }

    cout << "\nMasukan jumlah layanan yang ingin dipilih: ";
    cin >> jumlahServis;

    cout << "Pilih " << jumlahServis << " layanan (masukkan nomor sesuai menu 1-5):\n";

    for (int i = 0; i < jumlahServis; i++)
    {
        cout << "Pilihan ke-" << i + 1 << ": ";
        cin >> pilihan[i];

        if (pilihan[i] < 1 || pilihan[i] > 7)
        {
            cout << "Pilihan tidak valid!\n";
            return 0;
        }

        if (kodeKendaraan == 'A')
        {
            totalHarga += hargaServisMotor[pilihan[i] - 1];
        }
        else
        {
            totalHarga += hargaServisMobil[pilihan[i] - 1];
        }
    }

    cout << "\n+_+_+_+_+_+_NOTA BELANJA_+_+_+_+_+_+\n\n";
    cout << "Nama Pelanggan: " << namaPelanggan << endl;
    cout << "Jenis Kendaraan & Plat Nomor: " << jenisKendaraan << " , " << platNomor << endl;
    cout << "Layanan yang dipilih:\n";

    for (int i = 0; i < jumlahServis; i++)
    {
        int idx = pilihan[i] - 1;
        cout << "- " << namaServis[idx] << endl;
    }

    cout << "Total Harga: Rp " << totalHarga << endl<<endl;
    
    cout<<"===================================\n\n";
    
    pilihanAplikasi();
    
}
