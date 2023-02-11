#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printW();
void printI();
void printS();
main()
{
 system("cls");
 printA();
 printW();
 printA();
 printI();
 printS();
}

void gotoxy(int x , int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printA()
{
 cout<<"  *"<<endl;
 cout<<" ***"<<endl;
 cout<<"*   *"<<endl;
 cout<<"*****"<<endl;
 cout<<"*   *"<<endl;
 cout<<"*   *"<<endl<<endl;
}

void printW()
{
 cout<<"*       *"<<endl;
 cout<<"*   *   *"<<endl;
 cout<<"* *   * *"<<endl;
 cout<<"*       *"<<endl<<endl;
}

void printI()
{
 cout<<"*****"<<endl;
 cout<<"  *  "<<endl;
 cout<<"  *  "<<endl;
 cout<<"*****"<<endl<<endl;
}

void printS()
{
 cout<<"*****"<<endl;
 cout<<"*    "<<endl;
 cout<<"*****"<<endl;
 cout<<"    *"<<endl;
 cout<<"*****"<<endl<<endl;
}