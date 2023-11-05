#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define phi 3.1422

//Prosedur Header
void header(){ 

	printf("====================================================================\n");
	printf("=               PRAKTIKUM ALGORITMA DAN PEMROGRAMAN                =\n");
	printf("====================================================================\n");
	printf("=                           KELOMPOK 04                            =\n");
	printf("=               1. Dicky Fernando Perangin-angin                   =\n");
	printf("=                  2305551024                                      =\n");
	printf("=               2. Gede P. Ryan Widia Putra                   	   =\n");
	printf("=                  2305551046                                      =\n");
	printf("=               3. Yohani Yuviena Sianipar                         =\n");
	printf("=                  2305551064                                      =\n");
	printf("=               4. Jeremy Marco Tamelan                            =\n");
	printf("=                  2305551077                                      =\n");
	printf("=               5. Gede Richardo Bagus Dharmawan                   =\n");
	printf("=                  2305551091                                      =\n");
	printf("=               6. Komang Dwi Putri Sunartiasih                    =\n");
	printf("=                  2305551126	                                   =\n");
	printf("=               7. Rauf Zulkarnain                                 =\n");
	printf("=                  2305551174                                      =\n");
	printf("====================================================================\n");
}

void header1(){
	printf("====================================================================\n");
	printf("=         Program Penghitung Keliling dan Luas Bangun Datar        =\n");
	printf("====================================================================\n");
	
}

//Prosedur Validasi Input
float validasi_Input(){
    char cek; 
    float pilih;

    if(cek=scanf("%f%c", &pilih, &cek) !=2){
        
        fflush(stdin);
        printf("Input Angka! : ");
        return validasi_Input();
        
    }
    else{
        if(pilih >=0 ){
            return pilih;
        }
        else{
        	
            fflush(stdin);
            printf("Masukkan Bilangan Positif! : ");
            return validasi_Input();
            
        }
    }
    return pilih;
}

int validInt(int *var)
{
    char buff[1020];
    char cek;
    fflush(stdin);
    if (fgets(buff, sizeof(buff), stdin) != NULL)
    {
        if (sscanf(buff, "%d %c", var, &cek) == 1)
        {
            return 1;
        }
    }
    return 0;
}

void ReValidInt(int *var, char *prompt)
{
    while (1)
    {
        printf(prompt);
        if (validInt(var))
            break;
        printf("Input hanya  boleh berupa angka!! \n");
        printf("\n");
    }
}

void LSegitiga_Sembarang(){
    float alas, tinggi;
    float luas;
    printf("Menghitung luas Segitiga Sembarang\n");
    printf("Inputkan alas: "); alas= validasi_Input(); //scanf("%d", &alas);
    printf("Inputkan tinggi: "); tinggi= validasi_Input(); //scanf("%d", &tinggi);

    luas=0.5*alas*tinggi;
    printf("Jadi luas Segitiga Sembarang adalah: %.2fcm^2\n\n", luas); fflush(stdin);
}
void LBelah_Ketupat(){
    float d1, d2;
    float luas;
    printf("Menghitung luas Belah Ketupat\n");
    printf("Inputkan diagonal 1: "); d1= validasi_Input();//scanf("%d", &d1);
    printf("Inputkan diagonal 2: "); d2= validasi_Input();//scanf("%d", &d2);

    luas=0.5*d1*d2;
    printf("Jadi luas Belah Ketupat adalah: %.2fcm^2\n\n", luas); fflush(stdin);
}
void LJajar_Genjang(){
    float alas, tinggi;
    float luas;
    printf("Menghitung luas Jajar Genjang\n");
    printf("Inputkan alas: "); alas= validasi_Input();//scanf("%d", &alas);
    printf("Inputkan tinggi: "); tinggi= validasi_Input();//scanf("%d", &tinggi);

    luas=alas*tinggi;
    printf("Jadi luas jajar genjang adalah: %.2fcm^2\n\n", luas); fflush(stdin);
}
void LTrapesium(){
    float a, b, t;
    float luas;
    printf("Menghitung luas Trapesium\n");
    printf("Inputkan sisi 1: "); a= validasi_Input();//scanf("%d", &a);
    printf("Inputkan sisi 2: "); b= validasi_Input();//scanf("%d", &b);
    printf("Inputkan tinggi: "); t= validasi_Input();//scanf("%d", &t);

    luas=0.5*(a+b)*t;
    printf("Jadi luas Trapesium adalah: %.2fcm^2\n\n", luas);
}
void LLingkaran(){
    float r;
    float luas;
    printf("Menghitung luas lingkaran\n");
    printf("Inputkan jari-jari: "); r= validasi_Input();//scanf("%d", &r);

    luas=phi*r*r;
    printf("Jadi luas Lingkaran adalah: %.2fcm^2\n\n", luas);
}
void KSegitiga_Sembarang(){
    float a, b, c;
    float keliling;
    printf("Menghitung keliling Segitiga Sembarang\n");
    printf("Inputkan sisi a: "); a= validasi_Input();//scanf("%d", &a);
    printf("Inputkankan sisi b: "); b= validasi_Input();//scanf("%d", &b);
    printf("Inputkan sisi c: "); c= validasi_Input();//scanf("%d", &c);

    keliling=a+b+c;
    printf("Jadi keliling Segitiga Sembarang adalah: %.2f cm\n\n", keliling);
}
void KBelah_Ketupat(){
    float sisi;
    float keliling;
    printf("Menghitung keliling Belah Ketupat\n");
    printf("Inputkan sisi: "); sisi= validasi_Input();//scanf("%d", &sisi);

    keliling=4*sisi;
    printf("Jadi keliling Belah Ketupat adalah: %.2f cm\n\n", keliling);
}
void KJajar_Genjang(){
    float a, b;
    float keliling;
    printf("Menghitung keliling Jajar Genjang\n");
    printf("Inputkan sisi miring: "); 	a= validasi_Input();//scanf("%d", &a);
    printf("Inputkan alas: "); 			b= validasi_Input();//scanf("%d", &b);

    keliling=2*(a+b);
    printf("Jadi keliling Jajar Genjang adalah: %.2f cm\n\n", keliling);
}
void KTrapesium(){
    float a, b, c, d;
    float keliling;
    printf("Menghitung keliling Trapesium\n");
    printf("Inputkan sisi 1: "); a= validasi_Input();//scanf("%d", &a);
    printf("Inputkan sisi 2: "); b= validasi_Input();//scanf("%d", &b);
    printf("Inputkan sisi 3: "); c= validasi_Input();//scanf("%d", &c);
    printf("Masukkan sisi 4: "); d= validasi_Input();//scanf("%d", &d);

    keliling=a+b+c+d;
    printf("Jadi keliling Trapesium adalah: %.2f cm\n\n", keliling);
    }
void KLingkaran (){
	float r;
	float keliling;
	printf("Menghitung keliling Lingkaran\n");
	printf("Inputkan jari-jari: ") ; r= validasi_Input();//scanf("%d", &r);

	keliling=2*phi*r;
	printf("Jadi Keliling lingkaran adalah: %.2f cm\n\n", keliling);
}

int main(){
	header();
	system("pause");
	system("cls");
    char input;
    int pilih, pilih1;
	

	do {
    	printf("Program Menghitung Luas dan Keliling Bangun Datar\n\n");
    	printf("Hallo selamat datang di program hitung menghitung, mau menghitung bangun datar apa?\n");
    	printf("1. Segitiga Sembarang\n");
    	printf("2. Belah Ketupat\n");
    	printf("3. Jajar Genjang\n");
    	printf("4. Trapesium\n");
    	printf("5. Lingkaran\n");
		printf("6. Kembali\n");
		printf("0. Keluar\n");
    	printf("Pilih: "); pilih= validasi_Input();//scanf("%d", &pilih2);
    	
		
		system("cls");
    	switch(pilih){
	
		case 0 :
				system("cls");
				printf("Terimakasih...");
				system("exit");
				exit(0);
			

    	case 1:
				printf("Tapi mau ngehitung segitiga sembarang yang apa?\n\n");
				printf("\n1. Keliling\n");
            	printf("2. Luas\n\n");
            	printf("Pilih: "); scanf("%d", &pilih1);
            	system("cls");
            	switch(pilih1){
                	case 1:
                    	KSegitiga_Sembarang();
                    	break;
                	case 2:
                    	LSegitiga_Sembarang();
                    	break;
                    
                	default:
                    printf("Pilihan tidak ada, Silahkan Inputkan Ulang!\n\n");fflush(stdin);
            	}
            	break;
        
    	case 2:
				printf("Mau menghitung apa?\n\n");
				printf("\n1. Keliling\n");
            	printf("2. Luas\n\n");
            	printf("Pilih: "); scanf("%d", &pilih1);
            	system("cls");
            	switch(pilih1){
                	case 1:
                    	KBelah_Ketupat();
                    	break;
                	case 2:
                    	LBelah_Ketupat();
                    	break;
                	default:
                    printf("Pilihan tidak ada, Silahkan Inputkan Ulang!\n\n");fflush(stdin);
            	}
            	break;
    	case 3:
				printf("Mau menghitunng apa?\n\n");
				printf("\n1. Keliling\n");
            	printf("2. Luas\n\n");
            	printf("Pilih: "); scanf("%d", &pilih1);
            	system("cls");
            	switch(pilih1){
            	    case 1:
            	        KJajar_Genjang();
            	        break;
            	    case 2:
            	        LJajar_Genjang();
            	        break;
            	    default:
            	      printf("Pilihan tidak ada, Silahkan Inputkan Ulang!\n\n");fflush(stdin);
            	}
            	break;
        
    	case 4:
				printf("mau menghitung apa?\n\n");
				printf("\n1. Keliling\n");
            	printf("2. Luas\n\n");
            	printf("Pilih: "); scanf("%d", &pilih1);
            	system("cls");
            	switch(pilih1){
                	case 1:
                    	KTrapesium();
                    	break;
                	case 2:
                    	LTrapesium();
                    	break;
					default:
                    printf("terimakasihhhhhh!\n\n");fflush(stdin);
            	}
            	break;
    	case 5:
				printf("Tapi mau nghitung lingkaran yang apa tuh?\n\n");
				printf("\n1. Keliling\n");
            	printf("2. Luas\n\n");
            	printf("Pilih: "); scanf("%d", &pilih1);
            	system("cls");
            	switch(pilih1){
                	case 1:
                    	KLingkaran();
                    	break;
                	case 2:
                    	LLingkaran();
                    	break;
                	default:
                    	printf("Pilihan tidak ada, Silahkan Inputkan Ulang!\n\n");fflush(stdin);
            	}
            	break;

        	default:
            	printf("Pilihan tidak ada, Silahkan Inputkan Ulang!\n\n");fflush(stdin);
	
		
    
    	}
		printf("Mau ngitung lagi?(y/n): ");fflush(stdin);
        scanf("%c", &input);
        system("cls");
	
	}


	while(input!='n');
        printf("terimakasihhhhhh.\n");
        return 0;

	

	
}

//ini adalah program sederhana