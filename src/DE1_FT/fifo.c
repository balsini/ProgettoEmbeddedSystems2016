#include "fifo.h"

int fifo_init(fifo_t * fifo, FIFO_DATA_TYPE * array, unsigned int size)
{
  fifo->data = array;
  fifo->size = size;
  fifo->head = 0;
  fifo->tail = 0;
  fifo->count = 0;

  return 0;
}


int fifo_full(fifo_t * fifo)
{
  if (fifo->count == fifo->size)
    return 1;
  return 0;
}

int fifo_empty(fifo_t * fifo)
{
  if (fifo->count == 0)
    return 1;
  return 0;
}

int fifo_push(fifo_t * fifo, FIFO_DATA_TYPE val)
{
  if (fifo_full(fifo))
    return 0;

  fifo->data[fifo->head] = val;
  fifo->head = (fifo->head + 1) % fifo->size;
  fifo->count++;

  return 1;
}

int fifo_pop(fifo_t * fifo, FIFO_DATA_TYPE * val)
{
  if (fifo_empty(fifo))
    return 0;

  *val = fifo->data[fifo->tail];
  fifo->tail = (fifo->tail + 1) % fifo->size;
  fifo->count--;

  return 1;
}
