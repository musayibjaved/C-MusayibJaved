#include<iostream>
using namespace std;
class student
{
   public:
   int roll,sem,total;
   int physics,chemistry,maths,english,phe;
   char name[20],gender[20],grade[20];
   float per;
public:
   void input_detail()
{
    cout<<"enter roll number";cin>>roll; cout<<endl;
     cout<<"enter name"; cin>>name; cout<<endl;
     cout<<"enter semester";cin>>sem; cout<<endl;
     cout<<"enter gender"; cin>>gender; cout<<endl;
     cout<<"enter marks of the physics";cout<<endl;
     cin>>physics;
     cout<<"enter marks of the chemistry";cout<<endl;
     cin>>chemistry;
     cout<<"enter marks of the maths";cout<<endl;
     cin>>maths;
     cout<<"enter marks of the english";cout<<endl;
     cin>>english;
     cout<<"enter marks of the phe";cout<<endl;
     cin>>phe;
     total=(physics+chemistry+maths+english+phe);
     per=((total*100.0)/500);
     cout<<"the total marks obtained by the student are="<<total<<endl;
     cout<<"percentage of the student is="<<per<<endl;
     if(per>=80)
     cout<<"the grade is A";
     if (per>=70&&per<80)
     cout<<"the grade is B";
     if (per>=60&&per<70)
     cout<<"the grade is C";
     if (per>=50&&per<60)
     cout<<"the grade is D";
     if (per>=40&&per<50)
     cout<<"the grade is E";
     if (per<40)
     cout<<"fail";
     }
};
int main()
{
student s1,s2,s3,s4,s5;
s1.input_detail();
s2.input_detail();
s3.input_detail();
s4.input_detail();
s5.input_detail();
}
