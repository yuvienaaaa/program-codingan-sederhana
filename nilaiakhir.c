#include <stdio.h>
#include <string.h>

int input_number_in_range(int min, int max, const char* description, const char* exception) {
    int local_integer, HRESULT;

    do {
        printf("%s", description);
        HRESULT = scanf("%d", &local_integer);

        if (HRESULT == 0) {
            printf("Input harus dalam angka !!!!!!\n");
            while (getchar() != '\n');  // Membersihkan input buffer
            continue;
        }

        if (local_integer < min || local_integer > max) {
            printf("%s", exception);
        }
    } while (local_integer < min || local_integer > max || HRESULT == 0);

    return local_integer; 
}

int main() {
    int absensi, tugas1, tugas2, tugas3, quiz, uts, uas, angka;
    char huruf[5], confirm;
    huruf[0] = '\0';
	

    do {
        printf("===============================================\n");
        printf("            PENILAIAN NILAI AKHIR              \n");
        printf("                BY KELOMPOK 4                  \n");
        printf("===============================================\n");
    
do{
        absensi = input_number_in_range(1,15,"Input absensi : ","Masukkan salah! Masukkan angka yang benar    :");
    }while (absensi > 15);

        tugas1 = input_number_in_range(1, 100, "Input Tugas 1: ", "Masukkan salah! Masukkan angka yang benar: ");
        tugas2 = input_number_in_range(1, 100, "Input Tugas 2: ", "Masukkan salah! Masukkan angka yang benar: ");
        tugas3 = input_number_in_range(1, 100, "Input Tugas 3: ", "Masukkan salah! Masukkan angka yang benar: ");
        quiz = input_number_in_range(1, 100, "Input Quiz: ", "Masukkan salah! Masukkan angka yang benar: ");
        uts = input_number_in_range(1, 100, "Input UTS: ", "Masukkan salah! Masukkan angka yang benar: ");
        uas = input_number_in_range(1, 100, "Input UAS: ", "Masukkan salah! Masukkan angka yang benar: ");

        angka = (absensi * 5 / 100) + (((tugas1 + tugas2 + tugas3)/3) * 20 / 100) + (quiz * 15 / 100) + (uts * 30 / 100) + (uas * 30 / 100);

     if((angka>=0) && (angka<45)){
        strcpy( huruf, "E" );
    }else if((angka>=45) && (angka<50)){
        strcpy( huruf, "D" );
    }else if((angka>=50) && (angka<55)){
        strcpy( huruf, "D+" );
    }else if((angka>=55) && (angka<60)){
        strcpy( huruf, "C" );
    }else if((angka>=60) && (angka<65)){
        strcpy( huruf, "C+" );
    }else if((angka>=65) && (angka<75)){
        strcpy( huruf, "B" );
    }else if((angka>=75) && (angka<80)){
        strcpy( huruf, "B+" );
    }else if((angka>=80) && (angka<=100)){
        strcpy( huruf, "A" );
    }



        printf("===============================================\n");
        printf("           NILAI ANGKA & NILAI HURUF\n");
        printf("===============================================\n");
        printf("Nilai angka            : %i\n", angka);
        printf("Nilai huruf            : %s\n", huruf);
        printf("===============================================\n");
        printf("Apakah anda mau mengulang ? Y/N ");
        getchar(); // Membaca karakter '\n' setelah angka sebelumnya
        scanf("%c", &confirm);
    } while (confirm == 'Y' || confirm == 'y');
    return 0;
    
}


