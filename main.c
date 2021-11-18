#include <stdio.h>
#include <stdlib.h>


void vote1(char cinElection[8][8])
    {
        char namePresident[20][20];
        int nbrPresident, nbrElection, i, vote;
        do
        {
           //choice of electors
        printf("Cin elector choices the number of president %d :\n ",namePresident[i]);
        scanf("%d",&vote);
        if(vote>0 && vote<=nbrPresident){
						    	vote+=1;
						    	i++;
							}else{
						        printf("(Please ! repeate your vote) ");
						         }
        }
        while(i<=nbrPresident);

    }

int main()
{
    int nbrPresident,nbrElection,nbrVote,i,j,vote;
    char namePresident[20][20],cinElection[8][8];
    //started to coding
    printf("*************** Election presidentielle *************** \n\n");
    printf("Welcome Mr/M in my new application \n \n");
    //check number of presidents
    do
        {
          printf("Please enter the number of president ! \n");
          scanf("%d",&nbrPresident);
        }
    while(nbrPresident<5);

    // name of presidents
   for(i=1;i<= nbrPresident; i++){
        printf("enter name of president :\n");
        scanf("%s",namePresident[i]);
    }
    //check number of Electors
    do
        {
          printf("Please enter the number of electors! \n");
          scanf("%d",&nbrElection);
        }
    while(nbrElection<10);
    // cin of electors
   for(i=1;i<= nbrElection; i++){
        printf("enter the cin of elector : \n");
        scanf("%s",cinElection[i]);
    }
    for(j = 1;j<=nbrPresident;j++)
        {
        printf ("%d- the president N %d est : %s\n",j,j,namePresident[j]);
        }

    // tower number 1
   vote1(cinElection[8][8]);

    return 0;
}

