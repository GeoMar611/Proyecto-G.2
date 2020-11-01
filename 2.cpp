#include <iostream>
#include <sstream>
#include <windows.h>
#include <stdio.h>
using namespace std;

void Insertar(string&);
void Traduccion(string);
void Menu()
{
   std::cout<<"\t____________________________________\n";
   std::cout<<"\t|                                  |\n";
   std::cout<<"\t|                                  |\n";
   std::cout<<"\t|                                  |\n";
   std::cout<<"\t============ TRADUCTOR =============\n\n";
   std::cout<<"\t|                                  |\n";
   std::cout<<"\t|                                  |\n";
   std::cout<<"\t|__________________________________|\n";
}
int main()
{
   system("color 04");
   string String = " ";   
   Menu();
   Insertar(String);
   Traduccion(String);  
   std::cin.get();
   return 0;
}
void Insertar(string &String){
 std::cout<<"\tIngresa el codigo: \n\n";
 getline(cin,String);
} 
void Traduccion(string String){
 string token;
 istringstream iss(String);
 std::cout<<"\n\tEl codigo traducido es: \n\n ";
 stringstream Traduccion;
 while ( getline(iss, token, ' ') ){
  if(strcmp(token.c_str(),"asm")== 0)
   cout << " asm";
   else if(strcmp(token.c_str(),"()")== 0)
   cout << "()";
   else if(strcmp(token.c_str(),"main")== 0)
   cout << "menu";
   else if(strcmp(token.c_str(),"{}")== 0)
   cout << "({}";
   else if(strcmp(token.c_str()," ")== 0)
   cout << " ";
   else if(strcmp(token.c_str(),"#include")== 0)
   cout << "incluir ";
   else if(strcmp(token.c_str(),"==")== 0)
   cout << "==";
   else if(strcmp(token.c_str(),"<<")== 0)
   cout << " <<";
   else if(strcmp(token.c_str(),";")== 0)
   cout << ";\n";
   else if(strcmp(token.c_str(),">>")== 0)
   cout << " >>";
  else if(strcmp(token.c_str(),"auto")== 0)
   cout << " automatico";
  else if(strcmp(token.c_str(),"bool")== 0)
   cout << " tipo logico";
  else if(strcmp(token.c_str(),"break")== 0)
   cout << " quebrar";
  else if(strcmp(token.c_str(),"case")== 0)
   cout << " caso";
  else if(strcmp(token.c_str(),"catch")== 0)
   cout << " captura";
  else if(strcmp(token.c_str(),"char")== 0)
   cout << " carbonizarse";
  else if(strcmp(token.c_str(),"class")== 0)
   cout << " clase";
  else if(strcmp(token.c_str(),"const_cast")== 0)
   cout << " constante emitir";
  else if(strcmp(token.c_str(),"continue")== 0)
   cout << " continuar";
  else if(strcmp(token.c_str(),"default")== 0)
   cout << " defecto";
  else if(strcmp(token.c_str(),"delete")== 0)
   cout << " borrar";
  else if(strcmp(token.c_str(),"do")== 0)
   cout << " hacer";
  else if(strcmp(token.c_str(),"double")== 0)
   cout << " doble";
  else if(strcmp(token.c_str(),"dynamic_cast")== 0)
   cout << " reparto dinamico";
  else if(strcmp(token.c_str(),"else")== 0)
   cout << " mas";
  else if(strcmp(token.c_str(),"enum")== 0)
   cout << " enumerar";
  else if(strcmp(token.c_str(),"explicit")== 0)
   cout << " explicito";
  else if(strcmp(token.c_str(),"break")== 0)
   cout << " quebrar";
  else if(strcmp(token.c_str(),"extern")== 0)
   cout << " externo";
  else if(strcmp(token.c_str(),"false")== 0)
   cout << " falso";
  else if(strcmp(token.c_str(),"float")== 0)
   cout << " flotadora";
  else if(strcmp(token.c_str(),"for")== 0)
   cout << " para";   
  else if(strcmp(token.c_str(),"friend")== 0)
   cout << " amigo";
  else if(strcmp(token.c_str(),"goto")== 0)
   cout << " ir";
  else if(strcmp(token.c_str(),"if")== 0)
   cout << " si";  
   else if(strcmp(token.c_str(),"inline")== 0)
   cout << " en linea";
    else if(strcmp(token.c_str(),"int")== 0)
   cout << " entero";
    else if(strcmp(token.c_str(),"long")== 0)
   cout << " largo";
    else if(strcmp(token.c_str(),"mutable")== 0)
   cout << " mudable";
    else if(strcmp(token.c_str(),"namespace")== 0)
   cout << " espacio de nombre";
    else if(strcmp(token.c_str(),"new")== 0)
   cout << " nuevo";
    else if(strcmp(token.c_str(),"operator")== 0)
   cout << " operador";
    else if(strcmp(token.c_str(),"private")== 0)
   cout << " privado";
    else if(strcmp(token.c_str(),"protected")== 0)
   cout << " protegido";
    else if(strcmp(token.c_str(),"public")== 0)
   cout << " nuevo";
    else if(strcmp(token.c_str(),"register")== 0)
   cout << " registrar";
    else if(strcmp(token.c_str(),"reinterpret_cast")== 0)
   cout << " reinterpretar reparto";
   else if(strcmp(token.c_str(),"return")== 0)
   cout << " regreso";
    else if(strcmp(token.c_str(),"short")== 0)
   cout << " corto";
    else if(strcmp(token.c_str(),"signed")== 0)
   cout << " firmada";
    else if(strcmp(token.c_str(),"sizeof")== 0)
   cout << " tamaño de ";
   else if(strcmp(token.c_str(),"static")== 0)
   cout << " estatico";
    else if(strcmp(token.c_str(),"static_cast")== 0)
   cout << " elenco estatico";
    else if(strcmp(token.c_str(),"struct")== 0)
   cout << " estructura";
    else if(strcmp(token.c_str(),"switch")== 0)
   cout << " cambiar";
    else if(strcmp(token.c_str(),"template")== 0)
   cout << " modelo";
    else if(strcmp(token.c_str(),"this")== 0)
   cout << " esto";
    else if(strcmp(token.c_str(),"throw")== 0)
   cout << " lanzar";
    else if(strcmp(token.c_str(),"true")== 0)
   cout << " verdad";
    else if(strcmp(token.c_str(),"try")== 0)
   cout << " tratar";
    else if(strcmp(token.c_str(),"typedef")== 0)
   cout << " nombre alternativo";
    else if(strcmp(token.c_str(),"typeid")== 0)
   cout << " tipo de id";
    else if(strcmp(token.c_str(),"typename")== 0)
   cout << " tipo de nombre";
    else if(strcmp(token.c_str(),"union")== 0)
   cout << " union";
    else if(strcmp(token.c_str(),"unsigned")== 0)
   cout << " no firmado";
    else if(strcmp(token.c_str(),"using")== 0)
   cout << " usando";
    else if(strcmp(token.c_str(),"virtual")== 0)
   cout << " virtual";
   else if(strcmp(token.c_str(),"void")== 0)
   cout << " vacia";
    else if(strcmp(token.c_str(),"volatile")== 0)
   cout << " volatil";
    else if(strcmp(token.c_str(),"while")== 0)
   cout << " mientras";
    else if(strcmp(token.c_str(),"cout")== 0)
   cout << " entrada";   
    else if(strcmp(token.c_str(),"cin")==0)
   cout <<" salida";  
    else if(strcmp(token.c_str(),"endl")==0)
   cout <<" finalizar";
 }
 if(iss.fail());
 

}


