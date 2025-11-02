#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_Q 50

int main()
{
    char question[256][256];
    char options[256][256];
    int correct[256];
    int total = 0, score = 0, category;
    FILE *file = NULL;

    srand(time(NULL));
    printf("Welcome To Quiz Game By TMKOC\n");
    printf("=====================================\n");
    printf("1. C Language\n2. General Knowledge\n3. Sports\n");
    printf("Enter your choice: ");
    scanf("%d", &category);
    getchar();

    if (category == 1)
        file = fopen("c_language.txt", "r");
    else if (category == 2)
        file = fopen("gk.txt", "r");
    else if (category == 3)
        file = fopen("sports.txt", "r");
    else
    {
        printf("Invalid category!\n");
        return 0;
    }

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 0;
    }

    while (fgets(question[total], 256, file))
    {
        fgets(options[total], 256, file);
        fscanf(file, "%d\n", &correct[total]);
        total++;
        if (total >= MAX_Q)
            break;
    }
    fclose(file);

    int order[MAX_Q];
    for (int i = 0; i < total; i++)
        order[i] = i;
    for (int i = total - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = order[i];
        order[i] = order[j];
        order[j] = temp;
    }

    printf("\n------ QUIZ STARTED ------\n\n");
    int limit = (total < 10) ? total : 10;
    time_t start = time(NULL);

    for (int k = 0; k < limit; k++)
    {
        int i = order[k];
        int ans;
        printf("Q%d. %s%s", k + 1, question[i], options[i]);
        printf("Enter answer: ");
        scanf("%d", &ans);
        if (ans == correct[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong! Correct answer: %d\n", correct[i]);
        }
        printf("\n");
    }

    time_t end = time(NULL);
    float totalTime = difftime(end, start);

    printf("------ QUIZ FINISHED ------\n");
    printf("Your final score = %d / %d\n", score, limit);
    printf("Time taken = %.2f seconds\n", totalTime);

    if (score == limit)
        printf("Excellent! Perfect score!\n");
    else if (score >= 7)
        printf("Great job!\n");
    else if (score >= 4)
        printf("Not bad, keep practicing.\n");
    else
        printf("Better luck next time!\n");

    return 0;
}
