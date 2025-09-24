<?php
require_once "Produk.php";

class TokoElektronik extends Produk {
    private int $idToko;
    private string $namaToko,$pemilik,$alamat;

    public function __construct(int $idToko,string $namaToko,string $pemilik,string $alamat,
                                string $namaProduk,string $brand,string $kode,float $harga,string $deskripsi,string $foto){
        parent::__construct($namaProduk,$brand,$kode,$harga,$deskripsi,$foto);
        $this->idToko=$idToko; $this->namaToko=$namaToko; $this->pemilik=$pemilik; $this->alamat=$alamat;
    }

    public function getIdToko(){return $this->idToko;}
    public function setIdToko($v){$this->idToko=$v;}
    public function getNamaToko(){return $this->namaToko;}
    public function setNamaToko($v){$this->namaToko=$v;}
    public function getPemilik(){return $this->pemilik;}
    public function setPemilik($v){$this->pemilik=$v;}
    public function getAlamat(){return $this->alamat;}
    public function setAlamat($v){$this->alamat=$v;}
}
