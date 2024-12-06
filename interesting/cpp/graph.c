#include<stdio.h>
#include<stdlib.h>
#define Max_vertex 10


typedef struct
{
    int vertex_count,edge_count;
    int matrix[Max_vertex][Max_vertex];
    char data[Max_vertex];
}Graph;

Graph *createGraph()
{
    Graph *graph=(Graph*)malloc(sizeof(Graph));
    graph->vertex_count=graph->edge_count=0;
    for(int i=0;i<Max_vertex;++i)
    {
        for(int j=0;j<Max_vertex;++j)
        {
            graph->matrix[i][j]=0;
        }
    }
    return graph;
}//创建邻接矩阵

void addVertex(Graph *graph,char Element)
{
    if(graph->vertex_count>=Max_vertex)
        return;
    graph->data[graph->vertex_count++]=Element;

}//添加点

void addEdge(Graph *graph,int a,int b)
{
    if(graph->matrix[a][b]==0)
    {
        graph->matrix[a][b]=1;
        graph->matrix[b][a]=1;
        graph->edge_count++;
    }
}

int main()
{
    Graph *graph=createGraph();
    for(char c='A'; c<='D';++c)
        addVertex(graph,c);
    addEdge(graph,0,1);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    addEdge(graph,2,0);
    addEdge(graph,3,0);
    for(int i=0;i<graph->vertex_count;++i)
    {
        for(int j=0;j<graph->vertex_count;++j)
        {
            printf("%d",graph->matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
