 

#include <stdio.h>

int main(){
    int ch;
    for (int i = 1; i<=4; i++)
    {   
        ch=1;
        for (int j = 1; j<=7; j++)
        {
            if(j<=5-i||j>=3+i){
                printf("%d",ch);
                 
            }else
                printf(" ");

            j<4?ch++:ch--;    
        }

        printf("\n");  
    }
    

    
    return 0;
}   