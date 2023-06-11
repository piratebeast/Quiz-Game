#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void show_record();
void help();
void leader_board();
void edit_score(float, char []);

int main()
{
    int quizCounters,r,i,n;
    float countingScores;
    char options;
    char playername[20];
mainhome:
    system("cls");

    printf("\n\t\t****************************************");

    printf("\n\t\t\t   WELCOME TO QUIZ GAME");

    printf("\n\t\t****************************************");
    printf("\n\t\t****************************************");
    printf("\n\t\t Enter 1 to start the game");
    printf("\n\t\t Enter 2 to view the highest score  ");
    printf("\n\t\t Enter 3 for help");
    printf("\n\t\t Enter 4 to view leaderboard       ");
    printf("\n\t\t Enter 5 to quit             ");
    printf("\n\t\t****************************************\n\n");
    options=toupper(getch());
    if (options=='2')
    {
        show_record();
        goto mainhome;
    }
    else if (options=='3')
    {
        help();
        getch();
        goto mainhome;
    }
    else if (options=='4')
    {
        leader_board();
        getch();
        goto mainhome;
    }
    else if (options=='5')
        exit(1);
    else if(options=='1')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        gets(playername);

        system("cls");
        printf("\n ****************************************  Welcome %s to Quiz Game ****************************************",playername);
        printf("\n\n How to play the game:");
        printf("\n ****************************************");
        printf("\n At first you will be ask questions. Each correct answer will get you TK 100!. ");
        printf("\n    You will be asked a total of 10 questions in this round. ");
        printf("\n    You can win up to one thousand tk");
        printf("\n    You will be given four alternatives, and you must select the correct one by pressing a,b,c,d.");
        printf("\n    You will be asked questions incessantly until you provide correct answers.");
        printf("\n\n\n Press E  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch())=='E')
        {
            goto game;
        }
        else
        {
            goto mainhome;
            system("cls");
        }


game:
        quizCounters=0;
        for(i=1; i<=10; i++)
        {
            system("cls");
            r=i;

            switch(r)
            {
            case 1:
                printf("\n\nResolving errors in a program is known as...");
                printf("\n\nA.Debugging\t\tB.Error Checking\n\nC.Refixing\t\tD.Problem Solving");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                    getch();
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Error Checking");
                    getch();
                    goto countingScores;
                    break;
                }

            case 2:
                printf("\n\n\nWhich of the following is not a high level programming language?");
                printf("\n\nA.Assembly\t\tB.Java\n\nC.Python\t\tD.C++");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Assembly");
                    getch();
                    goto countingScores;
                    break;
                }

            case 3:
                printf("\n\n\nLanguages that relate to the architecture and hardware of a specific computer are known as...");
                printf("\n\nA.High Level Languages\t\tB.Simplex Languages\n\nC.Low Level Languages\t\tD.Complex Languages");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Low Level Languages");
                    getch();
                    goto countingScores;
                    break;
                }

            case 4:
                printf("\n\n\nThe two categories of low level language are...");
                printf("\n\nA.Machine Code & Assembly\t\tB.Machine Code & Algorithms \n\nC.Assembly & Algorithms\t\tD.Algorithms & Binary");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Machine Code & Assembly");
                    getch();
                    goto countingScores;
                    break;
                }

            case 5:
                printf("\n\n\nWhich of the following is not an advantage of using a low level language? ");
                printf("\n\nA.Makes more efficient use of primary memory.\t\tB.Tailor a program to a specific piece of hardware.\n\nC.To perform a task very quickly.\t\tD.To enable the program to be run on multiple platforms.");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Tailor a program to a specific piece of hardware.");
                    getch();
                    goto countingScores;
                    break;
                }

            case 6:
                printf("\n\n\nWhat is the name for the software used to convert an assembly language program into machine code?");
                printf("\n\nA.Assembler\t\tB.Compiler\n\nC.Interpreter\t\tD.Translator");
                if (toupper(getch())=='B' )
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Compiler");
                    goto countingScores;
                    getch();
                    break;
                }

            case 7:
                printf("\n\n\nWhich of the following command would not be found in an assembly language?");
                printf("\n\nA.LOAD\t\tB.ADD\n\nC.STORE\t\tD.SORT");
                if (toupper(getch())=='D')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D.SORT");
                    getch();
                    goto countingScores;
                    break;
                }

            case 8:
                printf("\n\n\nThe 3 main types of translators are...");
                printf("\n\nA.Assemblers, Compilers & Interpreters \t\tB.Assemblers, Compilers & Converters \n\nC.Assemblers, Scripters  & Interpreters \t\tD.Converters, Scripters & Interpreters ");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Assemblers, Compilers & Converters ");
                    getch();
                    goto countingScores;
                    break;
                }

            case 9:
                printf("\n\n\nWhich type of translator creates an executable file of machine code from a program written in a high level language? ");
                printf("\n\nA.Compiler\t\tB.Interpreter\n\nC.Assembler\t\tD.Executor");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Compiler");
                    getch();
                    goto countingScores;
                    break;
                }

            case 10:
                printf("\n\n\nSoftware that translates and executes a high level language program one line at a time is known as a?");
                printf("\n\nA.Compiler\t\tB.Assembler\n\nC.Interpreter\t\tD.Executor");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");
                    quizCounters++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Interpreter");
                    getch();
                    break;
                    goto countingScores;
                }
            }
        }

countingScores:
        system("cls");
        countingScores=(float)quizCounters*100;
        if(countingScores>0.00 && countingScores<1000)
        {
            printf("\n\n\t\t**************** CONGRATULATION *****************");
            printf("\n\t You won $%.2f",countingScores);
            goto go;
        }

        else if(countingScores==1000.00)
        {
            printf("\n\n\n \t\t**************** CONGRATULATION ****************");
            printf("\n\t\t\t\t YOU HAVE WOW ONE THOUSAND TK!!!!!!!!!");
            printf("\n\t\t You won $%.2f",countingScores);
            printf("\t\t Thank You!!");
        }
        else
        {
            printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
            printf("\n\t\t Thanks for your participation");
            printf("\n\t\t TRY AGAIN");
            goto go;
        }

go:
        puts("\n\n Press Y if you want to play next game");
        puts(" Press any key if you want to go main menu");
        if (toupper(getch())=='Y')
            goto game;
        else
        {
            edit_score(countingScores,playername);
            goto mainhome;
        }
    }
    else
    {
        printf("\t\t Invalid Input\n\n");
    }
}

void show_record()
{
    system("cls");
    char name[20];
    float scr;
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&name,&scr);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
    printf("\n\n\t\t*************************************************************");
    fclose(f);
    getch();
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n *************************************************************");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n\n How to play the game:");
    printf("\n ****************************************");
    printf("\n At first you will be ask questions. Each correct answer will get you TK 100!. ");
    printf("\n    You will be asked a total of 10 questions in this round. ");
    printf("\n    You can win up to one thousand tk");
    printf("\n    You will be given four alternatives, and you must select the correct one by pressing a,b,c,d.");
    printf("\n    You will be asked questions incessantly until you provide correct answers.");
    printf("\n\n *************************************************************");

}

void leader_board()
{
    system("cls");
    printf("\n\n\t\t Coming Soon ");
}

void edit_score(float countingScores, char plnm[20])
{
    system("cls");
    float sc;
    char nm[20];
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%f",&nm,&sc);
    if (countingScores>=sc)
    {
        sc=countingScores;
        fclose(f);
        f=fopen("score.txt","w");
        fprintf(f,"%s\n%.2f",plnm,sc);
        fclose(f);
    }
}

