//Tanpa Nilai Kembalian
//#include <stdio.h>
//int main(void)
//{
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
	
//}

//Nilai Kemabalian
//#include <stdio.h>
//int main ()
//{
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
	
//	return 0;
//}

//Variabel
//#include <stdio.h>
//int main () {
//	int umur = 19;
//	printf ("ini umurku : %d \n", umur);
//	return 0;
//}

//Variabel
//#include <stdio.h>
//int main () {
//	int bebek = 10;
//	float luas = 2.5;
//	float keliling = 3.14;
//	printf("Jumlah Bebek Adalah : %d \n", bebek);
//	printf("Ini Jumlah Luasnya : %d \n", luas);
//	printf("Keliling Jari-Jari Adalah : %d", keliling);
//	return 0;
//}


//Variabel 
//#include<stdio.h>
//int main(){
//	int i;
//	i = 5;
//	printf("Ini adalah nilai : %d \n", i);
//	i = i+1;
//	printf("Ini Adalah Nilai : %d",  i);
//	return 0;
//}

//Variabel Float
//#include<stdio.h>
//int main(){
//	float f = 0.555;
//	float x = 1.5E3;
//	printf ("Ini nilai f : %f \n", f);
//	printf ("Ini nilai f : %5.2f \n", f);
//   	printf ("Ini nilai x : %10.2f \n", x);
//	return 0;
//}


//Variabel char
//#include<stdio.h>
//int main(){
//	char c = 65; 
//  	char c1;
//  	printf ("Karakter = %c\n", c);
//  	c1 = 'Z';
//	printf ("Karakter = %c\n", c1);
//	
//  	printf ("Karakter dalam kode ASCII = %d\n", c);
//  	printf ("Karakter sebagai huruf = %c\n", c);
//  	printf ("Karakter dalam kode ASCII = %d\n", c1);
//  	printf ("Karakter sebagai huruf = %c\n", c1);
// 
//  return 0;
//}

//Konstanta
//#include<stdio.h>
//#define FALSE 0
//#define NOL 0
//#define SATU 1
//#define pi 3.1415
//int main (){
//	const int maks=3;
//  	const float param =2.5;
//  	const char cc = 65 ;
//  	const char cA = 'A' ;
//  	
//  	printf ("PI  = %6.2f\n", pi);
//  	printf ("NOL  = %d\n", NOL);
//  	printf ("SATU  = %d\n", SATU);
//  	printf ("FALSE  = %d\n", FALSE);
//  	printf ("maks  = %d\n", maks);
//  	printf ("param  = %f\n", param);
//  	printf ("cc  = %c\n", cc);
//  	printf ("cA  = %c\n", cA);
//  	printf ("Ini Adalah 3\n"); 
//  	return 0;
//}

//#include<stdio.h>
//int main ()
//{
//  int a;
//  float x;
//
//  printf ("Contoh membaca dan menulis, ketik nilai integer: ");
//  scanf ("%d", &a); 
//  printf ("Nilai yang dibaca : %d \n", a);
// 
//  printf ("ketik nilai sebuah bilangan riil: ");
//  scanf ("%f", &x); 
//  printf ("Nilai yang dibaca : %f \n", x);
// 
// 
//  return 0;
//}

//#include<stdio.h>
//int main(){
//	char c;
//	char cc;
//	
//	printf("Helo\n");
//	printf("Baca Satu Karakter saja : ");
//	scanf ("%c ", &cc);
//	printf ("%c\n" , cc);
//	printf("baca 1 karakter saja : ");
//	scanf ("%d ", &c); 
//	printf ("%d\n", c);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int x = 5;
//	int y = 8;
//	printf("ini nilai x + y : %d \n", x+y);
//	printf("ini nilai x - y : %d \n", x-y);
//	printf("ini nilai x * y : %d \n", x*y);
//	printf("ini nilai x / y ; %d \n", x/y);
//	printf("ini nilai y / x : %d \n", y/x);\
//	printf ("Ini nilai x mod  y  : %d \n", x%y );
//	
//	float a=5, b=8;
//	printf("ini adalah nilai a/b : %5.2f \n", a/b);
//	printf ("Ini nilai b / a  : %5.2f \n", b/a );
//	
//	return 0;
//}

//#include<stdio.h>
//int main ()
//{
//  int TRUE=1;
//  int FALSE=0;
//
//   printf ("Ini nilai TRUE AND TRUE  : %d \n",  TRUE && TRUE );
//   printf ("Ini nilai TRUE OR FALSE  : %d \n",  TRUE || FALSE);
//   printf ("Ini nilai FALSE AND TRUE  : %d \n",  FALSE && TRUE );
//   printf ("Ini nilai FALSE OR FALSE  : %d \n",  FALSE || FALSE );
//   printf ("Ini nilai NOT TRUE  : %d \n", !TRUE);
//   printf ("Ini nilai NOT FALSE  : %d \n", !FALSE );
//  return 0;
//}

//#include<stdio.h>
//int main (){
//  int X=5;
//  int Y=8;
//  
//   printf ("Hasil X < Y  : %d \n",  X < Y);
//   printf ("Hasil X > Y  : %d \n",  X > Y);
//   printf ("Hasil X <= Y : %d \n",  X <= Y );
//   printf ("Hasil X >= Y : %d \n",  X >= Y );
//   printf ("Hasil X == Y : %d \n", X == Y ); 
//   printf ("Hasil X != Y : %d \n", X != Y); 
// 
//   printf ("Hasil X == X : %d \n", X == X ); 
//   printf ("Hasil X != X : %d \n",X != X); 
// 
//  return 0;
//}

//#include<stdio.h>
//int main ()
//{
//  int uang= 6000;
//  int hujan=0;
//  
//   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
// 
//   uang= 6000;
//   hujan=1;
//   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
// 
//  return 0;
//}

//increment dan decrement
//#include<stdio.h>
//int main ()
//{
//
//  int i;
//  
//  i = 3;
//  printf ("Nilai i :%d\n", i++);
//  i = 3;
//  printf ("Nilai i :%d\n", ++i); 
//  i = 3;
//  printf ("nilai i :%d\n", i--);
//  i= 3;
//  return 0;
//}

//conditional
//#include<stdio.h>
//int main(){
//	int a;
//	printf("Contoh If Satu Kasus\n");
//	printf("Ketikan satu nilai integer : ");
//	scanf("%d", &a);
//	if( a > 10){
//		printf("Nilai Benar %d\n", a);
//	}else if( a == 10){
//		printf("Nilai nya Benar Sepuluh %d\n", a);
//	}else {
//		printf("Nilai Salah %d\n", a);
//	}
//	
//	return 0;
//}

//loop 
//#include<stdio.h>
//int main(){
//	int i;
//	for (i=0; i<3; i++) {
//		printf("%d\n", i);
//	}
	
//	int x;
//	for(x=0; x<1000; x++) {
//		printf("Saya Senang belajar Bahasa c\n");
//	} 
//	return 0;
//}

//#include<stdio.h>
//int main(){
//	int x;
//	while(x<5){
//		printf("Saya Senang Belajar Bahasa c\n");
//		x++;
//	}
//	return 0;
//}

#include<stdio.h>
int main(){
	int i;
	do{
		printf("Saya Senang Belajar Bahasa C\n");
		i++;
	}while(i<5);
	return 0;
}







