#include <stdio.h>

void print_user_prompt(char * prompt);

int main ( int argc, char * argv[] ) {
  int file_input = 0;     // boolean tracking whether input is from file
  FILE *file;             // file pointer to pull input from
  char * prompt = "o-o>>";       // vanity prompt

  // Handle command-line arguments
  if ( argc > 2) {
    printf( "usage: %s (filename)\nExecution continuing without additional arguments\n", argv[0] );
  }
  if ( argc == 2 ) {
    file = fopen( argv[1], "r" );

    if ( file == 0 ) {
      printf( "Could not open file. Continuing to manual input\n" );
    } else {
      file_input = 1;
    }

  }

  // Echo basic input
  print_user_prompt(prompt); 

}

void print_user_prompt(char * prompt) {
  printf( "%s", prompt );
  fflush( stdout );
}
