#include <iostream>
using namespace std;
int main(){
    // Array = arreglo, coleccion o matriz
    // Se utilizan para almacenar varios valores en una sola variable

    //  int nota1,nota2,nota3,nota4; se reemplazara con
    //  int notas[4]={80,65,60,75}; //el indice o posicion del arreglo inicia en 0 ; en este caso 0,1,2,3
   /*
    notas[0]=80;
    notas[1]=65;
    notas[2]=60;
    notas[3]=75;
    */

    /*
    cout<<notas[0]<<endl;
    cout<<notas[1]<<endl;
    cout<<notas[2]<<endl;
    cout<<notas[3]<<endl;

    for (int i=0,i<=3,i++){
        cout<<notas[i]<<endl;
    }

    for (int i=0,i<4,i++){
        cout<<notas[i]<<endl;
    }
 

    for (int i : notas){
        cout<<i<<endl;
    }
    
    notas[2]=70;
    cout<<"Valor modificado: (2)"<<notas[2]<<endl;
   */

   /* int tam=0,suma=0,promedio=0;
    int notas[tam];
    cout<<"Cuantas notas desea ingresar: "<<endl;
    cin>>tam;
    for (int i = 0; i <tam; i++)
    {
        cout<<"ingrese una nota "<<i+1<<" : ";
        cin>>notas[i];
    }
    for (int i = 0; i <tam; i++)
    {
        suma+=notas[i];
        //cout<<notas[i]<<endl;
    }

    promedio = suma / tam;
    cout<<"El promedio es: "<<promedio<<endl;

   int tam=0,suma=0,promedio= 0;
   int notas[tam];
   char res;

   do
   {
    tam++;
    cout<<"Ingrese nota "<<tam<<" : ";
    cin>>notas[tam-1];
    cout<<"Desea ingresar otra (s/n): ";
    cin>>res;
   } while (res=='s'||res=='S');
   
    for (int i = 0; i <tam; i++)
    {
        suma+=notas[i];
        //cout<<notas[i]<<endl;
    }
    
    promedio = suma / tam;
    cout<<"El promedio es: "<<promedio<<endl;
*/

    //char nombre[30];
    string nombre; //un string es un arreglo de char
    int dato;

    cout<<"Ingrse un dato: ";
    cin>>dato;
    cin.ignore();
    cout<<"Ingrese Nombre Completo: ";
    //cin>>nombre; //Solo toma una parte 
    //cin.get(nombre,30); // (variable, cantidad maxima de caracteres) 
    getline(cin,nombre);
    cout<<nombre<<endl;

    string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};

    semana[3]="Jueves";
    for (int i = 0; i <7; i++)
    {
        cout<<semana[i]<<endl;
    }
    

    system("pause");
}