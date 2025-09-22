#include "Produk.cpp"

class TokoElektronik : public Produk {
private:
    int idToko;
    string namaToko;
    string pemilikToko;
    string alamatToko;
    string noIzinUsaha;
    int stok;

public:
    TokoElektronik() {
        idToko = 0;
        namaToko = "";
        pemilikToko = "";
        alamatToko = "";
        noIzinUsaha = "";
        stok = 0;
    }

    void setIdToko(int id) { idToko = id; }
    void setNamaToko(string n) { namaToko = n; }
    void setPemilikToko(string p) { pemilikToko = p; }
    void setAlamatToko(string a) { alamatToko = a; }
    void setNoIzinUsaha(string no) { noIzinUsaha = no; }
    void setStok(int s) { stok = s; }

    int getIdToko() { return idToko; }
    string getNamaToko() { return namaToko; }
    string getPemilikToko() { return pemilikToko; }
    string getAlamatToko() { return alamatToko; }
    string getNoIzinUsaha() { return noIzinUsaha; }
    int getStok() { return stok; }
};