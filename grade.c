#include <stdio.h>

int main() {

      int G;

      for (int i = 0; i < 10; i++) {
      printf("Enter number: ");
      scanf("%d", &G);

      if ( G < 0 || G > 100 ) {
            printf("Invalid Grade! Please enter a grade from 0 to 100.\n");
      } else if ( G >= 90) {
            printf("GRADE:\n |A| |%d|\n", G);
            printf("Excellent! Outstanding performance. Keep it up!\n");
      } else if ( G >= 80 ) {
            printf("GRADE:\n|B| |%d|\n", G);
            printf("Great job! You are doing really well.\n");
      } else if ( G >= 70 ) {
            printf("GRADE:\n |C| |%d|\n", G);
            printf("Good work! Keep improving and aim higher.\n");
      } else if ( G >= 60 ) {
            printf("GRADE:\n |D| |%d|\n", G);
            printf("You passed! Keep studying and do your best.\n");
      }
        else {
            printf("GRADE:\n|F| |%d|\n", G);
            printf("Don't give up! Learn from your mistakes and keep trying.\n");
      }
      }
   
  return 0;
}
