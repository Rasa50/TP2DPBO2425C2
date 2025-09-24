<?php
class Produk {
    private string $namaProduk, $brand, $kode, $deskripsi, $foto;
    private float $harga;

    public function __construct(string $namaProduk, string $brand, string $kode, float $harga, string $deskripsi, string $foto){
        $this->namaProduk=$namaProduk; $this->brand=$brand; $this->kode=$kode; $this->harga=$harga;
        $this->deskripsi=$deskripsi; $this->foto=$foto;
    }
    public function getNamaProduk(){return $this->namaProduk;}
    public function setNamaProduk($v){$this->namaProduk=$v;}
    public function getBrand(){return $this->brand;}
    public function setBrand($v){$this->brand=$v;}
    public function getKode(){return $this->kode;}
    public function setKode($v){$this->kode=$v;}
    public function getHarga(){return $this->harga;}
    public function setHarga($v){$this->harga=$v;}
    public function getDeskripsi(){return $this->deskripsi;}
    public function setDeskripsi($v){$this->deskripsi=$v;}
    public function getFoto(){return $this->foto;}
    public function setFoto($v){$this->foto=$v;}
}
