#include <stdio.h>
#include "questions.h"
#include <stdlib.h>

Quizquestions questions[MAX_Q];

void loadQ() {

  int counter = 1;

  FILE *qfile = fopen("questions.txt", "r");

  if(qfile == NULL) {
    perror("ERROR");
    return;
  }

  for(int i = 0; i < MAX_Q; i++) {
    fscanf(qfile, " %[^|]| %[^|]| %[^|]| %[^|]| %c",
          questions[i].question,
          questions[i].A,
          questions[i].B,
          questions[i].C,
          &questions[i].ans);
    counter++;
  }
  counter--;
  printf("\nLoaded %d questions from questions.txt.\n\n", counter);
}

void displayQ() {
  int loccounter = 1;
  for(int i = 0; i < MAX_Q; i++) {
    printf("%d. %s?\n A. %s\n B. %s\n C. %s\nAns: ",
           loccounter,
           questions[i].question,
           questions[i].A,
           questions[i].B,
           questions[i].C
           );
    answer = questions[i].ans;
    scanf(" %c", &useranswer);
    printf("\n");
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n", score);
    loccounter++;
    printf("Press enter to continue.");
    getchar();
    getchar();
      system("clear");
  }

  printf("Final results:\n\n");
  printf("Overall Score: %d/10\n", score);
  overallpercent = checkpercent(score);
  printf("\nOverall Percent: %d\n", overallpercent);
}
