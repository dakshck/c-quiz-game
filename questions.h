#ifndef QUESTIONS_H
#define QUESTIONS_H

#define MAX 256
#define MAX_Q 10

typedef struct{
  char question[MAX];
  char A[50];
  char B[50];
  char C[50];
  char ans;
} Quizquestions;

extern Quizquestions questions[MAX_Q];
extern char useranswer;
extern char answer;
extern int score;
extern int overallpercent; 

void loadQ();
void displayQ();
int checkanswer(char ans, char useranswer, int score);
int checkpercent(int overallpercent);

#endif
