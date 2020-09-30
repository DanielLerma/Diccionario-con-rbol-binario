
typedef char * Type;
typedef struct strDict * Dictionary;

typedef void (*DestroyFunc)(Type);

Dictionary dict_create ();
void dict_destroy (Dictionary);
int	dict_size (Dictionary);
void dict_set (Dictionary, char* word, char* definition);
char* dict_get (Dictionary, char* word);
char** dict_keys (Dictionary);
