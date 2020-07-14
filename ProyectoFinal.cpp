#include "iostream"
#include "string.h"
#include "string"

const int longCad = 20;

using namespace std;

struct costoPorArticulo{
char  nombreArticul[longCad + 1];
int   cantidad;
float precio;
float costoPorArticulo;
};

void datos(costoPorArticulo com[], int n);          //Estos son los prototipos de la funciones.//
void mostda(costoPorArticulo com[], int n);
void cosDelarticulo(costoPorArticulo com[], int n);
float total_compra(costoPorArticulo com[], int n);


int main(){ //La funcion main llama a las demas y de ella se ingrese el numero de productos y muestra el total a pagar.//
int n;                                                       
cout<<"Bienveni@ a mi tienda virtual"<<endl;

cout<<"Ingrese la cantidad de productos: ";
cin>>n;
cin.ignore(100,'\n');
costoPorArticulo com[n];

datos(com, n); cout<<endl;
cosDelarticulo(com, n); cout<<endl;
mostda(com, n); cout<<endl;
cout<<"Su monto total en el carrito es de: $"<<total_compra(com, n)<<endl;

cout<<"Gracias por comprar en mi tienda, su envio llegara pronto, buen dia."<<endl;

}
                 //Esta funcion es donde se incresan los datos o cantidad y precio de los productos//
void datos(costoPorArticulo com[], int n){
string cad;
int datos=1;

cout<<"Por favor, ingrese los datos de los articulo: "<<endl;
for (int i = 0; i < n ; i++)
{   
    cout<<"Ingrese el nombre del articulo: "<<datos++<<endl;
    getline(cin, cad, '\n');
    strncpy(com[i].nombreArticul, cad.c_str(),longCad);
    com[i].nombreArticul[longCad]='\0';
    cout<<"Cantidad del producto: "; cin>>com[i].cantidad;
    cout<<endl; 
    cout<<"Ingrese el precio unitario del producto: $";cin>>com[i].precio;
    cout<<endl;
    cin.ignore(100, '\n');
    cout<<endl;
 }


}                              //Esta funcion multoplica la cantidad por el valor unitario de los articulos//
void cosDelarticulo(costoPorArticulo com[], int n){ 
    float costos =0;

      for ( int i = 0; i < n; i++){ 

      com[i].costoPorArticulo = com[i].cantidad * com[i].precio;
     
      }


}           //Esta funcion muestra los comprados o la lista//
void mostda(costoPorArticulo com[], int n){
    cout<<"Los articulos o productos que desea llevar son: "<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<com[i].nombreArticul<<endl;
        cout<<"Cantidad: "<<com[i].cantidad<<endl;
        cout<<"Precio por unidad: $"<<com[i].precio<<endl;
        cout<<"precio total: $"<<com[i].costoPorArticulo<<endl;
        
    }
}

                    
                // Esta funcion realiza la suma del total de cada producto//
float total_compra(costoPorArticulo com[], int n)
{
    float sumapro;
    for ( int i = 0; i < n; i++) sumapro += com[i].costoPorArticulo;
    
return sumapro;
}