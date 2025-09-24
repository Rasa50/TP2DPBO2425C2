<?php
require_once "TokoElektronik.php";

class Transaksi extends TokoElektronik {
    private int $idTrans,$jumlah;
    private string $metode;

    public function __construct(int $idTrans,int $jumlah,string $metode,int $idToko,string $namaToko,string $pemilik,string $alamat,
                                string $namaProduk,string $brand,string $kode,float $harga,string $deskripsi,string $foto){
        parent::__construct($idToko,$namaToko,$pemilik,$alamat,$namaProduk,$brand,$kode,$harga,$deskripsi,$foto);
        $this->idTrans=$idTrans; $this->jumlah=$jumlah; $this->metode=$metode;
    }

    public function getIdTrans(){return $this->idTrans;}
    public function setIdTrans($v){$this->idTrans=$v;}
    public function getJumlah(){return $this->jumlah;}
    public function setJumlah($v){$this->jumlah=$v;}
    public function getMetode(){return $this->metode;}
    public function setMetode($v){$this->metode=$v;}

    public static function printTable($list){
        echo "<table border=1 cellpadding=6 cellspacing=0 style='border-collapse:collapse;width:100%'>";
        echo "<tr><th>ID Trans</th><th>ID Toko</th><th>Nama Produk</th><th>Brand</th><th>Kode</th><th>Harga</th><th>Deskripsi</th><th>Foto</th><th>Nama Toko</th><th>Pemilik</th><th>Alamat</th><th>Jumlah</th><th>Metode</th></tr>";
        foreach($list as $t){
            echo "<tr>";
            echo "<td>".$t->getIdTrans()."</td>";
            echo "<td>".$t->getIdToko()."</td>";
            echo "<td>".$t->getNamaProduk()."</td>";
            echo "<td>".$t->getBrand()."</td>";
            echo "<td>".$t->getKode()."</td>";
            echo "<td>".number_format($t->getHarga(),2,",",".")."</td>";
            echo "<td>".$t->getDeskripsi()."</td>";
            echo "<td><img src='".$t->getFoto()."' style='max-height:60px'></td>";
            echo "<td>".$t->getNamaToko()."</td>";
            echo "<td>".$t->getPemilik()."</td>";
            echo "<td>".$t->getAlamat()."</td>";
            echo "<td>".$t->getJumlah()."</td>";
            echo "<td>".$t->getMetode()."</td>";
            echo "</tr>";
        }
        echo "</table>";
    }
}
