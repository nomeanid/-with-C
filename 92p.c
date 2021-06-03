#include <stdio.h>
#include <stdlib.h>
int compare(const void*a, const void*b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if(num1 < num2){
        return 1;
    }
    if(num1 > num2){
        return -1;
    }
    return 0;
    
}
int main(){

    int N,M,K; 
    scanf("%d %d %d",&N, &M, &K);
    int arr[N];
    for(int i = 0; i<N; i++){
        int temp = 0;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    qsort(arr,N,sizeof(arr[0]),compare);
    for(int i = 0; i<N; i++){
        printf("%d ", arr[i]);
    }
    int result = 0;
    int count = 0;
    for(int j = 0; j<M; j++){
        if(count == K){
            result += arr[1];
            count = 0;
        }else{
            result += arr[0];
            count++;
        }

    }
    printf("\nresult = %d", result);
    return 0;
}