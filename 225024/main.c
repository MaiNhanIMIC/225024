#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "link_list.h"
#include "RingBuffer.h"
RingBuffer_t ring_bf;
int ring_bf_item;
int main() {
    
    CreateRingBuffer(&ring_bf, 3);

    PutItemToRingBuffer(&ring_bf, 1);
    PutItemToRingBuffer(&ring_bf, 2);
    PutItemToRingBuffer(&ring_bf, 3);
    PutItemToRingBuffer(&ring_bf, 4);
    GetItemFromRingBuffer(&ring_bf, &ring_bf_item);
    GetItemFromRingBuffer(&ring_bf, &ring_bf_item);
    GetItemFromRingBuffer(&ring_bf, &ring_bf_item);
    PutItemToRingBuffer(&ring_bf, 4);
    GetItemFromRingBuffer(&ring_bf, &ring_bf_item);

    DeleteRingBuffer(&ring_bf);

    return 0;
}