import java.util.ArrayList;

public class Transaksi extends TokoElektronik { // Perbaiki warisan
    private int idTransaksi;
    private int jumlahBarang;
    private String metodePembayaran;

    // Konstruktor kosong
    public Transaksi() {
        super();
    }

    // Getter & Setter
    public int getIdTransaksi() { return idTransaksi; }
    public void setIdTransaksi(int idTransaksi) { this.idTransaksi = idTransaksi; }

    public int getJumlahBarang() { return jumlahBarang; }
    public void setJumlahBarang(int jumlahBarang) { this.jumlahBarang = jumlahBarang; }

    public String getMetodePembayaran() { return metodePembayaran; }
    public void setMetodePembayaran(String metodePembayaran) { this.metodePembayaran = metodePembayaran; }

    // Metode untuk mencetak tabel
    public static void printTable(ArrayList<Transaksi> daftar) {
        // Mendefinisikan header
        String[] headers = {"ID Trans", "ID Toko", "Nama Produk", "Merk Produk", "No Seri", "Harga", "Deskripsi", "Nama Toko", "Pemilik", "Alamat", "No Izin", "Stok", "Jumlah Beli", "Metode Bayar"};
        
        // Menghitung lebar kolom
        int[] widths = new int[headers.length];
        for (int i = 0; i < headers.length; i++) {
            widths[i] = headers[i].length();
        }

        for (Transaksi t : daftar) {
            String[] data = {
                String.valueOf(t.getIdTransaksi()),
                String.valueOf(t.getIdToko()),
                t.getNamaProduk(),
                t.getMerkProduk(),
                t.getNoSeriProduk(),
                String.valueOf(t.getHargaProduk()),
                t.getDeskripsi(),
                t.getNamaToko(),
                t.getPemilikToko(),
                t.getAlamatToko(),
                t.getNoIzinUsaha(),
                String.valueOf(t.getStok()),
                String.valueOf(t.getJumlahBarang()),
                t.getMetodePembayaran()
            };
            for (int i = 0; i < data.length; i++) {
                if (data[i] != null && data[i].length() > widths[i]) {
                    widths[i] = data[i].length();
                }
            }
        }

        // Cetak garis
        System.out.print("+");
        for (int width : widths) {
            for (int i = 0; i < width + 2; i++) System.out.print("-");
            System.out.print("+");
        }
        System.out.println();
        
        // Cetak header
        System.out.print("|");
        for (int i = 0; i < headers.length; i++) {
            System.out.printf(" %-" + widths[i] + "s |", headers[i]);
        }
        System.out.println();
        
        // Cetak garis
        System.out.print("+");
        for (int width : widths) {
            for (int i = 0; i < width + 2; i++) System.out.print("-");
            System.out.print("+");
        }
        System.out.println();

        // Cetak data
        for (Transaksi t : daftar) {
            System.out.print("|");
            String[] data = {
                String.valueOf(t.getIdTransaksi()),
                String.valueOf(t.getIdToko()),
                t.getNamaProduk(),
                t.getMerkProduk(),
                t.getNoSeriProduk(),
                String.valueOf(t.getHargaProduk()),
                t.getDeskripsi(),
                t.getNamaToko(),
                t.getPemilikToko(),
                t.getAlamatToko(),
                t.getNoIzinUsaha(),
                String.valueOf(t.getStok()),
                String.valueOf(t.getJumlahBarang()),
                t.getMetodePembayaran()
            };
            for (int i = 0; i < data.length; i++) {
                System.out.printf(" %-" + widths[i] + "s |", data[i]);
            }
            System.out.println();
        }
        
        // Cetak garis
        System.out.print("+");
        for (int width : widths) {
            for (int i = 0; i < width + 2; i++) System.out.print("-");
            System.out.print("+");
        }
        System.out.println();
    }
}