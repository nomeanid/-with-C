#include <stdio.h>
typedef struct player{
    int x;
    int y;
    int direction; // 0 = 북 3= 서  2 = 남 1 = 동
}player;

typedef struct point{
    int dx;
    int dy;
}point;


int main(){

    int A,B; // A = 북쪽에서 떨어진 칸의 개수 B = 서쪽
    player player;
    point movement[4] = {{-1,0},{0,1},{1,0},{0,-1}};//북 동 남 서
    scanf("%d %d", &A,&B);
    int arr[A][B];
    int player_movearr[A][B];

    scanf("%d %d %d",&player.x,&player.y,&player.direction);
    for(int i = 0; i<A;i++){
        for(int j = 0; j<B; j++){
            scanf("%d",&arr[i][j]);
            player_movearr[i][j] = 0;   
        }
    }
    int turn_time = 0;
    int count = 0;
    int cx, cy;
    while (1){
        player.direction--;
        if(player.direction == -1){
            player.direction = 3;
        }
        
        cx = player.x + movement[player.direction].dx;
        cy = player.y + movement[player.direction].dy;
     //   printf("player.d = %d // player.x = %d // player.y = %d // cx = %d // cy = %d\n",player.direction,player.x,player.y,cx,cy);
        if(arr[cx][cy] == 0 && player_movearr[cx][cy] == 0){
            player_movearr[cx][cy] = 1;
            player.x = cx;
            player.y = cy;
            turn_time = 0;
            count += 1;
            continue;
        }else{
            turn_time +=1;
        }
        if(turn_time == 4){
            cx = player.x - movement[player.direction].dx;
            cy = player.y - movement[player.direction].dy;
            if(arr[cx][cy] == 0){
                player.x = cx;
                player.y = cy;
            }else{
                break;
            }
            turn_time = 0;
        }
    }
    printf("%d", count);

    return 0;
}