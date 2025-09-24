from Produk import Produk

class TokoElektronik(Produk):
    def __init__(self):
        super().__init__()
        self._id_toko = 0
        self._nama_toko = ""
        self._pemilik = ""
        self._alamat = ""
        self._no_izin_usaha = ""
        self._stok = 0

    def get_id_toko(self): return self._id_toko
    def set_id_toko(self, v): self._id_toko = v

    def get_nama_toko(self): return self._nama_toko
    def set_nama_toko(self, v): self._nama_toko = v

    def get_pemilik(self): return self._pemilik
    def set_pemilik(self, v): self._pemilik = v

    def get_alamat(self): return self._alamat
    def set_alamat(self, v): self._alamat = v

    def get_no_izin_usaha(self): return self._no_izin_usaha
    def set_no_izin_usaha(self, v): self._no_izin_usaha = v

    def get_stok(self): return self._stok
    def set_stok(self, v): self._stok = v