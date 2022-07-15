/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void first_innings(char y[10]);
void second_innings(char y[10],char x[10]);
int score,wickets;
char team1[10],team2[10];
int overs,balls,toss,target,bat_first,p_balls;
int main()
{
    printf("**********************************************\n");
    printf("\t    Cricket Scorer\n");
    printf("**********************************************\n");
    printf("\n Press ENTER to continue\n");
    getchar();
    system("clear");
    printf("Enter name of Team1 : ");
    scanf("%s",team1);
    printf("Enter name of Team2 : ");
    scanf("%s",team2);
    printf("\nEnter the number of overs :");
    scanf("%d",&overs);
    balls=overs*6;
    system("clear");
    printf("\n\n*********Toss Time**********");
    printf("\n\nwhich team is batting first ? \n[1]%s\n[2]%s\n\n",team1,team2);
    scanf("%d",&toss);
    system("clear");
    switch(toss){
        case 1:printf("%s is batting first",team1);
        first_innings(team1);
        bat_first=1;
        break;
        case 2: printf("%s is batting first",team2);
        first_innings(team2);
        bat_first=2;
        break;
        default: printf("Enter the valid choice");
        
    }
    if(bat_first==1){
        second_innings(team2,team1);
    }
    else
    {
        second_innings(team1,team2);
    }

    return 0;
}

void first_innings(char y[10])
{
    score=0,wickets=0,p_balls=0;
    int i,r;
    float runrate;
    printf("\n\n******Scorecard******\n\n");
    printf("******Frist innings******\n\n");
    for(i=0;i!=balls;i++){
    printf("\n\n\nwhat happens on Last ball....");
    printf("\n\n[1] dot ball\n[2] 1 run\n[3] 2 runs\n[4] 3 runs\n[5] 4 runs \n[6] 6 runs \n[7] Wicket  \n\n");
    scanf("%d",&r);
    switch(r){
        case 1:
        score+=0;
        break;
        case 2:
        score+=1;
        break;
        case 3:
        score+=2;
        break;
        case 4:
        score+=3;
        break;
        case 5:
        score+=4;
        break;
        case 6:
        score+=6;
        break;
        case 7:
        wickets+=1;
        break;
        default: printf("enter valid choice");
    }
    getchar();
    system("clear");
    p_balls+=1;
    runrate=score/overs;
    printf("\n\n Score --%s|%d-%d|\t Balls :- %d\tRR:-%.2f  ",y,score,wickets,p_balls,runrate);
    if(wickets==10){
        target=score+1;
    printf("\n\n\n\n\t\tTarget : %d in %d over",target,overs);
    break;
    
    }
    }
    system("clear");
    target=score+1;
    printf("\n\n\n\n\n\t\tTarget: %d in %d over",target,overs);
}

void second_innings(char y[10],char x[10])
{
      score=0,wickets=0,p_balls=0;
    int i,r;
    float runrate;
    printf("\n\n\n\n******Second innings********");
    printf("\n\n\n %s is battting",y);
    printf("\n\n******Scorecard******\n\n");
    for(i=0;i!=balls;i++){
    printf("\n\n\nwhat happens on Last ball....");
    printf("\n\n[1] dot ball\n[2] 1 run\n[3] 2 runs\n[4] 3 runs\n[5] 4 runs \n[6] 6 runs \n[7] Wicket  \n\n");
    scanf("%d",&r);
    switch(r){
        case 1:
        score+=0;
        break;
        case 2:
        score+=1;
        break;
        case 3:
        score+=2;
        break;
        case 4:
        score+=3;
        break;
        case 5:
        score+=4;
        break;
        case 6:
        score+=6;
        break;
        case 7:
        wickets+=1;
        break;
        default: printf("enter valid choice");
    }
    
    getchar();
    system("clear");
     p_balls+=1;
    runrate=score/overs;
    printf("\n\n Score --%s |%d-%d|\tBalls:- %d\tRR:- %.2f ",y,score,wickets,p_balls,runrate);
    printf("\n %s need %d to win in %d balls",y,target-score,balls-p_balls);
   if(wickets==10 || score>target || balls==p_balls)
    {
        if(score>target){
        printf("\n\n\n\n\t***** %s win the Match *****",y);
        }
        else{
        printf("\n\n\n\n\t***** %s Win the Match *****",x);
        }
       break;
    }
    }
}






