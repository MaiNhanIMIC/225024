#pragma once
typedef struct
{
	int* memory;
	int num_of_item;
	int num_of_item_empty;
	int* put_item_addr;
	int* get_item_addr;
} RingBuffer_t;

void CreateRingBuffer(RingBuffer_t* ring_buff, int num_of_item);
int PutItemToRingBuffer(RingBuffer_t* ring_buff, int val);
int GetItemFromRingBuffer(RingBuffer_t* ring_buff, int* item);
void DeleteRingBuffer(RingBuffer_t* ring_buff);