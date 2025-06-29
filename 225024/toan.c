
#include "toan.h"
int x = 10;
/*
	Chức nâng: dùng để nhân 2 số nguyên
	Input:
		- int a: số nguyên a
		- int b: số nguyên b
	Output:
		int: kêt quả của phép nhân a và b
	Note:
		hàm này không sử dụng toán tử * mà sẽ sử dung toán tử + để thay thế
*/
int Nhan(int a, int b)
{
	int ketqua = 0;

	for (int i = 0; i < b; i++)
	{
		//ketqua = ketqua + a;
		ketqua = Cong(ketqua, a);
	}

	return ketqua;
}

/*
	Chức nâng: dùng để cộng 2 số nguyên
	Input: 
		- int a: số nguyên a
		- int b: số nguyên b
	Output:
		int: Tổng của a và b
*/
int Cong(int a, int b)
{
	int ketqua = 0;
	ketqua = a + b;
	return ketqua;
}

