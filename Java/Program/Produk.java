public class Produk {
    private String namaProduk, merkProduk, noSeriProduk, deskripsi;
    private double hargaProduk;

    // Tambahkan konstruktor kosong
    public Produk() {}

    // Getter dan Setter
    public String getNamaProduk() { return namaProduk; }
    public void setNamaProduk(String v) { namaProduk = v; }

    public String getMerkProduk() { return merkProduk; }
    public void setMerkProduk(String v) { merkProduk = v; }

    public String getNoSeriProduk() { return noSeriProduk; }
    public void setNoSeriProduk(String v) { noSeriProduk = v; }

    public double getHargaProduk() { return hargaProduk; }
    public void setHargaProduk(double v) { hargaProduk = v; }

    public String getDeskripsi() { return deskripsi; }
    public void setDeskripsi(String v) { deskripsi = v; }
}