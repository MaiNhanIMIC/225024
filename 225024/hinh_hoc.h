#pragma once

class hinh_chu_nhat_c
{
public:
	// chứa biến - dùng để miêu tả đặc điểm của đối tượng
	int dai;
	int rong;

	// chứa hàm - dùng để miêu tả hành động/hành vi của đối tượng
	int tinh_dien_tich();
	int tinh_chu_vi();

	/*
		Hàm tạo - Có tên trùng với tên class
		nó sẽ TỰ ĐỘNG được khởi chạy khi đối tượng đó được tạo ra
		input: có thể có input
		output: không có output
	*/
	hinh_chu_nhat_c();

	/*
		Hàm hủy - Có tên trùng với tên class thêm ~ ở trước
		nó sẽ TỰ ĐỘNG được khởi chạy khi đối tượng đó bị hủy (giải phóng vùng nhớ)
		input: không input
		output: không có output
	*/
	~hinh_chu_nhat_c();
};
