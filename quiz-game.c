#include <stdio.h>
#include <time.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, score = 0, category;
    time_t start, end;
    float totaltime;

    printf("Welcome To Quiz Game By TMKOC\n");
    printf("=====================================\n");
    printf("Instructions:\n 1.For any correct answer you will get 1 point\n 2.Type only option number to give answer\n 3.You cannot go to previous question after giving its answer\n\n");
    printf("=====================================\n");
    printf("Choose a category:\n");
    printf("1. C Language\n");
    printf("2. General Knowledge\n");
    printf("3. Sports\n");
    printf("Enter your choice: ");
    scanf("%d", &category);
    printf("\n------ QUIZ STARTED ------\n\n");

    start = time(NULL);

    if (category == 1)
    {
        printf("Q1. Which datatype is used for integers?\n 1.Float \t 2.Int \n 3.Double \t 4.Char\nEnter answer:=");
        scanf("%d", &a);
        if (a == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q2. What is the size of int datatype?\n 1.4 bytes \t 2.8 bytes \n 3.6 bytes \t 4.32 bytes\nEnter answer:=");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q3. Which C command is used to take input from user?\n 1.Scanf \t 2.Printf \n 3.Int \t 4.None Of These\nEnter answer:=");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q4. Which symbol is used to end each statement in C?\n 1., \t 2.; \n 3.' \t 4.None Of These\nEnter answer:=");
        scanf("%d", &d);
        if (d == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q5. Which keyword is used to exit a loop?\n 1.Continue \t 2.Exit \n 3.Break \t 4.End\nEnter answer:=");
        scanf("%d", &e);
        if (e == 3)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q6. Which keyword skips an iteration?\n 1.Continue \t 2.Pass \n 3.Break \t 4.Skip\nEnter answer:=");
        scanf("%d", &f);
        if (f == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q7. The char data type stores?\n 1.Words \t 2.Integers \n 3.Decimal values \t 4.Characters\nEnter answer:=");
        scanf("%d", &g);
        if (g == 4)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q8. Which loop executes at least once?\n 1.For \t 2.While \n 3.Do-While \t 4.Switch\nEnter answer:=");
        scanf("%d", &h);
        if (h == 3)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q9. Which keyword is used to define constant values?\n 1.Final \t 2.Constant \n 3.Const \t 4.Define\nEnter answer:=");
        scanf("%d", &i);
        if (i == 3)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q10. What is the correct format specifier for float?\n 1.%%d \t 2.%%f \n 3.%%df \t 4.%%lf\nEnter answer:=");
        scanf("%d", &j);
        if (j == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");
    }

    else if (category == 2)
    {
        printf("Q1. Which planet is known as the Red Planet?\n 1.Mars \t 2.Venus \n 3.Earth \t 4.Jupiter\nEnter answer:=");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q2. Who wrote the National Anthem of India?\n 1.Tagore \t 2.Gandhi \n 3.Bose \t 4.Nehru\nEnter answer:=");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q3. What is the capital of Japan?\n 1.Tokyo \t 2.Osaka \n 3.Beijing \t 4.Seoul\nEnter answer:=");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q4. Who discovered gravity?\n 1.Newton \t 2.Einstein \n 3.Galileo \t 4.Curie\nEnter answer:=");
        scanf("%d", &d);
        if (d == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q5. Which is the largest ocean on Earth?\n 1.Pacific \t 2.Atlantic \n 3.Indian \t 4.Arctic\nEnter answer:=");
        scanf("%d", &e);
        if (e == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q6. How many continents are there?\n 1.5 \t 2.6 \n 3.7 \t 4.8\nEnter answer:=");
        scanf("%d", &f);
        if (f == 3)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q7. The Taj Mahal is located in?\n 1.Delhi \t 2.Agra \n 3.Mumbai \t 4.Jaipur\nEnter answer:=");
        scanf("%d", &g);
        if (g == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q8. What is the national fruit of India?\n 1.Mango \t 2.Banana \n 3.Orange \t 4.Grapes\nEnter answer:=");
        scanf("%d", &h);
        if (h == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q9. Which festival is known as the festival of lights?\n 1.Holi \t 2.Diwali \n 3.Eid \t 4.Navratri\nEnter answer:=");
        scanf("%d", &i);
        if (i == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q10. What is the national bird of India?\n 1.Sparrow \t 2.Crow \n 3.Peacock \t 4.Pigeon\nEnter answer:=");
        scanf("%d", &j);
        if (j == 3)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");
    }

    else if (category == 3)
    {
        printf("Q1. How many players are there in a cricket team?\n 1.10 \t 2.11 \n 3.12 \t 4.9\nEnter answer:=");
        scanf("%d", &a);
        if (a == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q2. Which Team won the Asia CUP 2025?\n 1.India \t 2.Pakisthan \n 3.China \t 4.Australia\nEnter answer:=");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q3. What sport is played at Wimbledon?\n 1.Tennis \t 2.Cricket \n 3.Football \t 4.Hockey\nEnter answer:=");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q4. How many Wickets are in a hat-trick?\n 1.2 \t 2.3 \n 3.4 \t 4.5\nEnter answer:=");
        scanf("%d", &d);
        if (d == 2)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q5. What sport uses a shuttlecock?\n 1.Badminton \t 2.Tennis \n 3.Volleyball \t 4.Cricket\nEnter answer:=");
        scanf("%d", &e);
        if (e == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q6. What color card sends a player off in football?\n 1.Red \t 2.Yellow \n 3.Green \t 4.Blue\nEnter answer:=");
        scanf("%d", &f);
        if (f == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q7. What is used to hit the ball in table tennis?\n 1.Racket \t 2.Bat \n 3.Paddle \t 4.Stick\nEnter answer:=");
        scanf("%d", &g);
        if (g == 3)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q8. Which team had won most ODI world cups?\n 1.Australia \t 2.India \n 3.West Indies \t 4.South Africa\nEnter answer:=");
        scanf("%d", &h);
        if (h == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q9. How many rings are on the Olympic logo?\n 1.5 \t 2.6 \n 3.7 \t 4.4\nEnter answer:=");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");

        printf("Q10. Which team won T20 World Cup 2024?\n 1.India \t 2.Australia \n 3.South Africa \t 4.USA\nEnter answer:=");
        scanf("%d", &j);
        if (j == 1)
        {
            printf("Correct!!\n");
            score++;
        }
        else
            printf("Wrong!!\n");
    }

    else
    {
        printf("Invalid category! Please restart the game.\n");
        return 0;
    }

    printf("\n------ QUIZ FINISHED ------\n");
    end = time(NULL);
    totaltime = difftime(end, start);
    printf("Your final score = %d / 10\n", score);
    printf("Total time taken = %.2f seconds\n", totaltime);

    if (score == 10)
        printf("Excellent! Perfect score!\n");
    else if (score >= 7)
        printf("Great job!\n");
    else if (score >= 4)
        printf("Not bad, keep practicing.\n");
    else
        printf("Better luck next time!\n");

    printf("Quiz Game By Team TMKOC\n");
    return 0;
}
