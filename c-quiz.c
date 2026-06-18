#include <stdio.h>



    char question1();
     char question2();
      char question3();
       char question4();
        char question5();
        char question6();
       char question7();
      char question8();
     char question9();
    char question10();

int checkanswer(char answer, char useranswer, int score);
int checkpercent(int score);


int main() {
    char useranswer = '\0'; 
    char answer = '\0'; 
    int score = 0;
 
    printf("=== C Quiz ===\n");
    answer = question1();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question2();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question3();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question4();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question5();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question6();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question7();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question8();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question9();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    answer = question10();
    scanf(" %c", &useranswer);
    score = checkanswer(answer, useranswer, score);
    printf("Score: %d\n\n", score);

    printf("Overall Score: %d/10\n", score);
    score = checkpercent(score);
    printf("Overall percent: %d%%", score);                             
    return 0;

}

int checkpercent(int score) {
    return score * 100 / 10;
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

char question1() {
    printf("1. What is 5 * 7?\n");
        printf("A) 30\n");
        printf("B) 35\n");
        printf("C) 40\n\n");
        printf("Your answer: ");

        return 'B'; 
} 

char question2() {
    printf("2. What is 13 * 8?\n");
        printf("A) 104\n");
        printf("B) 108\n");
        printf("C) 96\n\n");
        printf("Your answer: ");

        return 'A';
}    

char question3() {
    printf("3. What is 17 * 6?\n");
    printf("A) 96\n");
    printf("B) 102\n");
    printf("C) 108\n\n");
    printf("Your answer: ");

    return 'B';
}

char question4() {
    printf("4. What is 14 * 7?\n");
    printf("A) 104\n");
    printf("B) 96\n");
    printf("C) 98\n\n");
    printf("Your answer: ");

    return 'C';
}

char question5() {
    printf("5. What is 19 * 5?\n");
    printf("A) 90\n");
    printf("B) 95\n");
    printf("C) 100\n\n");
    printf("Your answer: ");

    return 'B';
}

char question6() {
    printf("6. What is 12 * 9?\n");
    printf("A) 108\n");
    printf("B) 102\n");
    printf("C) 112\n\n");
    printf("Your answer: ");

    return 'A';
}

char question7() {
    printf("7. What is 16 * 4?\n");
    printf("A) 68\n");
    printf("B) 60\n");
    printf("C) 64\n\n");
    printf("Your answer: ");

    return 'C';
}

char question8() {
    printf("8. What is 15 * 8?\n");
    printf("A) 120\n");
    printf("B) 125\n");
    printf("C) 115\n\n");
    printf("Your answer: ");

    return 'A';
}

char question9() {
    printf("9. What is 18 * 7?\n");
    printf("A) 124\n");
    printf("B) 126\n");
    printf("C) 128\n\n");
    printf("Your answer: ");

    return 'B';
}

char question10() {
    printf("10. What is 11 * 12?\n");
    printf("A) 121\n");
    printf("B) 132\n");
    printf("C) 144\n\n");
    printf("Your answer: ");

    return 'B';
}