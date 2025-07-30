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
    char Marks[4];
    int Size;
    char Wave[4];
    char Format[4];
    int FormatLen;
    short FormatType;
    short NumberOfChannel;
    int SampleRate;
} wav_header_t;


int main() {
    FILE* fp = fopen("D:/Temp_Dir/audio.wav", "rb");
    if (fp == NULL)
    {
        printf("failed to open file \n");
        return -1;
    }
    
    char header_buf[44] = { 0 };
    for (int i = 0; i < sizeof(header_buf); i++)
    {
        header_buf[i] = fgetc(fp);
    }
    fclose(fp);
    wav_header_t* pHeader = header_buf;
    printf("Size: %d (bytes)\n", pHeader->Size);
    printf("SampleRate: %d \n", pHeader->SampleRate);

    return 0;
}

