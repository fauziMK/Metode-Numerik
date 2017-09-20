	#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (){
	
	int a,b,i;
	int bila,bilb;
	int total;
	int tambah,kurang,kali,bagi;
	int menu;
	int back;
	int hasil;
	
	//printf("==== TUGAS METODE NUMERIK 1 ====\n");
	//printf("Nama	: Fauzi Maulana Kusuma\n");
	//printf("NIM		: 3411151098\n");
	//printf("Kelas	: SIE-B\n");
	//printf("====================================\n\n");
	menu:
	printf("=== MENU ===\n\n");
	printf("1. Penjumlahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Perpangkatan\n");
	printf("5. Fungsi\n");
	printf("6. Keluar\n\n");
	
	printf("== Masukan Pilihan Anda: ");
	scanf("%d", &menu);
	
	
	
	switch(menu){
		
		case 1 : 
				system("cls");
				printf("=== PENJUMLAHAN ===\n"); 
				printf("Masukan Bilangan A: ");
				scanf("%d", &bila);
	
				printf("Masukan Bilangan B: ");
				scanf("%d", &bilb);
				
				tambah = bila+bilb;
				
				printf("Hasil %d+%d= %d \n\n\n", bila,bilb,tambah);
				
				printf("Tekan Enter Untuk Kembali Ke Menu Utama");
				getch();
				system("cls");
				goto menu;
				break;	
			
				
				
		case 2 :system("cls"); 
				printf("=== PENGURANGAN ===\n"); 
				printf("Masukan Bilangan A: ");
				scanf("%d", &bila);
	
				printf("Masukan Bilangan B: ");
				scanf("%d", &bilb);
				
				kurang = bila-bilb;
				
				printf("Hasil %d-%d= %d\n\n\n", bila,bilb,kurang);
				printf("Tekan Enter Untuk Kembali Ke Menu Utama");
				getch();
				system("cls");
				goto menu;
				break;
				
				
		case 3 :system("cls");
				printf("=== PERKALIAN ===\n"); 
				printf("Masukan Bilangan A: ");
				scanf("%d", &bila);
	
				printf("Masukan Bilangan B: ");
				scanf("%d", &bilb);
				
				kali = bila*bilb;
				
				printf("Hasil %dx%d= %d\n\n\n", bila,bilb,kali);
					printf("Tekan Enter Untuk Kembali Ke Menu Utama");
				getch();
				system("cls");
				goto menu;
				break;
				
		case 4 : system("cls");
				printf("=== PERPANGKATAN ===\n");
				printf("Masukan Nilai Yang Akan Dihitung: ");scanf("%d", &bila);
				printf("Masukan Nilai Yang Akan Dipangkatkan: ");scanf("%d", &bilb);
				
				total=1;
				for(i=1;i<=bilb;i++){
					total = total*bila;
				}
				
				printf("Hasil %d^%d=%d\n\n\n",bila,bilb,total);
					printf("Tekan Enter Untuk Kembali Ke Menu Utama");
				getch();
				system("cls");
				goto menu;
				break;
			
				
		case 5 : system ("cls"); 	
				printf("\n========== Menghitung f(x)=3x^2+x-1 ==========\n");
      			printf("Masukan nilai A : ");scanf("%d", &a);
      			printf("Masukan nilai B : ");scanf("%d", &b);
      			
      			printf("=== Hasil Perhitungan ===\n");
      			
      			for (a=a;a<=b;a++){
      				printf("Jika X= %d\n",a);
      				
      				hasil=(3*(a*a))+a-1;
      				printf("Hasil= %d\n", hasil);
      				
      				printf("=========================\n\n");
					
				
				}
					printf("Tekan Enter Untuk Kembali Ke Menu Utama");
				getch();
				system("cls");
				goto menu;
				break;
				
				
		case 6 : 	printf("Bye...");
					exit;
					break;
		default:
			printf("Maaf..Angka Yang Anda Masukan Salah");
			getch();
			system("cls");
			goto menu;
			
	}
}
