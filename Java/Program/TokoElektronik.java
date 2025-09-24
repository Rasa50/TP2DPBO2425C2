public class TokoElektronik extends Produk {
    private int idToko, stok;
    private String namaToko, pemilikToko, alamatToko, noIzinUsaha;

    // Tambahkan konstruktor kosong
    public TokoElektronik() {}

    // Getter dan Setter
    public int getIdToko() { return idToko; }
    public void setIdToko(int v) { idToko = v; }

    public String getNamaToko() { return namaToko; }
    public void setNamaToko(String v) { namaToko = v; }

    public String getPemilikToko() { return pemilikToko; }
    public void setPemilikToko(String v) { pemilikToko = v; }

    public String getAlamatToko() { return alamatToko; }
    public void setAlamatToko(String v) { alamatToko = v; }

    public String getNoIzinUsaha() { return noIzinUsaha; }
    public void setNoIzinUsaha(String v) { noIzinUsaha = v; }

    public int getStok() { return stok; }
    public void setStok(int v) { stok = v; }
}