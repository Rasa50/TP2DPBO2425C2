#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;

class Produk {
private:
    string namaProduk;
    string merkProduk;
    string noSeriProduk;
    long hargaProduk;
    string deskripsi;

public:
    Produk() {
        namaProduk = "";
        merkProduk = "";
        noSeriProduk = "";
        hargaProduk = 0;
        deskripsi = "";
    }

    void setNamaProduk(string n) { namaProduk = n; }
    void setMerkProduk(string m) { merkProduk = m; }
    void setNoSeriProduk(string no) { noSeriProduk = no; }
    void setHargaProduk(long h) { hargaProduk = h; }
    void setDeskripsi(string d) { deskripsi = d; }

    string getNamaProduk() { return namaProduk; }
    string getMerkProduk() { return merkProduk; }
    string getNoSeriProduk() { return noSeriProduk; }
    long getHargaProduk() { return hargaProduk; }
    string getDeskripsi() { return deskripsi; }
};