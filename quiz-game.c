#include <stdio.h>
#include<time.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,score=0;
    time_t start, end;
    float totaltime;
    printf("Welcome To Quiz Game By TMKOC\n");
    printf("Instructions:\n 1.For any correct answer you will get 1 point \n 2.Type only option number to give answer \n 3.You cannot go to previous question after giving its answer\n \n"); 
    printf("------ QUIZ STARTED ------\n\n");
    start = time(NULL);
    printf("Q1.Which Datatype is used for integers? \n 1.Float \t 2.Int \n 3.Double \t 4.Char \n ");
    printf("Enter answer :=");
    scanf("%d",&a);
    if (a == 2)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
    printf("Q2.What is the size of int datatype? \n 1. 4 bytes \t 2. 8 bytes \n 3. 6 bytes \t 4. 32 bytes \n ");
    printf("Enter answer :=");
    scanf("%d",&b);
    if (b == 1)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
      printf("Q3.Which C command is used to take input from user? \n 1.Scanf \t 2.Printf \n 3.Int \t\t 4.None Of These \n ");
    printf("Enter answer :=");
    scanf("%d",&c);
    if (c == 1)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
     printf("Q4.Which symbol is used to end each statement in C? \n 1. , \t 2. ; \n 3. ' \t 4.None Of These \n ");
    printf("Enter answer :=");
    scanf("%d",&d);
    if (d == 2)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
    printf("Q5.Which keyword is used to exit a loop? \n 1.Continue \t 2. Exit \n 3. Break \t 4.End \n ");
    printf("Enter answer :=");
    scanf("%d",&e);
    if (e == 3)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
    
    printf("Q6.Which keyword skips an iteration? \n 1.Continue \t 2. Pass \n 3. Break \t 4.Skip \n ");
    printf("Enter answer :=");
    scanf("%d",&f);
    if (f == 1)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
    printf("Q7.The char data type stores? \n 1.Words \t\t 2. Intergers \n 3. Decimal value \t 4.Characters \n ");
    printf("Enter answer :=");
    scanf("%d",&g);
    if (g == 4)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
     printf("Q8.Which loop executes at least once? \n 1.For \t\t 2. While \n 3. Do-While \t 4.Switch \n ");
    printf("Enter answer :=");
    scanf("%d",&h);
    if (h == 3)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
     printf("Q9.Which keyword is used to define constant values? \n 1.Final \t 2. Constant \n 3. Const \t 4.Define \n ");
    printf("Enter answer :=");
    scanf("%d",&h);
    if (h == 3)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
     printf("Q10.What is the correct format specifier for float? \n 1. %%d \t\t 2. %%f \n 3. %%df \t4.%%lf \n ");
    printf("Enter answer :=");
    scanf("%d",&i);
    if (i == 2)
    {
        printf("Correct!!\n");
        score++;
    }
    else{
        printf("Wrong!!\n");
    }
     printf("------ QUIZ FINISHED ------\n");
    end = time(NULL);
    totaltime = difftime(end, start);
    printf("Your final score = %d / 10\n", score);
    printf("Total time taken = %.2f seconds\n", totaltime);
    return 0;
}