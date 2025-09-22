#include "Transaksi.cpp"

int main() {
    vector<Transaksi> daftar;

    // === 5 DATA AWAL ===
    Transaksi t1; 
    t1.setIdTransaksi(101); 
    t1.setNamaProduk("Laptop"); 
    t1.setMerkProduk("Asus");
    t1.setNoSeriProduk("AS123"); 
    t1.setHargaProduk(8000000); 
    t1.setDeskripsi("Laptop Gaming");
    t1.setIdToko(1); 
    t1.setNamaToko("Toko Elektronik Jaya"); 
    t1.setPemilikToko("Budi");
    t1.setAlamatToko("Jl. Merdeka No. 10"); 
    t1.setNoIzinUsaha("IZN-001"); 
    t1.setStok(10);
    t1.setJumlahBarang(2); 
    t1.setMetodePembayaran("Cash"); daftar.push_back(t1);

    Transaksi t2;
    t2.setIdTransaksi(102);
    t2.setNamaProduk("Smartphone");
    t2.setMerkProduk("Samsung");
    t2.setNoSeriProduk("SM456");
    t2.setHargaProduk(5000000);
    t2.setDeskripsi("HP Android");
    t2.setIdToko(2);
    t2.setNamaToko("Gadget Center");
    t2.setPemilikToko("Andi");
    t2.setAlamatToko("Jl. Sudirman No. 5");
    t2.setNoIzinUsaha("IZN-002");
    t2.setStok(20);
    t2.setJumlahBarang(1);
    t2.setMetodePembayaran("Transfer");
    daftar.push_back(t2);

    Transaksi t3;
    t3.setIdTransaksi(103);
    t3.setNamaProduk("Televisi");
    t3.setMerkProduk("LG");
    t3.setNoSeriProduk("TV789");
    t3.setHargaProduk(4000000);
    t3.setDeskripsi("Smart TV 32 inch");
    t3.setIdToko(3);
    t3.setNamaToko("Electronic Mart");
    t3.setPemilikToko("Siti");
    t3.setAlamatToko("Jl. Asia Afrika No. 7");
    t3.setNoIzinUsaha("IZN-003");
    t3.setStok(5);
    t3.setJumlahBarang(1);
    t3.setMetodePembayaran("E-Wallet");
    daftar.push_back(t3);

    Transaksi t4;
    t4.setIdTransaksi(104);
    t4.setNamaProduk("Kulkas");
    t4.setMerkProduk("Sharp");
    t4.setNoSeriProduk("RF111");
    t4.setHargaProduk(3500000);
    t4.setDeskripsi("2 pintu hemat listrik");
    t4.setIdToko(4);
    t4.setNamaToko("Appliance Store");
    t4.setPemilikToko("Dewi");
    t4.setAlamatToko("Jl. Diponegoro No. 20");
    t4.setNoIzinUsaha("IZN-004");
    t4.setStok(7);
    t4.setJumlahBarang(1);
    t4.setMetodePembayaran("Cash");
    daftar.push_back(t4);

    Transaksi t5;
    t5.setIdTransaksi(105);
    t5.setNamaProduk("Headphone");
    t5.setMerkProduk("Sony");
    t5.setNoSeriProduk("HD999");
    t5.setHargaProduk(1200000);
    t5.setDeskripsi("Noise Cancelling");
    t5.setIdToko(5);
    t5.setNamaToko("Audio Hub");
    t5.setPemilikToko("Fajar");
    t5.setAlamatToko("Jl. Braga No. 12");
    t5.setNoIzinUsaha("IZN-005");
    t5.setStok(15);
    t5.setJumlahBarang(3);
    t5.setMetodePembayaran("Transfer");
    daftar.push_back(t5);

    // === Tampilkan tabel pertama kali ===
    Transaksi::printTable(daftar);

    // === Loop input user ===
    char lanjut;
    do {
        cout << "\nTambah data transaksi baru? (y/n): ";
        cin >> lanjut;
        if (lanjut == 'y' || lanjut == 'Y') {
            Transaksi t;
            int idTrans, stok, jumlah, idToko;
            long harga;
            string namaProduk, merk, noSeri, deskripsi;
            string namaToko, pemilik, alamat, noIzin, metode;

            cout << "ID Transaksi : "; cin >> idTrans;
            cout << "Nama Produk  : "; cin.ignore(); getline(cin, namaProduk);
            cout << "Merk Produk  : "; getline(cin, merk);
            cout << "No Seri      : "; getline(cin, noSeri);
            cout << "Harga Produk : "; cin >> harga;
            cout << "Deskripsi    : "; cin.ignore(); getline(cin, deskripsi);

            cout << "ID Toko      : "; cin >> idToko;
            cout << "Nama Toko    : "; cin.ignore(); getline(cin, namaToko);
            cout << "Pemilik      : "; getline(cin, pemilik);
            cout << "Alamat Toko  : "; getline(cin, alamat);
            cout << "No Izin Usaha: "; getline(cin, noIzin);
            cout << "Stok         : "; cin >> stok;

            cout << "Jumlah Beli  : "; cin >> jumlah;
            cout << "Metode Bayar : "; cin >> metode;

            t.setIdTransaksi(idTrans);
            t.setNamaProduk(namaProduk);
            t.setMerkProduk(merk);
            t.setNoSeriProduk(noSeri);
            t.setHargaProduk(harga);
            t.setDeskripsi(deskripsi);

            t.setIdToko(idToko);
            t.setNamaToko(namaToko);
            t.setPemilikToko(pemilik);
            t.setAlamatToko(alamat);
            t.setNoIzinUsaha(noIzin);
            t.setStok(stok);

            t.setJumlahBarang(jumlah);
            t.setMetodePembayaran(metode);

            daftar.push_back(t);
            cout << "\nTransaksi berhasil ditambahkan!\n";

            // Cetak tabel ulang setelah tambah
            Transaksi::printTable(daftar);
        }
    } while (lanjut == 'y' || lanjut == 'Y');


    return 0;
}