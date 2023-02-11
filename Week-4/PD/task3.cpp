#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int, int);
void move(int, int);
main()
{
system("cls");
printMaze();
move(3,3);
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