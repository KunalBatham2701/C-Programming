#include <stdio.h>
int main()
{   
     int i,user,rand(),pointu=1,pointc=1,opt;
     start:
    printf("1.rock\t2.paper\t3.scissor\n");
    
    while(pointc<=5||pointu<=5)
        { 
        scanf("%d",&user);
            i=rand()%3+1;
        printf("the computer choose %d\n",i);
            if (user==i)
            {
                printf("match draw\n");
            }
            else if (user==1&&i==2)
            {
                printf("%d point for computer\n",pointc);
                pointc+=1;
                    if (pointc>5)
                    {
                        
                        goto computer;
                    }
                    else
                    {
                        continue;
                    }
                    
            }
            else if (user==1&&i==3)
            {
                printf("%d point for user\n",pointu);
                pointu+=1;
                    if (pointu>5)
                    {
                        
                        goto user;
                    }
                    else
                    {
                        continue;
                    }
                    
            }
            else if (user==2&&i==1)
            {
                printf("%d point for user\n",pointu);
                pointu+=1;
                    if (pointu>5)
                    {
                        
                        goto user;
                    }
                    else
                    {
                        continue;
                    }
            }
            else if (user==2&&i==3)
            {
                printf("%d point for computer\n",pointc);
                pointc+=1;
                    if (pointc>5)
                    {
                        
                        goto computer;
                    }
                    else
                    {
                        continue;
                    }
            }
            else if (user==3&&i==2)
            {
                printf("%d point for user\n",pointu);
                pointu+=1;
                    if (pointu>5)
                    {
                        
                        goto user;
                    }
                    else
                    {
                        continue;
                    }
            }
            else if (user==3&&i==1)
            {
                printf("%d point point for computer\n",pointc);
                pointc+=1;
                    if (pointc>5)
                    {
                        
                        goto computer;
                    }
                    else
                    {
                        continue;
                    }
            }
            
            
        }
        user:
        printf("user wins\n");
        goto end;
        computer:
        printf("computer wins\n");
    end:  
    printf("1.play again\t2.exit\n");
    scanf("%d",&opt); 
    if(opt==1)
    {
        pointc=1;
        pointu=1;
        goto start;
    } 
    else
    {
        printf("exit the game\n");
    }  
    
return 0;
}