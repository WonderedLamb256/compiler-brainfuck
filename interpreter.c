#include <stdlib.h>
#include <stdio.h>
#include "bfdefs.h"
#include "reserve-cells.o"
#include "commands.o"

void interpreter() {
      for (char l = 0; l < strlen(code); ++l) {
            switch(code[l]) {
                  case ">":
                        move_ptr_rt();
                        break;
                  case "<":
                        move_ptr_lt();
                        break;
                  case "+":
                        inc_ptr();
                        break;
                  case "-":
                        dec_ptr();
                        break;
                  case ".":
                        prt_ptr();
                        break;
                  case "[":
                        cond_1();
                        break;
                  case "]":
                        cond_2();
                        break;
                  default:
                        break;
                  }
                  set_number_after_use(); // Important for some certain commands like + and -
            }
      }
}

// The runtime code begins here

int main() {
      reserve-cells(30000); // Initialize before while loop
      set_number_after_use(); // Use important function before while loop
      while(1) { // Unending loop.
            printf("bfi > "); // Change the terminal cursor.
            scanf("%d", &code); // Scan the code when entered.
            interpreter(); // Run the interpreter.
            printf("\n"); // Make a newline.
      }
      return 0; // Return as 0 (exit) if the interpreter is control+c'd.
}
