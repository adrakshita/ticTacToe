#include<stdio.h>
#include<stdlib.h>
void show();
void playero();
void playerx();
void initial();
void check();
int i,j,m,n,x,y,choice;
char a[3][3];
void main(){
    printf("TIC TAC TOE(Made by Rakshita Adhyapak)\n");
    printf("Instructions:\n");
    printf("Move=Enter row and column index\n");
    initial();
    while(5){
    printf("Make a move:Player X\n");
    playerx();
    check();
    printf("Make a move:Player O\n");
    playero();
    check();
    }
    }
    void playerx(){
        scanf("%d %d",&m,&n);
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(a[m-1][n-1]==' ')   
                a[m-1][n-1]='X';
            }
        }
        show();
    }
    void playero(){
        scanf("%d %d",&x,&y);
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){ 
                if(a[x-1][y-1]==' ')  
                a[x-1][y-1]='O';
            }
        }
        show();
    }
   void show(){
    for(int i=0;i<3;i++){
        printf(" ---|--|---\n");
         printf(" | %c| %c| %c|\n",a[i][0],a[i][1],a[i][2]);
   }
   printf(" ---|--|--\n");
   }
   void initial(){
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=' ';
            }
        }
        show();
    }
    void check(){
        for(i=0;i<3;i++){
            if(a[i][0]=='X'&& a[i][1]=='X'&& a[i][2]=='X'||a[0][i]=='X'&& a[1][i]=='X'&& a[2][i]=='X')
            {
                printf("X wins\n"); 
                exit(0);
            }            
            else if(a[i][0]=='O'&& a[i][1]=='O'&& a[i][2]=='O'||a[0][i]=='O'&& a[1][i]=='O'&& a[2][i]=='O')
            {
                printf("O wins\n");
                exit(0);
                
            }
        }
        if(a[0][0]=='X'&& a[1][1]=='X'&& a[2][2]=='X'||a[2][0]=='X'&& a[1][1]=='X'&& a[0][2]=='X')
            {
                printf("X wins\n"); 
                exit(0);
            }   
        else if(a[0][0]=='O'&& a[1][1]=='O'&& a[2][2]=='O'||a[2][0]=='O'&& a[1][1]=='O'&& a[0][2]=='O')
            {
               printf("O wins\n");
                exit(0);
            }
    }