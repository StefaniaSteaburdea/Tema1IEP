#include <iostream>
#include <string.h>
using namespace std;
class Animale{
    char *tip;
    char *rasa;
    int varsta;
    public:
       Animale(char *d,char *r,int v);//Constructor
       Animale(const Animale &obj);//CopyConstructor
       ~Animale();//destructor
       Animale & operator=(const Animale&)=delete;//disable copy Assignment
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
Animale::Animale(char *t,char *r,int v=0)
{
     tip=new char[strlen(t)+1];
     strcpy(tip,t);
     rasa=new char[strlen(r)+1];
     strcpy(rasa,r);
     varsta=v;
}
Animale::Animale(const Animale &obj)
{
   tip=new char[strlen(obj.tip)+1];
   strcpy(tip,obj.tip);
   rasa=new char[strlen(obj.rasa)+1];
   strcpy(rasa,obj.rasa);
   varsta=obj.varsta;
}
Animale::~Animale()
{
    if(tip)
    delete tip;
    if(rasa)
    delete rasa;
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

    Animale anim2(anim);

    char an[]="caine",r[]="Husky";
    int v=2;
    Animale anim3(an,r,v);
    cout<<"A fost declarat animalul:\n";
    anim3.printNume();
    anim3.printRasa();
    anim3.printVarsta();
    return 0;
}