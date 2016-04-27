#include "ft.h"
#include "fifo.h"

FIFO_DATA_TYPE data_in[FIFO_SIZE];
FIFO_DATA_TYPE data_out[FIFO_SIZE];
fifo_t data_in_f, data_out_f;

int main()
{
  FIFO_DATA_TYPE out_val;

  fifo_init(&data_in_f, data_in, FIFO_SIZE);
  fifo_init(&data_out_f, data_out, FIFO_SIZE);

  fifo_push(&data_in_f, 1);
  fifo_push(&data_in_f, 2);
  fifo_push(&data_in_f, 3);
  fifo_push(&data_in_f, 4);
  fifo_push(&data_in_f, 5);

  if (fifo_pop(&data_in_f, &out_val))
    printf("Valore: %d\n", out_val);
  if (fifo_pop(&data_in_f, &out_val))
    printf("Valore: %d\n", out_val);
  if (fifo_pop(&data_in_f, &out_val))
    printf("Valore: %d\n", out_val);
  if (fifo_pop(&data_in_f, &out_val))
    printf("Valore: %d\n", out_val);
  if (fifo_pop(&data_in_f, &out_val))
    printf("Valore: %d\n", out_val);

  //ft_init();

  //ft_step();

  return 0;
}
