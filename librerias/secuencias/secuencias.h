#ifndef SECUENCIAS_H_INCLUDED
#define SECUENCIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void convertirComa(char *cad);
void normalizar(char *cad);
bool espalabra(char cadcopia);
char abcdario(char cad,int posicion);
void desencriptarPorPos(char* cad);
void desencriptarPorCaso(char *cad);
void sacarAntYNormalizar(char *cad);
char toUpperProp(char c);
char toLowerProp(char c);
int comparar(const char* cad1, const char* cad2);
void copiar(char* cadDestinio,char* cadOrigen);
int buscarMatriz (const char matriz[][15], const char *cadBuscar, int ce);
int compararClasificador(const char* cadClas1, const char* cadClas2);
int compararTipoVariable(const char* cadClas1, const char* cadClas2);
void eliminarTodasLasComillas(char *cad);
char *strrchrProp(const char *str, int c);
char *strchrProp(const char *str, int c);
int esDigito(char* c);
void reemplazar3ComasPorPuntoYComa(char* cad);
void expandirFechaConGuion01(char* cad);
void agregarSMovimientoTierra(char* cad);
void modificarCadenaTxtIndec(char* cad);
int isLowerProp(char c);

#endif // SECUENCIAS_H_INCLUDED
