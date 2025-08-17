#include <stdio.h>
#include "hinh_hoc.h"

int hinh_chu_nhat_c::tinh_dien_tich()
{
	return dai * rong;
}

int hinh_chu_nhat_c::tinh_chu_vi()
{
	return (dai + rong) * 2;
}

/*bỏ trống*/ hinh_chu_nhat_c::hinh_chu_nhat_c()
{
	printf("Ham tao duoc khoi chay\n");
	dai = 0;
	rong = 0;
}


/*bỏ trống*/ hinh_chu_nhat_c::~hinh_chu_nhat_c()
{
	printf("doi tuong bi giai phong vung nho \n");
}