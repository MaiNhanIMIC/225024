#include "RingBuffer.h"
#include <malloc.h>
#include <stdio.h>

void CreateRingBuffer(RingBuffer_t* ring_buff, int num_of_item)
{
	ring_buff->memory = (int*)calloc(num_of_item, sizeof(int));
	ring_buff->put_item_addr = ring_buff->memory;
	ring_buff->get_item_addr = ring_buff->memory;

	ring_buff->num_of_item_empty = num_of_item;
	ring_buff->num_of_item = num_of_item;
}

int PutItemToRingBuffer(RingBuffer_t* ring_buff, int val)
{
	if (ring_buff->num_of_item_empty <= 0)
	{
		printf("Ring buffer is full\n");
		return -1;
	}
	*(ring_buff->put_item_addr) = val;

	ring_buff->num_of_item_empty--;

	ring_buff->put_item_addr++;
	if (ring_buff->put_item_addr > (ring_buff->memory + ring_buff->num_of_item))
	{
		ring_buff->put_item_addr = ring_buff->memory;
	}
	return 0;
}

int GetItemFromRingBuffer(RingBuffer_t* ring_buff, int* item)
{
	if (ring_buff->num_of_item_empty == ring_buff->num_of_item)
	{
		printf("Ring buffer is empty\n");
		return -1;
	}
	*item = *(ring_buff->get_item_addr);
	ring_buff->num_of_item_empty++;

	ring_buff->get_item_addr++;
	if (ring_buff->get_item_addr > (ring_buff->memory + ring_buff->num_of_item))
	{
		ring_buff->get_item_addr = ring_buff->memory;
	}
	return 0;
}

void DeleteRingBuffer(RingBuffer_t* ring_buff)
{
	free(ring_buff->memory);
}