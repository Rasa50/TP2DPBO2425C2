<?php
require_once "Transaksi.php";

$data=[
    new Transaksi(101,2,"Cash",1,"Toko Jaya","Budi","Jl. Merdeka 10","Laptop","Asus","AS123",8000000,"Laptop Gaming","uploads/laptop.jpg"),
    new Transaksi(102,1,"Transfer",2,"Gadget Center","Andi","Jl. Sudirman 5","Smartphone","Samsung","SM456",5000000,"HP Android","uploads/hp.jpg"),
    new Transaksi(103,1,"E-Wallet",3,"Electronic Mart","Siti","Jl. Asia Afrika 7","Televisi","LG","TV789",4000000,"Smart TV","uploads/tv.jpg"),
    new Transaksi(104,1,"Cash",4,"Appliance Store","Dewi","Jl. Diponegoro 20","Kulkas","Sharp","RF111",3500000,"Hemat Listrik","uploads/kulkas.jpg"),
    new Transaksi(105,3,"Transfer",5,"Audio Hub","Fajar","Jl. Braga 12","Headphone","Sony","HD999",1200000,"Noise Cancelling","uploads/headphone.jpg"),
];
?>
<!doctype html><html><head><meta charset="utf-8"><title>Daftar Transaksi</title></head><body>
<h2>Daftar Transaksi</h2>
<?php Transaksi::printTable($data); ?>
</body></html>
