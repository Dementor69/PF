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
int x=3;
while(true)
 {
  if(x<22)
  {
   move(x,3);
   x=x+1;
  }
  if(x==22)
  {
   gotoxy(x-1,3);
   cout<<" ";
   x=3;
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
 gotoxy(x-1, y);
 cout<<" ";
 gotoxy(x, y);
 cout<<"P";
 Sleep(400);
}