#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double tambah(double num1, double num2);
double kurang(double num1, double num2);
double kali(double num1, double num2);
double bagi(double num1, double num2);
double modulo(double num1, double num2);
int validasiPilihan(char pilihan);
double validasiAngka();
char pilihanOperasi();
char pilihanRestart();
void header();
void header1();

int main()
{
    char pilihan;
    int keluar = 0;

    while (!keluar)
    {

        header();
        system("pause");
        system("cls");

        header1();
        printf("|               1. Penambahan                                      |\n");
        printf("|               2. Pengurangan                                     |\n");
        printf("|               3. Perkalian                                	   |\n");
        printf("|               4. Pembagian                                       |\n");
        printf("|               5. Modulus                                         |\n");
        printf("|               0. Keluar                                          |\n");
        printf("====================================================================\n");

        pilihan = pilihanOperasi();

        if (pilihan == '0')
        {
            printf("Kalkulator sedang keluar.\n");
            keluar = 1;
            continue;
        }

        system("cls");

        double angka1, angka2, hasil;
        angka1 = validasiAngka();
        angka2 = validasiAngka();

        switch (pilihan)
        {
        case '1':
            hasil = tambah(angka1, angka2);
            printf("Hasil penambahan: %lf\n", hasil);
            break;
        case '2':
            hasil = kurang(angka1, angka2);
            printf("Hasil pengurangan: %lf\n", hasil);
            break;
        case '3':
            hasil = kali(angka1, angka2);
            printf("Hasil perkalian: %lf\n", hasil);
            break;
        case '4':
            if (angka2 != 0)
            {
                hasil = bagi(angka1, angka2);
                printf("Hasil pembagian: %lf\n", hasil);
            }
            else
            {
                printf("Error: Pembagian dengan nol tidak diizinkan.\n");
            }
            break;
        case '5':
            if (angka2 != 0)
            {
                hasil = modulo(angka1, angka2);
                printf("Hasil modulo: %lf\n", hasil);
            }
            else
            {
                printf("Error: Modulo dengan nol tidak diizinkan.\n");
            }
            break;
        }

        system("pause");
        system("cls");

        char pilihanLanjut = pilihanRestart();
        if (pilihanLanjut != 'y' && pilihanLanjut != 'Y')
        {
            keluar = 1;
        }
    }

    system("cls");
    printf("Terima kasih telah menggunakan kalkulator!\n");

    return 0;
}

double tambah(double num1, double num2)
{
    return num1 + num2;
}

double kurang(double num1, double num2)
{
    return num1 - num2;
}

double kali(double num1, double num2)
{
    return num1 * num2;
}

double bagi(double num1, double num2)
{
    return num1 / num2;
}

double modulo(double num1, double num2)
{
    return fmod(num1, num2);
}

int validasiPilihan(char pilihan)
{
    if ((pilihan >= '0' && pilihan <= '5'))
    {
        return 1;
    }
    return 0;
}

double validasiAngka()
{
    double angka;
    while (1)
    {
        printf("Masukkan angka: ");
        if (scanf("%lf", &angka) == 1)
        {
            break;
        }
        printf("Input tidak valid. Mohon masukkan angka yang benar.\n");
        while (getchar() != '\n')
            ;
    }
    return angka;
}

char pilihanOperasi()
{
    char pilihan;
    while (1)
    {
        printf("Pilih operasi: ");
        scanf(" %c", &pilihan);
        if (validasiPilihan(pilihan))
        {
            break;
        }
        printf("Pilihan tidak valid. Silakan pilih opsi yang benar.\n");
    }
    return pilihan;
}

char pilihanRestart()
{
    char pilihan;
    while (1)
    {
        printf("Apakah Anda ingin melanjutkan (y/n)? ");
        scanf(" %c", &pilihan);
        if (pilihan == 'y' || pilihan == 'Y' || pilihan == 'n' || pilihan == 'N')
        {
            break;
        }
        printf("Pilihan tidak valid. Mohon masukkan 'y' atau 'n'.\n");
    }
    return pilihan;
}

void header()
{
    printf("====================================================================\n");
    printf("|               PRAKTIKUM ALGORITMA DAN PEMROGRAMAN                |\n");
    printf("====================================================================\n");
    printf("|                           KELOMPOK 04                            |\n");
    printf("|               1. Dicky Fernando Perangin-angin                   |\n");
    printf("|                  2305551024                                      |\n");
    printf("|               2. Gede P. Ryan Widia Putra                   	   |\n");
    printf("|                  2305551046                                      |\n");
    printf("|               3. Yohani Yuviena Sianipar                         |\n");
    printf("|                  2305551064                                      |\n");
    printf("|               4. Jeremy Marco Tamelan                            |\n");
    printf("|                  2305551077                                      |\n");
    printf("|               5. Gede Richardo Bagus Dharmawan                   |\n");
    printf("|                  2305551091                                      |\n");
    printf("|               6. Komang Dwi Putri Sunartiasih                    |\n");
    printf("|                  2305551174	                                   |\n");
    printf("|               7. Rauf Zulkarnain                                 |\n");
    printf("|                  2305551174                                      |\n");
    printf("====================================================================\n");
}

void header1()
{
    printf("====================================================================\n");
    printf("|                 Program Kalkulator Sederhana                     |\n");
    printf("====================================================================\n");
}