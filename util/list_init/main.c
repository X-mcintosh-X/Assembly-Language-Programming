#include "main.h"


//------------------------------------------------------------------------------
//
// MAIN
//
int main (int argc, char *argv[]) {
  puts("\nTEST LIST_INIT AND LIST_TERM\n");

  list_t *list;
  if ((list = list_alloc()) == NULL)
    puts("LIST_ALLOC FAILED");
  else if (list_init(list, sizeof(vehicle_t)) < 0)
    puts("LIST_INIT FAILED!");
  else {
    print_list(list, "LIST_INIT SUCCESSFUL");
    list_term(list);
    print_list(list, "LIST_TERM SUCCESSFUL");
  }
  list_free(list);

  return 0;
}
//------------------------------------------------------------------------------
//
// PRINT_LIST
//
void print_list (list_t *list, char const *header) {
  puts(header);
  printf("\nlist:\ttotal:\t%lu\n\tcount:\t%lu\n" \
      "\to_size:\t%lu\n\titem:\t%p\n\n", list->total, list->count,
      list->o_size, list->buffer);
}

