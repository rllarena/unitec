#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
using namespace std;

int main() {

    char opcion;
    string A ="Quimica Sanguinea";
    string B ="Mostrar Biopcia";
    string C ="Ultrasonido";
    string D ="Cubrebocas";
    string E ="Guantes";
    string F ="Gel Antibacterial";



    int a=650;
    int b=850;
    int c=1250;
    int d=15;
    int e=17;
    int f=35;
    int can;

    /*Definición de la variable de tiempo */
    time_t tiempo=time(0);
    tm *tlocal = localtime(&tiempo);
    char output[128];
    strftime(output, 128, "%d/%m/%y %H:%M:%S", tlocal);
    //char* dt=ctime(&tiempo); alternativa con diferente formato

    /* SE DESPLIEGA EL MENSAJE DE BIENVENIDA */
    cout << "****** BIENVENIDO AL LABORATORIO VIDA Y SALUD ************" <<endl;
    cout << " USUARIO: RUBEN LLARENA FERNANDEZ DE LARA  " <<output<<endl;
    cout << "\n"<<endl;
    cout << "********************************************************** " <<endl;

    printf("\n Estudios/Insumos: \t\t\t Precio \t * \n");
    cout << "A. "<<A<<"\t\t\t"<<"$"<<a<<"\t\t *"<<endl;
    cout << "B. "<<B<<"\t\t\t"<<"$"<<b<<"\t\t *"<<endl;
    cout << "C. "<<C<<"\t\t\t\t"<<"$"<<c<<"\t\t *"<<endl;
    cout << "D. "<<D<<"\t\t\t\t"<<"$"<<d<<"\t\t *"<<endl;
    cout << "E. "<<E<<"\t\t\t\t"<<"$"<<e<<"\t\t *"<<endl;
    cout << "F. "<<F<<"\t\t\t"<<"$"<<f<<"\t\t *"<<endl;
    /*printf("\n A. 'A': \t\t\t $%i \t\t *",&A,a);
    printf("\n B. Mostrar Biopcia: \t\t\t $%i \t\t *",b);
    printf("\n C. Ultrasonido: \t\t\t $%i \t\t *",c);
    printf("\n D. Cubrebocas: \t\t\t $%i \t\t *",d);
    printf("\n E. Guantes: \t\t\t\t $%i \t\t *",e);
    printf("\n F. Gel Antibacterial: \t\t\t $%i \t\t * \n",f);
*/
    cout << "************************************************************** \n" <<endl;

    printf("\n Selecciona la letra correspondiente al estudio: ");
    scanf(" %c", opcion);

if (opcion = 'A')
{
    cout<< "Estudio/Insumo:"<<A<<"\n";
    printf("\n Precio Unitario: %d \n",a);
    cout<<endl;
}
    if (opcion = 'B'){
    cout<<"\n Cantidad estudio: 10 "<<endl;
    cin>>can;
    cout<<endl;
    }

    return (0);

}
