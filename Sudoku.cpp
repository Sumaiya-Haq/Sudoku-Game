#include<iostream>
using namespace std;

void Board_Size(int board[9][9],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<board[i][j]<<" ";
            if((j+1)%3==0&&j!=size-1)
            {
                cout<<"| ";
            }
        }
            cout<<endl;
            if((i+1)%3==0&&i!=size-1)
            {
                cout<<"-------------------"<<endl;
            }
         }
}
int number_valid(int board[9][9]){
    int row,col;
    int num,size;
    for (int m = 0; m <size; m++)
    {
       if(board[row][x]==num||board[x][col]==num){
        return 0;
       }
    }
    int first_row=row-row%3;
    int first_col=col-col%3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            if(board[i+first_row][j+first_col]==num){
                return 0;
            }
        }
    }
   return 1; 
}

int find_empty_cell(int board[9][9],int &row,int &col,int size)
{
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
        {
            if(board[i][j]==0)
            {
                row=i;
                col=j;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{

}