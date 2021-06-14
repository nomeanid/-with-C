#include <stdio.h>
#include <stdlib.h>
struct step{
    int row;
    int col;
}step;
int main(){
    char* input = malloc(sizeof(char*)*2);
    
    scanf("%s",input);
    int row = input[1] - 48;
    int column = input[0] - 96;
    struct step s[8] = {{-2,-1},{-2,1},{2,1},{2,-1},{-1,2},{-1,-2},{1,2},{1,-2}};
    // (-2,-1) (-2,+1)
    // (+2, +1) (+2, -1)
    // (-1,+2) (-1, -2) 
    // (+1, +2) (+1, -2)

   // printf(" row = %d \n col = %d",row,column);
    // for (int i = 0; i<8; i++){
    //     printf("%d %d\n", s[i].row, s[i].col);
    // }
    for(int i = 0 ; i<8; i++){
        int next_row = row + s[i].row;  
        int next_col = column + s[i].col;

        if( (next_row >= 1 && next_row <= 8) && (next_col>=1 && next_col<=8)){
            printf("(%d,%d)\n",next_row,next_col);
        }
        
    }

    return 0;
}