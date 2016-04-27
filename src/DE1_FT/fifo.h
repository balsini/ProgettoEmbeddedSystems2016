#ifndef FIFO_H_
#define FIFO_H_

#include "constants.h"

#include <stdint.h>

typedef struct fifo_t_ {
    unsigned int  size;
    unsigned int  head;
    unsigned int  tail;
    unsigned int  count;
    FIFO_DATA_TYPE * data;
} fifo_t;

int fifo_init(fifo_t * fifo, FIFO_DATA_TYPE * array, unsigned int size);
int fifo_full(fifo_t * fifo);
int fifo_empty(fifo_t * fifo);
int fifo_push(fifo_t * fifo, FIFO_DATA_TYPE val);
int fifo_pop(fifo_t * fifo, FIFO_DATA_TYPE * val);

#endif
