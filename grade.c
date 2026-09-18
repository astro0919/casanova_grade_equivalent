#include <stdio.h>

int main() {

   //input: A numeric score (0-100) 
    //process: check the grade and its equivalent

    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

        if (score >= 90) {
           grade = 'A';
        } else if (score >= 80) {
           grade = 'B';
        } else if (score >= 70) {
           grade = 'C';
        } else if (score >= 60) {
           grade = 'D';
        } else {
           grade ='F';
        }
    
    printf(Grade: %c",grade);

    return 0;
}