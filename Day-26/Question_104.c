#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("===== Quiz Application =====\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\n5. Which symbol is used to end a C statement?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    printf("\n===== Result =====\n");
    printf("Your Score = %d out of 5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}