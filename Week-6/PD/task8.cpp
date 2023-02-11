#include<iostream>
using namespace std;
int findBorder(int, int, int);
main()
{
    int height, xCor, yCor;
    cout<<"Enter the Height: ";
    cin>>height;
    cout<<"Enter x cordinate: ";
    cin>>xCor;
    cout<<"Enter y cordinate: ";
    cin>>yCor;
    findBorder(height, xCor, yCor);
}

int findBorder(int height,int xCor,int yCor)
{
    int x_boundary, y_boundary;
    int base=height*3;
    int roof=height*4;
    if((xCor==0||xCor==base)&&(yCor>=0&&yCor<=height))
    {
        cout<<"Border";
        return 0;    
    }
    if((yCor==0)&&(xCor>=0&&xCor<=base))
    {
        cout<<"Border";
        return 0;    
    }
    if((yCor==height)&&((xCor>=0&&xCor<=height)||(xCor>=height*2&&xCor<=base)))
    {
        cout<<"Border";
        return 0;    
    }
    if((xCor==height||xCor==height*2)&&(yCor>=height||yCor<=height*2))
    {
        cout<<"Border";
        return 0;    
    }
    if((yCor== roof)&&(xCor>=height&&xCor<=height*2))
    {
        cout<<"Border";
        return 0;    
    }
    if((xCor>0&&xCor<base)&&(yCor>0&&yCor<height))
    {
        cout<<"Inside";
        return 0;    
    }
    if((xCor>height&&xCor<height*2)&&(yCor>0&&yCor<roof))
    {
        cout<<"Inside";
        return 0;    
    }

    cout << "Outside";
    return 0;
}
