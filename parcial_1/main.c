#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
}eVacuna;

float aplicarAumento(int precio);
int reemplazarCaracteres(char texto[], char primerChar, char segundoChar);
int ordenarArray(eVacuna listaVacunas[], int tam);
int main()
{
    int precio = 0;
    float precioConAumento = 0;
    printf("ingrese precio : ");
    scanf("%d", &precio);
    precioConAumento = aplicarAumento(precio);
    printf("Precio con aumento : %.2f", precioConAumento );



    char texto[30] = "hola como estas";
    int cantidad = 0;
    cantidad = reemplazarCaracteres(texto, 'o', 'k');
    printf("%s \n", texto);
    printf("Cantidad de veces reemplazado : %d", cantidad);


    return 0;
}
float aplicarAumento(int precio)
{
    float precioConAumento = 0;

    return precioConAumento = precio + (precio * 0.05);
}

int reemplazarCaracteres(char texto[], char primerChar, char segundoChar)
{
    int tamCadena;
    int cantReemplazo = 0;

        tamCadena = strlen(texto);
        for (int i = 0; i < tamCadena ; i++)
        {
            if( texto[i] == primerChar)
            {
                texto[i] = segundoChar;
                cantReemplazo ++;
            }
        }

    return cantReemplazo;
}

int ordenarArray(eVacuna listaVacunas[], int tam)
{
    int retorno = 0;
    eVacuna auxVacuna;

    if(listaVacunas != NULL && tam>0 )
    {
        for( int i = 0; i < tam-1; i++)
        {
            for( int j= i+1; j < tam ; j++)
            {
                if((listaVacunas[i].tipo > listaVacunas[j].tipo) ||
                   (listaVacunas[i].tipo == listaVacunas[j].tipo && listaVacunas[i].efectividad > listaVacunas[j].efectividad))
                {
                    auxVacuna = listaVacunas[i];
                    listaVacunas[i]= listaVacunas[j];
                    listaVacunas[j]= auxVacuna;

                }

            }
        }
        retorno= 1;
    }
    return retorno;
}
