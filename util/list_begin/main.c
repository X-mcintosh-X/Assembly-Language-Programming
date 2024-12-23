#include "main.h"


//------------------------------------------------------------------------------
//
// MAIN
//
int main (int argc, char *argv[]) {
  puts("\nTEST LIST_BEGIN AND LIST_NEXT\n");

  list_t *list;
  if ((list = list_alloc()) == NULL)
    puts("LIST_ALLOC FAILED");
  else if (list_init(list, sizeof(vehicle_t)) < 0)
    puts("LIST_INIT FAILED!");
  else {
    print_list(list, "LIST_INIT SUCCESSFUL");

    for (size_t i = 0; i < VEHICLE_COUNT; ++i) {
      if (list_add(list, &vehicle[i]) == NULL) {
        puts("LIST_ADD FAILED!");
        return -1;
      }
    }

    print_list(list, "LIST_ADD SUCCESSFUL");

    int count = 0;
    for (void *iter = list_begin(list); iter; iter = list_next(list))
      print_vehicle(++count, (vehicle_t *)iter);

    if (count != VEHICLE_COUNT)
        puts("LIST_BEGIN OR LIST_NEXT FAILED!");
    else
      puts("\nLIST_BEGIN AND LIST_NEXT SUCCESSFUL\n");

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
      "\to_size:\t%lu\n\tbuffer:\t%p\n\n", list->total, list->count,
      list->o_size, list->buffer);
}
//------------------------------------------------------------------------------
//
// PRINT_VEHICLE
//

void print_vehicle (int const no, vehicle_t const *vhc) {
  printf("%02d:   %-16s%-16s% 8d\n", no, vhc->make, vhc->model, vhc->year);
}

