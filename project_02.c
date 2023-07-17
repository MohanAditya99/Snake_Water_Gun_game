#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char pick, char compiler){

    if (pick==compiler)
    {
        return 0;
    }
    else if ((pick=='S' && compiler=='W')||(pick=='W' && compiler=='G')||(pick=='G' && compiler=='S'))
    {
        return 1;
    }
    else{
        return -1;
    }
    
    
}
int main(){
    char pick , compiler;
    srand(time(0));
    int number = rand()%100+1;

    if(number<33){
        compiler = 'S';
        }
    else if(number>33 && number<66){
        compiler = 'W';
    }    
    else{
        compiler = 'G';

    }
    printf("Select any of the following:\n");
    printf("1.'S' for Snake \n");
    printf("2. 'W' for Water \n");
    printf("3.'G' for Gun \n");
    scanf("%c",&pick);

    int result = game(pick,compiler);
    printf("You chose %c and compiler chose %c \n",pick,compiler);

    if (result==0)
    {
        printf("Game Draw \n");
    }
    else if (result==1)
    {
        printf("You Won!! \n");
    }
    else{
        printf("Oops!You Lost \n");

    }

    return 0;
}