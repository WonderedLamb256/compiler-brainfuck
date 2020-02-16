#include <stdio.h>
#include <stdlib.h>
#include "bfdefs.h"

void donothing() {
}
void set_number_after_use() {
      ptr_rel_loc = *i[number];
}
void move_ptr_rt() { // >
      *i = *i[number++];
}
void move_ptr_lt() { // <
      *i = *i[number--];
}
void inc_ptr() { // +
      ptr_rel_loc++;
}
void dec_ptr() { // -
      ptr_rel_loc--;
}
void prt_ptr() {
      printf("0x%d/n", &i[number]);
}
void cond_1() {
      if *i == 0 {
            goto void cond_2();
      }
}
void cond_2() {
      if *i != 0 {
            return;
      }
}
