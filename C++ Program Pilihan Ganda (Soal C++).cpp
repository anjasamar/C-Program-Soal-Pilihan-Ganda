//Bagian Perpustakaan
#include <string>
#include <iostream>

using namespace std;

//Bagian Awal Program
int main()
{

//Bagian Data Store
char a,b,c,d;
int b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,total,tbenar,tsalah,tb;
int ben1,ben2,ben3,ben4,ben5,ben6,ben7,ben8,ben9,ben10;
string nama;
string kelas;
string nim;
string keterangan;

//Bagian Input Data Diri
    cout<<"Masukan Data Berikut Untuk Masuk Ke Bagian Soal... "<<endl<<endl;
	cout<<"Nama     : ";
	getline (cin, nama); 
	cout<<"Kelas    : ";
	getline (cin, kelas); 
	cout<<"NIM      : ";
	getline (cin, nim); 

//Bagian Soal
   cout<<"\t===============================================\n";
   cout<<"\tSOAL PILIHAN GANDA MATA KULIAH PEMPROGRAMAN c++\n";
   cout<<"\t===============================================\n";

//Bagian Soal No 1
   cout<<"(1) Berikut Sintak yang benar untuk menghasilkan output Hello World di C++ ?\n\n";

   cout<<"A. cout<<``Hello World``;\n";
   cout<<"B. print<<``Hello World``;\n";
   cout<<"C. echo ``Hello World``;\n";
   cout<<"D. System.out.print(``Hello World``);\n";
   cout<<"Jawaban : ";

//Bagian Input Jawaban
   cin>>a;

//Bagian Seleksi Nilai Jawaban Soal
//Bagian Jawaban Benar
      if(a=='a')
      {
      ben1=+1;
      b1=10;
      cout<<"Jawaban Benar\nNilai = "<<b1<<"\n\n\n";
      }
//Bagian Jawaban Salah
      else
      {
      ben1=-1;
      b1=-5;
//Bagian Output Hasil Jawaban Soal
      cout<<"Jawaban Salah\nNilai = "<<b1<<"\n\n\n";
      }

//Bagian Soal No 2
   cout<<"(2) Bagaimana cara membuat komentar di C++ ?\n\n";

   cout<<"A.  /* Ini komentar\n";
   cout<<"B. # Ini komentar\n";
   cout<<"C. // Ini komentar\n";
   cout<<"D. < Ini komentar >\n";
   cout<<"Jawaban : ";

   cin>>c;

      if(c=='c')
      {
      ben2=+1;
      b2=10;
      cout<<"Jawaban Benar\nNilai = "<<b2<<"\n\n\n";
      }
      else
      {
      ben2=-1;
      b2=-5;
      cout<<"Jawaban Salah\nNilai = "<<b2<<"\n\n";
      }

//Bagian Soal No 3
   cout<<"(3) Setiap perintah di dalam C++ selalu diakhiri dengan tanda?\n\n";

   cout<<"A. ;\n";
   cout<<"B. :\n";
   cout<<"C. ]\n";
   cout<<"D. }\n";

   cout<<"Jawaban anda : ";

   cin>>a;

      if (a == 'a')
      {
      ben3=+1;
      b3=10;
      cout<<"Jawaban Benar\nNilai = "<<b3<<"\n\n\n";
      }
      else
      {
      ben3=-1;
      b3=-5;
      cout<<"Jawaban Salah\nNilai = "<<b3<<"\n\n\n";
      }

//Bagian Soal No 4
   cout<<"(4) Perintah untuk menginput suatu nilai dari keyboard untuk di proses di dalam program adalah?\n\n";

   cout<<"A. cout\n";
   cout<<"B. cin\n";
   cout<<"C. getch\n";
   cout<<"D. input\n";
   cout<<"Jawaban : ";

   cin>>b;

      if(b=='b')
      {
      ben4=+1;
      b4=10;
      cout<<"Jawaban Benar\nNilai = "<<b4<<"\n\n\n";
      }
      else
      {
      ben4=-1;
      b4=-5;
      cout<<"Jawaban Salah\nNilai = "<<b4<<"\n\n\n\n";
      }

//Bagian Soal No 5  
   cout<<"(5)  Suatu tempat yang berfungsi untuk menampung data atau nilai yang dapat berubah-ubah selama program berjalan disebut?\n\n";

   cout<<"A. konstanta\n";
   cout<<"B. variabel\n";
   cout<<"C. define\n";
   cout<<"D. function\n";
   cout<<"Jawaban : ";

   cin>>b;

      if(b=='b')
      {
      ben5=+1;
      b5=10;
      cout<<"Jawaban Benar\nNilai = "<<b5<<"\n\n\n";
      }
      else
      {
      ben5=-1;
      b5=-5;
      cout<<"Jawaban Salah\nNilai = "<<b5<<"\n\n\n\n";
      }

//Bagian Soal No 6  
   cout<<"(6) Tipe data yang digunakan untuk bilangan pecahan adalah ?\n\n";

   cout<<"A. char\n";
   cout<<"B. string\n";
   cout<<"C. integer\n";
   cout<<"D. doubel\n";
   cout<<"Jawaban : ";

   cin>>d;

      if(d=='d')
      {
      ben6=+1;
      b6=10;
      cout<<"Jawaban Benar\nNilai = "<<b6<<"\n\n\n";
      }
      else
      {
      ben6=-1;
      b6=-5;
      cout<<"Jawaban Salah\nNilai = "<<b6<<"\n\n\n\n";
      }

//Bagian Soal No 7  
   cout<<"(7) Tipe data yang digunakan untuk bilangan bulat adalah ?\n\n";

   cout<<"A. string\n";
   cout<<"B. char\n";
   cout<<"C. integer\n";
   cout<<"D. doubel\n";
   cout<<"Jawaban : ";

   cin>>c;

      if(c=='c')
      {
      ben7=+1;
      b7=10;
      cout<<"Jawaban Benar\nNilai = "<<b7<<"\n\n\n";
      }
      else
      {
      ben7=-1;
      b7=-5;
      cout<<"Jawaban Salah\nNilai = "<<b7<<"\n\n\n\n";
      }

//Bagian Soal No 8   
   cout<<"(8) Di bawah ini merupakan tipe data numerik, kecuali\n\n";

   cout<<"A. integer\n";
   cout<<"B. float\n";
   cout<<"C. doubel\n";
   cout<<"D. char\n";
   cout<<"Jawaban : ";

   cin>>d;

      if(d=='d')
      {
      ben8=+1;
      b8=10;
      cout<<"Jawaban Benar\nNilai = "<<b8<<"\n\n\n";
      }
      else
      {
      ben8=-1;
      b8=-5;
      cout<<"Jawaban Salah\nNilai = "<<b8<<"\n\n\n\n";
      }

//Bagian Soal No 9   
   cout<<"(9) Operator pembanding digunakan untuk melakukan?\n\n";

   cout<<"A. Penjumlahan antara dua nilai\n";
   cout<<"B. Kombinasi antara dua nilai\n";
   cout<<"C. Hubungan antara dua nilai\n";
   cout<<"D. Perbandingan antara dua nilai\n";
   cout<<"Jawaban : ";

   cin>>b;

      if(b=='b')
      {
      ben9=+1;
      b9=10;
      cout<<"Jawaban Benar\nNilai = "<<b9<<"\n\n\n";
      }
      else
      {
      ben9=-1;
      b9=-5;
      cout<<"Jawaban Salah\nNilai = "<<b9<<"\n\n\n\n";
      }

//Bagian Soal No 10   
   cout<<"(10)  Berikut ini jenis perulangan di C++, Kecuali\n\n";

   cout<<"A. for\n";
   cout<<"B. while\n";
   cout<<"C. do while\n";
   cout<<"D. switch\n";
   cout<<"Jawaban : ";

   cin>>d;

      if(d=='d')
      {
      ben10=+1;
      b10=10;
      cout<<"Jawaban Benar\nNilai = "<<b10<<"\n\n\n";
      }
      else
      {
      ben10=-1;
      b10=-5;
      cout<<"Jawaban Salah\nNilai = "<<b10<<"\n\n\n\n";
      }
      
   

//Bagian Penjumlahan Nilai Dan Hasil Seluruh Jawaban Soal
   total = b1+b2+b3+b4+b5+b6+b7+b8+b9+b10;
   tbenar = ben1+ben2+ben3+ben4+ben5+ben6+ben7+ben8+ben9+ben10;
   tb = tbenar;

//Bagian Keterangan Nilai Akhir
   if(total > 60){keterangan = "Cukup (C)";}
   if(total > 75){keterangan = "Baik (B)";}
   if(total > 85){keterangan = "Baik Sekali (A)";}   
   if(total < 60){keterangan = "Kurang (D)";}

//Bagian Output Informasi Keseluruhan
    cout<<endl;
    cout<<"------------------------------"<<endl;
	cout<<"DATA HASIL UJIAN MAHASISWA"<<endl; 
	cout<<"------------------------------"<<endl;
	cout<<"Nama     : "<<nama<<endl;
	cout<<"Kelas    : "<<kelas<<endl;
	cout<<"NIM      : "<<nim<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"KETERANGAN HASIL AKHIR UJIAN"<<endl;
	cout<<"------------------------------"<<endl;
    cout<<"Keterangan Hasil Nilai 	= "<<keterangan<<endl;
    cout<<"Total Nilai 			= "<<total<<endl;
    cout<<"Jawaban Benar 			= "<<tb<<" Dari 10 Soal"<<endl;
	cout<<"------------------------------"<<endl;
return 0;
}
