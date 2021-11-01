#include <iostream>
#include <string.h>
using namespace std;
class Animale{
    char *tip;
    char *rasa;
    int varsta;
    public:
       Animale(char *d);//Constructor
       Animale(char *d,char *r,int v);//Constructor
       void printNume()
       {
           if(tip)
           cout<<"Tip:"<<tip<<"\n";
       } 
       void printRasa()
       {
           if(rasa)
           cout<<"Rasa:"<<rasa<<"\n";
       } 
       void printVarsta()
       {
           if(varsta)
           cout<<"Varsta:"<<varsta<<"\n";
       } 
};
Animale::Animale(char*t)
{
    tip=new char[strlen(t)+1];
     strcpy(tip,t);
}
Animale::Animale(char *t,char *r,int v=0)
{
     tip=new char[strlen(t)+1];
     strcpy(tip,t);
     rasa=new char[strlen(r)+1];
     strcpy(rasa,r);
     varsta=v;
}
int main()
{
    char a1[50],a2[50];
    int v1;
    cout<<"Tipul animalului:";cin>>a1;
    cout<<"Rasa animal:";cin>>a2;
    cout<<"varsta animal:";cin>>v1;
    Animale anim(a1,a2,v1);
    cout<<"A fost declarat animalul:\n";
    anim.printNume();
    anim.printRasa();
    anim.printVarsta();
    return 0;
}