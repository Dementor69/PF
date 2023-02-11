#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void move(int x, int y);
main()
{
system("cls");
printMaze();
int y=2;
while(true)
 {
  if(y<8)
  {
   move(1,y);
   y=y+1;
  }
  if(y==7)
  {
   gotoxy(1,y-1);
   cout<<" ";
   y=2;
  }
 }
}

void printMaze()
{
 cout<<"************************"<<endl;
 cout<<"*                      *"<<endl;
 cout<<"*                      *"<<endl;
 cout<<"*                      *"<<endl;
 cout<<"*                      *"<<endl;
 cout<<"*                      *"<<endl;
 cout<<"*                      *"<<endl;
 cout<<"************************"<<endl;
}

void gotoxy(int x , int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void move(int x, int y)
{
 gotoxy(x, y-1);
 cout<<" ";
 gotoxy(x, y);
 cout<<"P";
 Sleep(400);
}