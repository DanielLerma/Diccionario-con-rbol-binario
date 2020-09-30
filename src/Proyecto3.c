#include <stdio.h>
#include <stdlib.h>
#include "dict.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

	Dictionary d = dict_create();
	//a
	dict_set(d, "Abeja", "Insecto encargado de producir miel y cera.");
	dict_set(d, "avión", " Vehiculo que puede volar.");
	dict_set(d, "agua", "H2O");
	dict_set(d, "arbol", "Encargado de producir oxigeno.");
	dict_set(d, "arrobar", "Embelesar");
	dict_set(d, "alas", "Con lo que se vuela.");
	dict_set(d, "amar", "Sentimiento supremo por otra persona.");
	//b
	dict_set(d, "bajar", "Ir para abajo.");
	dict_set(d, "baño", "Lugar para hacer necesidades fisiologicas.");
	dict_set(d, "bailar", "Mover el cuerpo siguiendo un ritmo.");
	dict_set(d, "borracho", "Tu, los viernes y sabados.");
	dict_set(d, "brotar", "Nacer o salir.");
	dict_set(d, "borrar", "Hacer que desaparezca algo.");
	dict_set(d, "brillar", "Lucir o sobresalir.");
	//c
	dict_set(d, "calor", "Aumento de temperatura.");
	dict_set(d, "cabalgar", "Montar a caballo.");
	dict_set(d, "comer", "Ingerir alimentos.");
	dict_set(d, "cobrar", "Recibir dinero que se le debia.");
	dict_set(d, "canalla", "Despreciable por su comportamiento.");
	dict_set(d, "cuerpo", "Conjunto d epartes que forman a un ser vivo.");
	dict_set(d, "canibal", "Persona que come humanos.");
	//d
	dict_set(d, "Daniel", "Yo.");
	dict_set(d, "dorlan", "Pavon.");
	dict_set(d, "dolar", "Moneda americana.");
	dict_set(d, "drama", "Genero literario");
	dict_set(d, "derivada", "dv/dt");
	dict_set(d, "domingo", "Septimo y ultimo dia de la semana.");
	dict_set(d, "dormir", "Reposar.");
	//e
	dict_set(d, "envejecer", "Hacer vieja a una persona.");
	dict_set(d, "encontrar", "Localizar una cosa perdida.");
	dict_set(d, "elevar", "Poner algo en lo mas alto.");
	dict_set(d, "empezar", "Comenzar.");
	dict_set(d, "ecuación", "x = y");
	dict_set(d, "epitafio", "Inscripcion grabada en una sepultura");
	dict_set(d, "estado", "Situacion de una persona o cosa.");
	//f
	dict_set(d, "farmacia", "Establecimiento donde se venden medicinas.");
	dict_set(d, "feroz", "Que ataca con crueldad.");
	dict_set(d, "feliz", "Sentimiento de plenitud.");
	dict_set(d, "feo", "Que carece de belleza.");
	dict_set(d, "facil", "PMD no.");
	dict_set(d, "fuerte", "Tu olor.");
	dict_set(d, "falacia", "Mentira que parece verdad.");
	//g
	dict_set(d, "gallo", "Valentin Elizalde.");
	dict_set(d, "gobierno", "Accion de gobernar.");
	dict_set(d, "guerra", "Conflicto entre dos bandos.");
	dict_set(d, "ganar", "Salir victorioso.");
	dict_set(d, "gritar", "Hablar con un tono de voz mas alto.");
	dict_set(d, "golondrina", "Pájaro.");
	dict_set(d, "golosina", "Dulce.");
	//h
	dict_set(d, "hueso", "Colorado.");
	dict_set(d, "hiena", "Animal salvaje.");
	dict_set(d, "horoscopo", "Mentiras.");
	dict_set(d, "hueco", "Que no es compacto.");
	dict_set(d, "hoyo", "Cavidad circular.");
	dict_set(d, "humedo", "Mojado.");
	dict_set(d, "Hidalgo", "Miguel.");
	//i
	dict_set(d, "importante", "Que tiene importancia.");
	dict_set(d, "increible", "Que causa gran admiracion.");
	dict_set(d, "icono", "Alguien famoso.");
	dict_set(d, "ignorar", "No saber una cosa.");
	dict_set(d, "investigar", "Profundizar en el estudio de algo.");
	dict_set(d, "ira", "Mas alla del enojo.");
	dict_set(d, "innecesario", "Que no se necesita.");
	//j
	dict_set(d, "joven", "Poca edad.");
	dict_set(d, "juego", "Actividad recreativa.");
	dict_set(d, "jabon", "Utensilio para limpiar cosas.");
	dict_set(d, "jarabe", "Medicamento liquido.");
	dict_set(d, "jauria", "Manada de perros.");
	dict_set(d, "justicia", "No existe.");
	dict_set(d, "jefe", "Pesrona con autoridad.");
	//k
	dict_set(d, "kilo", "Unidad de medida de masa.");
	dict_set(d, "kelvin", "Unideda de temperatura.");
	dict_set(d, "kamikaze", "Avión suicida.");
	dict_set(d, "kiosko", "Establecimiento.");
	dict_set(d, "kermesse", "Fiesta popular.");
	dict_set(d, "koala", "Lo que quiero ser.");
	dict_set(d, "kpi", "Key Performance Indicator.");
	//l
	dict_set(d, "loco", "Por ti.");
	dict_set(d, "largo", "Extenso.");
	dict_set(d, "lento", "Despacio.");
	dict_set(d, "ligar", "Coquetear.");
	dict_set(d, "lagartija", "Reptil.");
	dict_set(d, "lentes", "Objeto que permite una mejor vision.");
	dict_set(d, "lapiz", "Objeto utilizado para escribir.");
	//m
	dict_set(d, "musica", "Elixir.");
	dict_set(d, "mito", "Historia que involucra dioses.");
	dict_set(d, "masa", "Peso de un bojeto.");
	dict_set(d, "molde", "Recipiente.");
	dict_set(d, "mole", "Comida mexicana.");
	dict_set(d, "militar", "De la milicia.");
	dict_set(d, "mar", "Masa de agua salada.");
	//n
	dict_set(d, "nadar", "Avanzar en el agua con movimientos necesarios.");
	dict_set(d, "noticia", "Información.");
	dict_set(d, "negocio", "Ganancia o beneficio.");
	dict_set(d, "neutron", "Particula del nucelo que no tiene carga.");
	dict_set(d, "numero", "Signo grafico que expresa cantidad.");
	dict_set(d, "natural", "De la naturaleza.");
	dict_set(d, "nacion", "Personas de un mismo origen etnico.");
	//o
	dict_set(d, "ojos", "Parte del cuerpo que permite ver.");
	dict_set(d, "observar", "Acción de ver con atencion.");
	dict_set(d, "olor", "Sensacion que produce el olfato.");
	dict_set(d, "oveja", "Morenistas.");
	dict_set(d, "orden", "Situacion de normalidad.");
	dict_set(d, "obligacion", "Exigencia establecida por la ley.");
	dict_set(d, "oso", "Mamifero de gran tamaño.");
	//p
	dict_set(d, "polvo", "Particulas diminutas que flotan en el aire.");
	dict_set(d, "poder", "Tener la facultad de hacer algo.");
	dict_set(d, "palabra", "Unidad lexica constituida por un sonido.");
	dict_set(d, "paz", "Tranquilidad.");
	dict_set(d, "pez", "Animal vertebrado acuatico.");
	dict_set(d, "persona", "Individuo de la especie humana.");
	dict_set(d, "pasion", "Sentimiento capaz de dominar la voluntad.");
	//q
	dict_set(d, "querer", "Tener el deseo de poseer algo.");
	dict_set(d, "quesadilla", "Tortilla con queso.");
	dict_set(d, "quimica", "Estudio de composicion de la materia.");
	dict_set(d, "quemar", "Hacer arder una cosa.");
	dict_set(d, "quebrar", "Romper algo.");
	dict_set(d, "quejar", "Expresar quejas.");
	dict_set(d, "quieto", "No moverse.");
	//r
	dict_set(d, "raton", "De dos patas.");
	dict_set(d, "rapido", "Ir en friega.");


	printf("Bienvenido al diccionario de PMD\n");

	printf("El diccionario contiene %d palabras.\nSon las siguientes:\n", dict_size(d));
	int eleccion;

	char** llaves = dict_keys(d);
	for (int i = 0; i < dict_size(d); i++){
		if (i % 7 == 0)
			printf("\n");

		printf("--%s", llaves[i]);
	}
	printf("\nA continuacion te presentamos las opciones con las que puedes trabajar:\n");
	printf("\n1. Agregar palabra\n2. Consultar definicion\n3. Salir\nEscoge la opcion que desees: ");
	scanf("%d", &eleccion);

	while (eleccion != 3){

		if (eleccion == 1){
			Type palN = (Type) malloc(sizeof(char));
			Type defN = (Type) malloc(sizeof(char));
			printf("Escribe la palabra: ");
			scanf("%s", palN);
			fflush(stdin);
			printf("\n");
			printf("Escribe su definicion: ");
			gets(defN);
			fflush(stdin);
			dict_set(d, palN, defN);
			printf("El nuevo tamaño es: %d", dict_size(d));
			printf("\n1. Agregar palabra\n2. Consultar definicion\n3. Salir\n4. Imprimir todas las palabras.\nEscoge la opcion que deseas: ");
			scanf("%d", &eleccion);
		}

		else if (eleccion == 2){
			Type keyABuscar = (Type) malloc(sizeof(char));
			printf("Escribe una de las llaves mostradas: ");
			scanf("%s", keyABuscar);
			fflush(stdin);
			printf("La definicion de %s es: %s", keyABuscar, dict_get(d, keyABuscar));
			printf("\n\n1. Agregar palabra\n2. Consultar definicion\n3. Salir\n4. Imprimir todas las palabras.\nEscoge la opcion que deseas: ");
			scanf("%d", &eleccion);
		}

		else if (eleccion == 4){
			char** llaves = dict_keys(d);
				for (int i = 0; i < dict_size(d); i++){
					if (i % 7 == 0)
						printf("\n");

					printf("--%s", llaves[i]);
				}

			printf("\n\n1. Agregar palabra\n2. Consultar definicion\n3. Salir\n4. Imprimir todas las palabras.\nEscoge la opcion que deseas: ");scanf("%d", &eleccion);
		}

	}


	dict_destroy(d);
	return EXIT_SUCCESS;
}
