#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum
{
    MALE,
    FEMALE
} gender_t;
typedef struct
{
    char name[32];
    int age;
    gender_t gender;
    float literature;
    float math;
    float avg;
} student_t;

int main() {
    FILE* fp = fopen("D:/Temp_Dir/DanhSachHocSinh.csv", "r");
    if (fp == NULL)
    {
        printf("failed to open file \n");
        return -1;
    }
    char c = 0;
    char data_buf[1024] = { 0 };
    int index = 0;
    do
    {
        c = fgetc(fp);
        data_buf[index++] = c;
    } while (c != EOF);
    fclose(fp);
    int num_student = 0;
    int len_data = strlen(data_buf);
    for (int i = 0; i < len_data; i++)
    {
        if (data_buf[i] == '\n')
            num_student++;
    }

    student_t* student_list = (student_t *)calloc(num_student, sizeof(student_t));
    if (student_list == NULL) return -1;

    char* data = data_buf;

    for (int i = 0; i < num_student; i++)
    {
        char line_data[256] = { 0 };
        int index = 0;
        do
        {
            line_data[index++] = *data;
        } while (*data++ != '\n');
        char gender_buf[8] = { 0 };
        sscanf(line_data, "%[^,],%d,%[^,],%f,%f", student_list[i].name, &student_list[i].age, gender_buf, &student_list[i].literature, &student_list[i].math);
        if (strcmp(gender_buf, "NAM") == 0)
            student_list[i].gender = MALE;
        else if (strcmp(gender_buf, "NU") == 0)
            student_list[i].gender = FEMALE;
        student_list[i].avg = (student_list[i].literature + student_list[i].math) / 2;
        printf("");
    }



    return 0;
}

//%s scan string, đến khi nào hặp ký tự space hoặc \n thì no sẽ ngừng lại
