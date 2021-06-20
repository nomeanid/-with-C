#include <iostream>
#include <stack>
#include <vector>
#define INF 999999
using namespace std;
void deaph_fist_search(int graph[9][9],int v, bool *visit){
    visit[v] = true;
    std::cout << v << " ";
    for(int i = 0; i<9; i++){
        if(visit[i] == false && graph[v][i] != INF){
            deaph_fist_search(graph,i,visit);
        }
    }
}
int main(){
    stack<int> s;
    int graph[9][9] = {
        {INF,INF,INF,INF,INF,INF,INF,INF,INF},
        {INF,INF,2,3,INF,INF,INF,INF,8}, // 1 -> 2 , 1-> 3 , 1-> 8
        {INF,1,INF,INF,INF,INF,INF,7,INF},
        {INF,1,INF,INF,4,5,INF,INF,INF},
        {INF,INF,INF,3,INF,5,INF,INF,INF},
        {INF,INF,INF,3,4,INF,INF,INF,INF},
        {INF,INF,INF,INF,INF,INF,INF,7,INF},
        {INF,INF,2,INF,INF,INF,6,INF,8},
        {INF,1,INF,INF,INF,INF,INF,7,INF}
    };
    bool visit[9] = {false};
    deaph_fist_search(graph,1,visit);

    return 0;
}