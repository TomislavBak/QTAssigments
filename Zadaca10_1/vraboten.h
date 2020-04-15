#ifndef VRABOTEN_H
#define VRABOTEN_H
class Vraboten{
public:
    Vraboten(char *, char *, int ); // konstruktor
   void postavi_Vraboten(char *,char *,int);
   void prikazi_Podatoci()const;
   Vraboten(Vraboten const&);// copy konstruktor (go koristam za da ne mi se prebrishuvaat podatocite vo vektorot)
   ~Vraboten(); // destruktor

   protected: // protected za da mozam da pristapuvam do niv vo nasledenite klasi vo  copy konstruktorite
   char *ime;
   char *prezime;
   int godina;
};

class Profesor:Vraboten{
public:
    Profesor(char *,char*,int,char*,char*,int);
    void postavi_Profesor(char*,char*,int);
    void prikazi_Profesor()const;
    Profesor(Profesor const&);
    ~Profesor();

private:
    char *zvanje_profesor;
    char *oblast;
    int br_predmeti;
};


class Asistent:Vraboten{
public:
    Asistent(char *,char*,int,char*,char*,int);
    void postavi_Asistent(char*,char*,int);
    void prikazi_Asistent()const;
    Asistent(Asistent const&);
    ~Asistent();

private:
    char *zvanje_asistent;
    char *mentor;
    int br_predmeti_ast;
};


class Demonstrator:Vraboten{
public:
    Demonstrator(char *,char*,int,int,int);
    void postavi_Demonstrator(int,int);
    void prikazi_Demonstrator()const;
    Demonstrator(Demonstrator const&);
    ~Demonstrator();

private:
    int vreme_od;
    int vreme_do;

};


#endif // VRABOTEN_H
