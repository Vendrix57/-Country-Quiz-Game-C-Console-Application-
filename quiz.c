#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MaxLength 50

void toLowerCase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int main()
{
    char Countries[10][MaxLength] = {"Germany", "Cameroon", "Ukraine", "Japan", "France", "Israel", "USA", "Australia", "Denmark", "South Africa"};
    char Capitals[10][MaxLength] = {"Berlin", "Yaounde", "Kiew", "Tokyo", "Paris", "Jerusalem", "Washington D.C.", "Canberra", "Copenhagen", "Pretoria, Cape Town & Bloemfontein"};
    int used[10] = {0};

    int i;
    int random, QuizSize;
    int score = 0;
    char UserAnswer[MaxLength];

    QuizSize = sizeof(Countries) / sizeof(Countries[0]); // Computing the number of elements in the array
    srand(time(NULL));

    printf("*** COUNTRY QUIZ GAME ***\n\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            random = rand() % QuizSize;
        } while (used[random] == 1);
        used[random] = 1;

        printf("Tell me the capital of %s: ", Countries[random]);
        fgets(UserAnswer, sizeof(UserAnswer), stdin);

        UserAnswer[strcspn(UserAnswer, "\n")] = 0;

        char correctAnswer[MaxLength];
        strcpy(correctAnswer, Capitals[random]);
        toLowerCase(UserAnswer);
        toLowerCase(correctAnswer);

        if (strcmp(Countries[random], "South Africa") == 0)
        {
            if (strcmp(UserAnswer, "pretoria") == 0 ||
                strcmp(UserAnswer, "cape town") == 0 ||
                strcmp(UserAnswer, "bloemfontein") == 0)
            {
                printf("CORRECT!\n\n");
                score++;
            }
            else
            {
                printf("FALSE! The CORRECT answers are Pretoria, Cape Town or Bloemfontein\n\n");
            }
        }
        else
        {
            if (strcmp(UserAnswer, correctAnswer) == 0)
            {
                printf("CORRECT!\n\n");
                score++;
            }
            else
            {
                printf("FALSE! The CORRECT answer is %s\n\n", Capitals[random]);
            }
        }
    }
        printf("Your final score is: %d / 10\n", score);
    
    return 0;
}