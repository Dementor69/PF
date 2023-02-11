#include <iostream>
using namespace std;
string gradeCalculator(float percentage);
main()
{
    float english, maths,chemistry, social, biology, obtained, percentage;
    string name, grade;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Obtained Marks in English: ";
    cin>>english;
    cout<<"Enter Obtained Marks in Maths: ";
    cin>>maths;
    cout<<"Enter Obtained Marks in Chemistry: ";
    cin>>chemistry;
    cout<<"Enter Obtained Marks in Social Science: ";
    cin>>social;
    cout<<"Enter Obtained Marks in Biology: ";
    cin>>biology;
    obtained=english+maths+chemistry+social+biology;
    percentage=(obtained/500)*100;
    grade=gradeCalculator(percentage);
    cout<<"Student Name: "<<name<<endl;
    cout<<"Total Marks: 500"<<endl;
    cout<<"Obtained Marks: "<<obtained<<endl;
    cout<<"Percentage of the Student: "<<percentage<<endl;
    cout<<"Grade: "<<grade;
}

string gradeCalculator(float percentage)
{
    string grade;
    if(percentage>90)
    grade="A+";
    if(percentage>80&&percentage<=90)
    grade="A";
    if(percentage>70&&percentage<=80)
    grade="B+";
    if(percentage>60&&percentage<=70)
    grade="B";
    if(percentage>50&&percentage<=60)
    grade="C";
    if(percentage>40&&percentage<=50)
    grade="D";
    if(percentage<40)
    grade="F";
    return grade;
}