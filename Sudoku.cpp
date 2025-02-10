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
bool number_valid(int board[9][9]){
    int row,col;
    int num,size;
    
}
int main()
{

}