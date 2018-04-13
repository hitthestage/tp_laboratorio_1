#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int status;
    int dni;

}EPersona;

 /**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

 /**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

 /**
 * Se inicializa el estado de las personas en 0 ya que todavía no se encuentra ningun valor cargado.
 * @param persona array se pasa como parametro.
 * @return no devuelve valor.
 */
void  inicializandoPersona(EPersona persona[]);

 /**
 * Muestra datos de una persona.
 * @param persona obtiene los datos.
 * @return no devuelve valor.
 */
 void mostrarPersona(EPersona persona);

 /**
 * Muestra datos de toda persona cargada en el array.
 * @param array de personas a mostrar pasa como parametro.
 * @return no devuelve valor.
 */
 void mostrarPersonas(EPersona personas[]);

 /**
 * Muestra grafico por edad
 * @param array de personas cargadas en sistema pasa como parametro.
 * @return no devuelve valor.
 */
 void grafico(EPersona x[]);

 /**
 * Carga datos de las personas en sistema.
 * @param array de persona se pasa como parametro.
 * @return no devuelve valor.
 */
void altaPersonas(EPersona persona[]);

 /**
 * Ordena las personas en sitema por orden alfabetico.
 * @param personas array se pasa como parametro.
 * @return no devuelve valor.
 */
 void listarPersona (EPersona x[]);

 /**
 * Inhabilita al dni seleccionado si este ya se encuentra en el sistema.
 * @param persona array se pasa como parametro.
 * @return no devuelve valor.
 */
 void bajaPersona(EPersona persona[]);



#endif // FUNCIONES_H_INCLUDED
