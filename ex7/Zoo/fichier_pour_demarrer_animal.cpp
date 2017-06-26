#include <iostream>
#include <string>
using namespace std;

class Animal
{
private :
	string nom ;


public :
	Animal(string nom= "animal")
  { this->nom=nom ;
    cout<<"creation de l'animal"<<nom<<(int)(this);
	  }
	virtual void Manger()
	  { cout << " un animal mange \n " ;
	  }
	virtual ~Animal()
	  {  cout<<"destruction de l'animal"<<(int)(this);
	  }
} ;

//Un f‚lin est un animal
class Felin : public Animal
{
private :
      // pas de donn‚e private
public:
	Felin(string name="felin"): Animal(name)
	 {cout<<"creation du felin"<<(int)(this); }
	virtual void Manger()
	   { cout << " les f‚lins mangent de la viande \n " ;
	   }
	virtual ~Felin() {cout<<"destruction du felin"<<(int)(this); }
} ;

//un chat est un f‚lin
class Chat : public Felin
{
private :
     int tatouage ; // num‚ro de tatouage
public:
     Chat(string name="chat", int tatou=0): Felin(name)
       { tatouage=tatou;
         cout<<"creation du chat numero"<<tatouage<<(int)(this);
       }
	void Afficher()
	{cout <<"je suis un chat\n";
	}
    void Manger()
	{ cout << " les chats mangent des souris \n " ;
	}
	virtual ~Chat() {cout<<"destruction du chat"<<(int)(this); }

};

main()
{
cout << endl<<"********  Animal ***************"<<endl ;
Animal Dinosaure ("Pterodactyl") ;
cout << endl;
Dinosaure.Manger();
cout << endl<<"*********** F‚lin ************"<<endl ;
Felin T("Tigre") ;
cout << endl;
T.Manger();
cout << endl<<"********** Chat *************"<<endl ;
Chat C("Garfield",007) ;
cout << endl;
C.Manger();
cout << endl<<"***********************"<<endl ;
C.Felin::Manger();
cout << endl<<"***********************"<<endl ;


Animal *TRIO[3];
TRIO[0]= new Chat;
TRIO[1]=new Animal("zebre");
TRIO[2]=new Felin("tigre");

TRIO[2]->Manger();
delete TRIO[0];
delete TRIO[2];
delete TRIO[1];

}

