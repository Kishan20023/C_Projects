#include<stdio.h>

#define CANDIDATE_COUNT
#define c1 "Rani"
#define c2 "Arun"
#define c3 "Kumar"
#define c4 "Praveena"
struct vote{
    int votesCount1,votesCount2,votesCount3,votesCount4,notavotes;
}v;
void castVote();
void votesCount();
void getLeadingCandidate();
int main()
{
v.votesCount1=0;
v.votesCount2=0;
v.votesCount3=0;
v.votesCount4=0;
v.notavotes=0;
int i;
int choice;

do{
printf("\n\n ###### Welcome to Election/Voting 2021 #####");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n THE END");
}
}while(choice!=0);

//hold the screen
getchar();

return 0;
}

void castVote(){
int choice;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", c1);
printf("\n 2. %s", c2);
printf("\n 3. %s", c3);
printf("\n 4. %s", c4);
printf("\n 5. NOTA");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice){
    case 1: v.votesCount1++; break;
    case 2: v.votesCount2++; break;
    case 3: v.votesCount3++; break;
    case 4: v.votesCount4++; break;
    case 5: v.notavotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
             //hold the screen
             getchar();
}
printf("\n thanks for vote !!");
}

void votesCount(){
printf("\n\n ##### Voting Statics ####");
printf("\n %s - %d ", c1, v.votesCount1);
printf("\n %s - %d ", c2, v.votesCount2);
printf("\n %s - %d ", c3, v.votesCount3);
printf("\n %s - %d ", c4, v.votesCount4);
printf("\n NOTA - %d ",v.notavotes); 
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(v.votesCount1>v.votesCount2 && v.votesCount1>v.votesCount3 && v.votesCount1 >v.votesCount4)
    printf("[%s]",c1);
    else if (v.votesCount2>v.votesCount3 && v.votesCount2>v.votesCount4 && v.votesCount2 >v.votesCount1)
    printf("[%s]",c2);
    else if(v.votesCount3>v.votesCount4 && v.votesCount3>v.votesCount2 && v.votesCount3 >v.votesCount1)
    printf("[%s]",c3);
    else if(v.votesCount4>v.votesCount1 && v.votesCount4>v.votesCount2 && v.votesCount4 >v.votesCount3)
    printf("[%s]",c4);
    else
    printf("----- Warning !!! No-win situation----");    
    
    
    
}