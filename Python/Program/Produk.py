class Produk:
    def __init__(self):
        self._nama_produk = ""
        self._brand = ""
        self._kode = ""
        self._harga = 0
        self._deskripsi = ""

    def get_nama_produk(self): return self._nama_produk
    def set_nama_produk(self, v): self._nama_produk = v

    def get_brand(self): return self._brand
    def set_brand(self, v): self._brand = v

    def get_kode(self): return self._kode
    def set_kode(self, v): self._kode = v

    def get_harga(self): return self._harga
    def set_harga(self, v): self._harga = v

    def get_deskripsi(self): return self._deskripsi
    def set_deskripsi(self, v): self._deskripsi = v