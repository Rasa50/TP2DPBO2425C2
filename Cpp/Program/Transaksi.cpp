#include "TokoElektronik.cpp"

class Transaksi : public TokoElektronik {
private:
    int idTransaksi;
    int jumlahBarang;
    string metodePembayaran;

public:
    Transaksi() {
        idTransaksi = 0;
        jumlahBarang = 0;
        metodePembayaran = "";
    }

    // Setter
    void setIdTransaksi(int id) { idTransaksi = id; }
    void setJumlahBarang(int j) { jumlahBarang = j; }
    void setMetodePembayaran(string m) { metodePembayaran = m; }

    // Getter
    int getIdTransaksi() { return idTransaksi; }
    int getJumlahBarang() { return jumlahBarang; }
    string getMetodePembayaran() { return metodePembayaran; }

    // Hitung total harga
    long hitungTotal() { return jumlahBarang * getHargaProduk(); }

    // Cetak garis tabel
    static void printLine(vector<int> widths) {
        cout << "+";
        for (int w : widths) {
            cout << string(w + 2, '-') << "+";
        }
        cout << endl;
    }

    // Cetak header tabel
    static void printHeader(vector<int> widths) {
        printLine(widths);
        cout << "| " << left << setw(widths[0])  << "ID_Trans"
             << " | " << setw(widths[1])  << "Produk"
             << " | " << setw(widths[2])  << "Merk"
             << " | " << setw(widths[3])  << "NoSeri"
             << " | " << setw(widths[4])  << "Harga"
             << " | " << setw(widths[5])  << "Deskripsi"
             << " | " << setw(widths[6])  << "ID_Toko"
             << " | " << setw(widths[7])  << "Nama Toko"
             << " | " << setw(widths[8])  << "Pemilik"
             << " | " << setw(widths[9])  << "Alamat"
             << " | " << setw(widths[10]) << "No Izin"
             << " | " << setw(widths[11]) << "Stok"
             << " | " << setw(widths[12]) << "Jumlah"
             << " | " << setw(widths[13]) << "Metode"
             << " | " << setw(widths[14]) << "Total"
             << " |" << endl;
        printLine(widths);
    }

    // Cetak 1 baris data transaksi
    void printRow(vector<int> widths) {
        cout << "| " << left  << setw(widths[0])  << getIdTransaksi()
             << " | " << setw(widths[1])  << getNamaProduk()
             << " | " << setw(widths[2])  << getMerkProduk()
             << " | " << setw(widths[3])  << getNoSeriProduk()
             << " | " << right << setw(widths[4])  << getHargaProduk()
             << " | " << left  << setw(widths[5])  << getDeskripsi()
             << " | " << right << setw(widths[6])  << getIdToko()
             << " | " << left  << setw(widths[7])  << getNamaToko()
             << " | " << setw(widths[8])  << getPemilikToko()
             << " | " << setw(widths[9])  << getAlamatToko()
             << " | " << setw(widths[10]) << getNoIzinUsaha()
             << " | " << right << setw(widths[11]) << getStok()
             << " | " << right << setw(widths[12]) << getJumlahBarang()
             << " | " << left  << setw(widths[13]) << getMetodePembayaran()
             << " | " << right << setw(widths[14]) << hitungTotal()
             << " |" << endl;
    }

    // Cetak tabel semua transaksi
    static void printTable(vector<Transaksi>& daftar) {
        // Tentukan lebar kolom dinamis
        vector<int> widths = {
            8,  // ID Trans
            6,  // Produk
            4,  // Merk
            6,  // No Seri
            5,  // Harga
            9,  // Deskripsi
            7,  // ID Toko
            10, // Nama Toko
            7,  // Pemilik
            10, // Alamat
            7,  // No Izin
            4,  // Stok
            6,  // Jumlah
            6,  // Metode
            5   // Total
        };

        for (auto &d : daftar) {
            widths[0]  = max(widths[0],  (int)to_string(d.getIdTransaksi()).size());
            widths[1]  = max(widths[1],  (int)d.getNamaProduk().size());
            widths[2]  = max(widths[2],  (int)d.getMerkProduk().size());
            widths[3]  = max(widths[3],  (int)d.getNoSeriProduk().size());
            widths[4]  = max(widths[4],  (int)to_string(d.getHargaProduk()).size());
            widths[5]  = max(widths[5],  (int)d.getDeskripsi().size());
            widths[6]  = max(widths[6],  (int)to_string(d.getIdToko()).size());
            widths[7]  = max(widths[7],  (int)d.getNamaToko().size());
            widths[8]  = max(widths[8],  (int)d.getPemilikToko().size());
            widths[9]  = max(widths[9],  (int)d.getAlamatToko().size());
            widths[10] = max(widths[10], (int)d.getNoIzinUsaha().size());
            widths[11] = max(widths[11], (int)to_string(d.getStok()).size());
            widths[12] = max(widths[12], (int)to_string(d.getJumlahBarang()).size());
            widths[13] = max(widths[13], (int)d.getMetodePembayaran().size());
            widths[14] = max(widths[14], (int)to_string(d.hitungTotal()).size());
        }

        // Cetak tabel
        printHeader(widths);
        for (auto &d : daftar) {
            d.printRow(widths);
        }
        printLine(widths);
    }
};
