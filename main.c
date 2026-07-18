#include <stdio.h>
#include "questions.h"

char useranswer = '\0';
char answer = '\0';
int score = 0;
int overallpercent = 0;

int main() {
  char Qchoice = 'Y';
  printf("\n=== C Quiz ===\n");

    if(Qchoice == 'Y' || Qchoice == 'y') {
      while(Qchoice == 'Y' || Qchoice == 'y') {
        loadQ();
        displayQ();
        printf("Press 'Y' to RESTART and 'N' to EXIT: ");
        scanf(" %c", &Qchoice);
      }
    }
  return 0;
}

int checkpercent(int score) {
    return score * 100 / MAX_Q;
}

int checkanswer(char answer, char useranswer, int score) {
    if (answer == useranswer) {
        printf("Correct\n");
        score++;
    }
    else if(useranswer != 'A' && useranswer != 'B' && useranswer != 'C') {
        printf("This is not an option, perhaps?\n");
    }
    else {
        printf("Try again!\n");
    }
    return score;
}


