# include <stdio.h>
# include <conio.h>
# include <iomanip.h>
# include <iostream.h>
# include <string.h>

long tarif(int lama);
main()
{
struct
{
char nokend[5],nama[10];
int lama;
}mall[7];

int i,j,ukem,upem;
cout<< "==========SMAKZIE JL.SILIWANGI=========\n";
cout<<"===============STRUK PARKIR=============\n";
cout<<"Masukkan Jumlah Data Transaksi = ";cin>>j;
clrscr();
for(i=1;i<=j;i++)
{
cout<< "==========SMAKZIE JL.SILIWANGI=========\n";
cout<<"===============STRUK PARKIR=============\n";
cout<<endl<<" Data ke - "<<i<<endl<<endl;
cout<<" Masukkan Nomor Kendaraan : ";gets(mall[i].nokend);
cout<<" Masukkan Nama Pemilik : ";gets(mall[i].nama);
cout<<" Lama Parkir : ";cin>>mall[i].lama;
cout<<endl;
printf("-------------------------------------\n");
}

for(i=1;i<=j;i++)
{
clrscr();
cout<< "==========SMAKZIE JL.SILIWANGI=========\n";
cout<<"===============STRUK PARKIR=============\n";
cout<<" Nomor Kendaraan : "<<mall[i].nokend<<endl;
cout<<" Nama Pemilik : "<<mall[i].nama<<endl;
cout<<" Lama Parkir : "<<mall[i].lama<<endl;
cout<<" Total Bayar : "<<tarif(mall[i].lama)<<endl;
cout<<" Uang Pembayaran : ";cin>>upem;
ukem=upem-tarif(mall[i].lama);
cout<<" Uang Kembalian : "<<ukem<<endl;
getch();
}
getch();
}
long tarif(int lama)
{
if(lama>1)
{
return((lama-1)*500)+1000;
}
else
{
return 1000;

}}
