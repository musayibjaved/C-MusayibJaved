#include<iostream>
using namespace std;
class integer
{
int a,b;   //member data
public:
    integer()   //default constructor
    {
        a=0;b=0;
    }


   integer(int i, int j)   // parametric constructor
        {
        a=i;
        b=j;
        }
add()
{
    cout<<(a+b);

}
/*~integer()
{
    cout<<endl<<"we are inside body of destructor";
}   */
};
main()
{
integer i;
integer i1(10,12);
i1.add();
}
//