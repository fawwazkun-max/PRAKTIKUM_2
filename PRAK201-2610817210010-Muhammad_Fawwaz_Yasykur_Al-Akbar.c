#include <stdio.h>

int main()
{
    char name[100], student_id[20], parallel_class[20], birth_info[100], address[200], hobby[100], phone[30];

    printf("Nama: ");
    scanf(" %[^\n]", name);
    printf("NIM: ");
    scanf(" %[^\n]", student_id);
    printf("Kelas Paralel: ");
    scanf(" %[^\n]", parallel_class);
    printf("Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", birth_info);
    printf("Alamat: ");
    scanf(" %[^\n]", address);
    printf("Hobby: ");
    scanf(" %[^\n]", hobby);
    printf("No. HP: ");
    scanf(" %[^\n]", phone);

    printf("\nNama                    : %s\n", name);
    printf("NIM                     : %s\n", student_id);
    printf("Kelas Paralel           : %s\n", parallel_class);
    printf("Tempat/Tanggal Lahir    : %s\n", birth_info);
    printf("Alamat                  : %s\n", address);
    printf("Hobby                   : %s\n", hobby);
    printf("No. HP                  : %s\n", phone);
    return 0;
}