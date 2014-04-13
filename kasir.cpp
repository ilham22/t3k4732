#include <cstdlib>
#include <iostream>
using namespace std;
 
/*TUGAS ALGORITMA
Nama :ILHAM TAUFIQ*/
 
main()
{
char *nm_mkn,*nm_mnm,kd_paket,pilihan2,nampel[7];
float jum_bel,harga,bayar,kembalian,total,ppn,diskon,tobar;
awal:
clrscr();
 
cout << "\t\t ==SMAKZIE RESTO==\n";
cout << "\t\t Jl.Siliwangi\n";
cout<<endl;
cout << "--------------------------------------------------------------\n";
cout << "|Paket| MENU MAKANAN | MENU MUNUMAN | HARGA |\n";
cout << "--------------------------------------------------------------\n";
cout << "| A | Nasi BeGuli | Jus jambu | RP. 20.000 |\n";
cout << "| B | Mie yamin | Teh Sosro | Rp. 17.500 |\n";
cout << "| C | Nasi Goreng | Es Teh manis | RP. 18.000 |\n";
cout << "| D | Nasi rames | Es Kacang | Rp. 20.000 |\n";
cout << "| E | Sate kambing | Es teh | RP. 30.000 |\n";
cout << "| F | Nasi bakar | Es fanta | RP. 28.000 |\n";
cout << "| G | Pecel lele | Teh anget | RP. 15.000 |\n";
cout << "| H | Lontong tahu | Es teh | RP. 18.000 |\n";
cout << "| I | Garang asem | Es kopi | RP. 25.000 |\n";
cout << "| J | Sate kambing | Es Sirup | RP. 30.000 |\n";
cout << "--------------------------------------------------------------\n\n";
 
 
cout << "\t=======================================\n";
cout << "\t| ==SMAKZIE RESTO== |\n";
cout << "\t| Jl.SILIWANGI |\n";
cout << "\t=======================================\n\n\n";
paket:
cout << " Nama Pelanggan : ";
cin >> nampel;
cout << " Nama Paket yang di pilih [A/B/C/D/E/F/G/H/I/J] : ";
cin >> kd_paket;
cout << " Jumlah Beli : ";
cin >> jum_bel;
cout << "\t--------------------------------------------\n";
 
if (kd_paket=='A' || kd_paket=='a')
{
nm_mkn="Nasi Be Guling";
nm_mnm="Jus Alpukat";
harga=20000;
}
else if (kd_paket=='B' || kd_paket=='b')
{
nm_mkn="Mie Ayam";
nm_mnm="Tebs";
harga=17000;
}
else if (kd_paket=='C' || kd_paket=='c')
{
nm_mkn="Nasi Goreng";
nm_mnm="Es Jeruk";
harga=18000;
}
else if (kd_paket=='D' || kd_paket=='d')
{
nm_mkn="Nasi Campur";
nm_mnm="Es Teh Manis";
harga=20000;
}
else if (kd_paket=='E' || kd_paket=='e')
{
nm_mkn="Sat ayam";
nm_mnm="Es Panas";
harga=30000;
}
else if (kd_paket=='F' || kd_paket=='f')
{
nm_mkn="Nasi telor";
nm_mnm="Es fanta";
harga=28000;
}
else if (kd_paket=='G' || kd_paket=='g')
{
nm_mkn="Nasi lele";
nm_mnm="Teh anget";
harga=15000;
}
else if (kd_paket=='H' || kd_paket=='h')
{
nm_mkn="Lontong tahu";
nm_mnm="Es teh";
harga=18000;
}
else if (kd_paket=='I' || kd_paket=='i')
{
nm_mkn="Garang asem";
nm_mnm="es kopi";
harga=25000;
}
else if (kd_paket=='J' || kd_paket=='j')
{
nm_mkn="Sate kambing";
nm_mnm="Es sirup";
harga=30000;
 
}
else
{
cout << "\t| Masukkan Paket Sesuai Pilihan di atas !! |"<<endl;
cout << "\t--------------------------------------------\n";
getche ();
goto paket;
}
 
clrscr();
 
cout << "\t=======================================\n";
cout << "\t| ==SMAKZIE RESTO== |\n";
cout << "\t| Jl.SILIWANGI |\n";
cout << "\t=======================================\n\n\n";
 
cout << "Nama Makanan : "<<nm_mkn<<"\n";
cout << "Nama Minuman : "<<nm_mnm<<"\n";
cout << "Harga : Rp "<<harga<<"\n";
cout << "_________________________________________\n";
 
total=jum_bel*harga;
ppn=0.10*total;
tobar=(total+ppn)-diskon;
if (jum_bel >= 5)
diskon=0.02*harga*jum_bel;
else if (jum_bel < 5)
diskon=0;
 
cout << "Total Harga : Rp "<<total<<"\n";
cout << "PPN : Rp "<<ppn<<"\n";
cout << "Diskon : Rp "<<diskon<<"\n";
cout << "_________________________________________\n";
bayar:
cout << "Total Bayar : Rp "<<tobar<<"\n";
cout << "Bayar : Rp ";
cin >> bayar;"\n";
if (bayar < tobar)
{
cout << "_________________________________________\n";
cout << "\tMaaf, Uang Anda Kurang !!!"<<endl;
cout << "_________________________________________\n";
getche();
goto bayar;
}
cout << "_________________________________________\n";
kembalian=bayar-tobar;
cout << "Kembalian : Rp "<<kembalian<<"\n";
cout << endl;
cout << "=========================================\n";
cout << endl;
cout << "TERIMA KASIH ATAS KUNJUNGANNYA SAUDARA "<< nampel<<"\n";
cout << endl;
 
{
cout << "=========================================\n";
cout << "\nApakah ingin menghitung ulang ? [Y/N] : ";
cin >> pilihan2;
 
switch(pilihan2)
{
case 'Y':
case 'y' :
goto awal;
break;
 
case'N':
case 'n' :
clrscr();
 
cout << endl << endl;
cout << "\t\t -=HATUR NUHUN=-";
getche();
break;
 
default:
cout << "Inputkan Pilihan dengan Benar !!!";
getche();
}
return 0;
}
 
getch();
}
