#include <stdio.h>

/*
	chức nâng: sử dụng hàm printf để in ra xếp loại của học sinh dự vào điểm trung bình
	input:
		- float diem_trung_binh
	output:
		không có - void
*/
void xep_loai(float diem_trung_binh)
{
	if (diem_trung_binh >= 8.0)
		printf("loai GIOI \n");
	else if (diem_trung_binh >= 6.5)
		printf("loai KHA \n");
	else if (diem_trung_binh >= 5.0)
		printf("loai TRUNG BINH \n");
	else
		printf("loai YEU \n");
}
