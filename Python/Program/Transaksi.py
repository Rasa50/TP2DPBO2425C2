from TokoElektronik import TokoElektronik

class Transaksi(TokoElektronik):
    def __init__(self):
        super().__init__()
        self._id_transaksi = 0
        self._jumlah_barang = 0
        self._metode_pembayaran = ""

    def set_id_transaksi(self, v): self._id_transaksi = v
    def get_id_transaksi(self): return self._id_transaksi

    def set_jumlah_barang(self, v): self._jumlah_barang = v
    def get_jumlah_barang(self): return self._jumlah_barang

    def set_metode_pembayaran(self, v): self._metode_pembayaran = v
    def get_metode_pembayaran(self): return self._metode_pembayaran

    def to_row(self):
        return [
            self.get_id_transaksi(),
            self.get_id_toko(),
            self.get_nama_produk(),
            self.get_brand(),
            self.get_kode(),
            self.get_harga(),
            self.get_deskripsi(),
            self.get_nama_toko(),
            self.get_pemilik(),
            self.get_alamat(),
            self.get_no_izin_usaha(),
            self.get_stok(),
            self.get_jumlah_barang(),
            self.get_metode_pembayaran()
        ]

    @staticmethod
    def print_table(data):
        headers = ["ID Trans", "ID Toko", "Nama Produk", "Brand", "Kode", "Harga", "Deskripsi", "Nama Toko", "Pemilik", "Alamat", "No Izin Usaha", "Stok", "Jumlah", "Metode"]
        
        # Mengubah data ke string dan mendapatkan lebar maksimum per kolom
        table_data = [list(map(str, d.to_row())) for d in data]
        
        # Hitung lebar maksimal setiap kolom
        column_widths = [len(header) for header in headers]
        for row in table_data:
            for i, item in enumerate(row):
                if len(item) > column_widths[i]:
                    column_widths[i] = len(item)
                    
        # Cetak header
        header_row = " | ".join([f"{header:<{column_widths[i]}}" for i, header in enumerate(headers)])
        line = "-" * len(header_row)
        print(line)
        print(header_row)
        print(line)

        # Cetak data
        for row in table_data:
            formatted_row = " | ".join([f"{item:<{column_widths[i]}}" for i, item in enumerate(row)])
            print(formatted_row)
        print(line)