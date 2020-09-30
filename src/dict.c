
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dict.h"

typedef struct strNode *Node;
void colocar(Dictionary d, Node N, Type word,Type key, Type definicion, int nivel);
char letter(Type arr, int nivel);
Type llavear(Type palabra);
Type sacar(Node n, Type key, int nivel);
void sacar_keys( Dictionary d, Node n, int nivel);

struct strNode{
	Type key, palabra, def;
	Node a, b, c, d, e, f, g, h, i, j, k, l, m, n, ex, o, p, q, r, s, t, u, v, w, x, y, z, _;
	int nivel;
};

struct strDict{
	Type* keys;
	Node root;
	int size, i;
};

Dictionary dict_create (){
	Dictionary d = (Dictionary) calloc(1, sizeof(struct strDict));
	return d;
}

void dict_set(Dictionary d, Type word, Type def){

  Node n = (Node) calloc(1, sizeof(struct strNode));
  int nivel;
  nivel = 0;
  char* llave = (char*) malloc(sizeof(char));
  strcpy(llave, llavear(word));
  if (d->size == 0){
	n->palabra = word;
    d->root = n;
    n->key = llave;
    n->def = def;
    d->size++;
    return;
  }
  else{
    colocar(d, d->root, word, llave, def ,nivel);

    return;
  }
}

void word_destroy(Node n){
	if (n != NULL){
		word_destroy(n->a);
		word_destroy(n->b);
		word_destroy(n->c);
		word_destroy(n->d);
		word_destroy(n->e);
		word_destroy(n->f);
		word_destroy(n->g);
		word_destroy(n->h);
		word_destroy(n->i);
		word_destroy(n->j);
		word_destroy(n->k);
		word_destroy(n->l);
		word_destroy(n->m);
		word_destroy(n->n);
		word_destroy(n->ex);
		word_destroy(n->o);
		word_destroy(n->p);
		word_destroy(n->q);
		word_destroy(n->r);
		word_destroy(n->s);
		word_destroy(n->t);
		word_destroy(n->u);
		word_destroy(n->v);
		word_destroy(n->w);
		word_destroy(n->x);
		word_destroy(n->y);
		word_destroy(n->z);
		word_destroy(n->_);
		free(n);
	}
}

void dict_destroy (Dictionary d){
	Node n = d->root;
	word_destroy(n);
	free(d);
	printf("\nse destruyó");
	return;
}

Type llavear(Type palabra){
	char aA[] = "á";
	char eA[] = "é";
	char iA[] = "í";
	char oA[] = "ó";
	char uA[] = "ú";
	char exA[] = "ñ";
	char a2A[] = "Á";
	char e2A[] = "É";
	char i2A[] = "Í";
	char o2A[] = "Ó";
	char u2A[] = "Ú";
	char ex2A[] = "Ñ";

	char* llave = (char*) malloc(sizeof(char));
	strcpy(llave, palabra);

	for (int i = 0; i < strlen(palabra);i++){
		if ( palabra[i] == (int)aA[0] || palabra[i] == (int)a2A[0]){
			llave[i] = 'A';
		}
		else if(palabra[i] == (int)eA[0] || palabra[i] == (int)e2A[0]){
			llave[i] = 'E';
		}
		else if(palabra[i] == (int)iA[0] || palabra[i] == (int)i2A[0]){
			llave[i] = 'I';
		}
		else if(palabra[i] == (int)oA[0] || palabra[i] == (int)o2A[0]){
			llave[i] = 'O';
		}
		else if (palabra[i] == (int)uA[0] || palabra[i] == (int)u2A[0]){
			llave[i] = 'U';
		}
		else if(palabra[i] == (int)exA[0] || palabra[i] == (int)ex2A[0]){
			llave[i] = 'Ñ';
		}
		else if((int)palabra[i] <= 122 && (int)palabra[i] >= 97){
			llave[i] = palabra[i] - 32;
		}
		else if((int)palabra[i] <= 90 && (int)palabra[i] >= 65){
			llave[i] = palabra[i];
		}
		else{
			llave[i] = '_';
		}
	}
	return llave;
}
//
void colocar(Dictionary d, Node N, Type word, Type key, Type definicion, int nivel){
	char letra = letter(key, nivel);


  Node n = N;
  if(strcmp(n->key, key) == 0){
		n->palabra = word;
		n->key = key;
		n->def = definicion;
  }
  else if(letra == 'A' || letra == 'a'){
    if(n->a == NULL){

		n->a = (Node) calloc(1, sizeof(struct strNode));
		n->a->palabra = word;
		n->a->key = key;
		n->a->def = definicion;
		d->size++;

      return;
    }
    else{
		colocar(d, n->a, word, key, definicion, nivel + 1);
      return;
    }
  }
  else if (letra == 'B' || letra == 'b'){
    if (n->b == NULL){
		n->b = (Node) calloc(1, sizeof(struct strNode));
	    n->b->palabra = word;
	    n->b->key = key;
    	n->b->def = definicion;
    	d->size++;
	}
    else if (n->b->key == key){
    	n->b->def = definicion;
    }
    else{
    	colocar(d, n->b, word,key, definicion, nivel + 1);
      return;
    }
  }
  else if (letra == 'C' || letra == 'c'){
    if(n->c == NULL){
		n->c = (Node) calloc(1, sizeof(struct strNode));
		n->c->palabra = word;
		n->c->key = key;
		n->c->def = definicion;
		d->size++;
		return;

      }
    else{
    	colocar(d, n->c, word, key, definicion, nivel + 1);
      return;
    }
  }
  else if (letra == 'D' || letra == 'd'){
	if(n->d == NULL){
		n->d = (Node) calloc(1, sizeof(struct strNode));
		n->d->palabra = word;
		n->d->key = key;
		n->d->def = definicion;
		d->size++;
		return;
	  }
	else{
		colocar(d, n->d, word, key, definicion, nivel + 1);
		return;
	}
  }
  else if (letra == 'E' || letra == 'd'){
	  if(n->e == NULL){
			n->e = (Node) calloc(1, sizeof(struct strNode));
			n->e->palabra = word;
			n->e->key = key;
			n->e->def = definicion;
			d->size++;
			return;
		   }
	 else{
			colocar(d, n->e, word, key, definicion, nivel + 1);
			return;
		 }
  }
  else if (letra == 'F' || letra == 'd'){
	  if(n->f == NULL){
	 		n->f = (Node) calloc(1, sizeof(struct strNode));
	 		n->f->palabra = word;
	 		n->f->key = key;
	 		n->f->def = definicion;
	 		d->size++;
	 		return;
	       }
	     else{
	 		colocar(d, n->f, word, key, definicion, nivel + 1);
	 		return;
	     }
  }
  else if (letra == 'G' || letra == 'd'){
	  if(n->g == NULL){
	 		n->g = (Node) calloc(1, sizeof(struct strNode));
	 		n->g->palabra = word;
	 		n->g->key = key;
	 		n->g->def = definicion;
	 		d->size++;
	 		return;
	       }
	     else{
	 		colocar(d, n->g, word, key, definicion, nivel + 1);
	 		return;
	     }
  }
  else if (letra == 'H' || letra == 'h'){
	  if(n->h == NULL){
	 		n->h = (Node) calloc(1, sizeof(struct strNode));
	 		n->h->palabra = word;
	 		n->h->key = key;
	 		n->h->def = definicion;
	 		d->size++;
	 		return;
	       }
	     else{
	 		colocar(d, n->h, word, key, definicion, nivel + 1);
	 		return;
	     }
  }
  else if (letra == 'I' || letra == 'i'){
	  if(n->i == NULL){
			n->i = (Node) calloc(1, sizeof(struct strNode));
			n->i->palabra = word;
			n->i->key = key;
			n->i->def = definicion;
			d->size++;
			return;
		   }
		 else{
			colocar(d, n->i, word, key, definicion, nivel + 1);
			return;
		 }
  }
  else if (letra == 'J' || letra == 'j'){
	  if(n->j == NULL){
	 		n->j = (Node) calloc(1, sizeof(struct strNode));
	 		n->j->palabra = word;
	 		n->j->key = key;
	 		n->j->def = definicion;
	 		d->size++;
	 		return;
	       }
	     else{
	 		colocar(d, n->j, word, key, definicion, nivel + 1);
	 		return;
	     }
  }
  else if (letra == 'K' || letra == 'k'){
	  if(n->k == NULL){
	 		n->k = (Node) calloc(1, sizeof(struct strNode));
	 		n->k->palabra = word;
	 		n->k->key = key;
	 		n->k->def = definicion;
	 		d->size++;
	 		return;
	       }
	     else{
	 		colocar(d, n->k, word, key, definicion, nivel + 1);
	 		return;
	     }
  }
  else if (letra == 'L' || letra == 'l'){
	  if(n->l == NULL){
		n->l = (Node) calloc(1, sizeof(struct strNode));
		n->l->palabra = word;
		n->l->key = key;
		n->l->def = definicion;
		d->size++;
		return;
	   }
	 else{
		colocar(d, n->l, word, key, definicion, nivel + 1);
		return;
	 }
  }
  else if (letra == 'M' || letra == 'm'){
	  if(n->m == NULL){
	 		n->m = (Node) calloc(1, sizeof(struct strNode));
	 		n->m->palabra = word;
	 		n->m->key = key;
	 		n->m->def = definicion;
	 		d->size++;
	 		return;
	       }
	     else{
	 		colocar(d, n->m, word, key, definicion, nivel + 1);
	 		return;
	     }
  }
  else if (letra == 'N' || letra == 'n'){
	  if(n->n == NULL){
		n->n = (Node) calloc(1, sizeof(struct strNode));
		n->n->palabra = word;
		n->n->key = key;
		n->n->def = definicion;
		d->size++;
		return;
	   }
	 else{
		colocar(d, n->n, word, key, definicion, nivel + 1);
		return;
	 }
  }
  else if (letra == 'Ñ' || letra == 'ñ'){
	  if(n->ex == NULL){
		  n->ex = (Node) calloc(1, sizeof(struct strNode));
		  n->ex->palabra = word;
		  n->ex->key = key;
		  n->ex->def = definicion;
		  d->size++;
		  return;
      }
	  else{
		  colocar(d, n->ex, word, key, definicion, nivel + 1);
	  }
  }
  else if (letra == 'O' || letra == 'o'){
	  if(n->o == NULL){
		  n->o = (Node) calloc(1, sizeof(struct strNode));
		  n->o->palabra = word;
		  n->o->key = key;
		  n->o->def = definicion;
		  d->size++;
		  return;
      }
    else{
    	colocar(d, n->o, word,key, definicion, nivel + 1);
    	return;
    }
  }
  else if (letra == 'P' || letra == 'p'){
	  if(n->p == NULL){
		  n->p = (Node) calloc(1, sizeof(struct strNode));
		  n->p->palabra = word;
		  n->p->key = key;
		  n->p->def = definicion;
		  d->size++;
		  return;
      }
	  else{
    	colocar(d, n->p, word,key, definicion, nivel + 1);
    	return;
	  }
  }
  else if (letra == 'Q' || letra == 'q'){
	  if(n->q == NULL){
		  n->q = (Node) calloc(1, sizeof(struct strNode));
		  n->q->palabra = word;
		  n->q->key = key;
		  n->q->def = definicion;
		  d->size++;
		  return;
      }
	  else{
		  colocar(d, n->q, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'R' || letra == 'r'){
	  if(n->r == NULL){
		  n->r = (Node) calloc(1, sizeof(struct strNode));
		  n->r->palabra = word;
		  n->r->key = key;
		  n->r->def = definicion;
		  d->size++;
		  return;
      }
	  else{
		  colocar(d, n->r, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'S' || letra == 's'){
	  if(n->s == NULL){
		  n->s = (Node) calloc(1, sizeof(struct strNode));
		  n->s->palabra = word;
		  n->s->key = key;
		  n->s->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->s, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'T' || letra == 't'){
	  if(n->t == NULL){
		  n->t = (Node) calloc(1, sizeof(struct strNode));
		  n->t->palabra = word;
		  n->t->key = key;
		  n->t->def = definicion;
		  d->size++;
		  return;
      }
	  else{
		  colocar(d, n->t, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'U' || letra == 'u'){
	  if(n->u == NULL){
		  n->u = (Node) calloc(1, sizeof(struct strNode));
		  n->u->palabra = word;
		  n->u->key = key;
		  n->u->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->u, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'V' || letra == 'v'){
	  if(n->v == NULL){
		  n->v = (Node) calloc(1, sizeof(struct strNode));
		  n->v->palabra = word;
		  n->v->key = key;
		  n->v->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->v, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'W' || letra == 'w'){
	  if(n->w == NULL){
		  n->w = (Node) calloc(1, sizeof(struct strNode));
		  n->w->palabra = word;
		  n->w->key = key;
		  n->w->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->w, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'X' || letra == 'x'){
	  if(n->x == NULL){
		  n->x = (Node) calloc(1, sizeof(struct strNode));
		  n->x->palabra = word;
		  n->x->key = key;
		  n->x->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->x, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'Y' || letra == 'y'){
	  if(n->y == NULL){
		  n->y = (Node) calloc(1, sizeof(struct strNode));
		  n->y->palabra = word;
		  n->y->key = key;
		  n->y->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->y, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == 'Z' || letra == 'z'){
	  if(n->z == NULL){
		  n->z = (Node) calloc(1, sizeof(struct strNode));
		  n->z->palabra = word;
		  n->z->key = key;
		  n->z->def = definicion;
		  d->size++;
		  return;
	  }
	  else{
		  colocar(d, n->z, word,key, definicion, nivel + 1);
		  return;
	  }
  }
  else if (letra == '_'){
 	  if(n->_ == NULL){
 		  n->_ = (Node) calloc(1, sizeof(struct strNode));
 		  n->_->palabra = word;
 		  n->_->key = key;
 		  n->_->def = definicion;
 		 d->size++;
 		  return;
 	  }
 	  else{
 		  colocar(d, n->_, word,key, definicion, nivel + 1);
 		  return;
 	  }
   }

  return;
}
Type dict_get (Dictionary d, char* word){
	Node n = d->root;
	char* newWord = llavear(word);

	if(strcmp(newWord, n->key) == 0){
		return n->def;
	}
	else{
		Type newDef = sacar(n, newWord, 0);
		return newDef;
	}

}

Type sacar(Node n, Type key, int nivel){
	char letra;
	if(n == NULL){
		Type WNF =  "Word not found";
		return WNF;
	}
	if(strcmp(key, n->key) == 0){

		return n->def;
	}
	else{
		letra = letter(key, nivel);
		if (letra == 'A' || letra =='a')
			sacar(n->a, key, nivel + 1);
		else if (letra == 'B' || letra =='b')
			sacar(n->b, key, nivel + 1);
		else if (letra == 'C' || letra =='c')
			sacar(n->c, key, nivel + 1);
		else if (letra == 'D' || letra =='d')
			sacar(n->d, key, nivel + 1);
		else if (letra == 'E' || letra =='e')
			sacar(n->e, key, nivel + 1);
		else if (letra == 'F' || letra =='f')
			sacar(n->f, key, nivel + 1);
		else if (letra == 'G' || letra =='g')
			sacar(n->g, key, nivel + 1);
		else if (letra == 'H' || letra =='h')
			sacar(n->h, key, nivel + 1);
		else if (letra == 'I' || letra =='i')
			sacar(n->i, key, nivel + 1);
		else if (letra == 'J' || letra =='j')
			sacar(n->j, key, nivel + 1);
		else if (letra == 'K' || letra =='k')
			sacar(n->k, key, nivel + 1);
		else if (letra == 'L' || letra =='l')
			sacar(n->l, key, nivel + 1);
		else if (letra == 'M' || letra =='m')
			sacar(n->m, key, nivel + 1);
		else if (letra == 'N' || letra =='n')
			sacar(n->n, key, nivel + 1);
		else if (letra == 'Ñ' || letra =='ñ')
			sacar(n->ex, key, nivel + 1);
		else if (letra == 'O' || letra =='o')
			sacar(n->o, key, nivel + 1);
		else if (letra == 'P' || letra =='p')
			sacar(n->p, key, nivel + 1);
		else if (letra == 'Q' || letra =='q')
			sacar(n->q, key, nivel + 1);
		else if (letra == 'R' || letra =='r')
			sacar(n->r, key, nivel + 1);
		else if (letra == 'S' || letra =='s')
			sacar(n->s, key, nivel + 1);
		else if (letra == 'T' || letra =='t')
			sacar(n->t, key, nivel + 1);
		else if (letra == 'U' || letra =='u')
			sacar(n->u, key, nivel + 1);
		else if (letra == 'V' || letra =='v')
			sacar(n->v, key, nivel + 1);
		else if (letra == 'W' || letra =='w')
			sacar(n->w, key, nivel + 1);
		else if (letra == 'X' || letra =='x')
			sacar(n->x, key, nivel + 1);
		else if (letra == 'Y' || letra =='y')
			sacar(n->y, key, nivel + 1);
		else if (letra == 'Z' || letra =='z')
			sacar(n->z, key, nivel + 1);
		else if (letra == '_')
			sacar(n->_, key, nivel + 1);

	}
	return;
}

char letter(Type arr, int nivel){
  char letra = arr[nivel];
  return letra;
}

void sacar_keys(Dictionary d, Node n, int nivel){

	if (n){
		d->keys[d->i] = n->key;
		d->i++;
		sacar_keys(d, n->a, nivel);
		sacar_keys(d, n->b, nivel);
		sacar_keys(d, n->c, nivel);
		sacar_keys(d, n->d, nivel);
		sacar_keys(d, n->e, nivel);
		sacar_keys(d, n->f, nivel);
		sacar_keys(d, n->g, nivel);
		sacar_keys(d, n->h, nivel);
		sacar_keys(d, n->i, nivel);
		sacar_keys(d, n->j, nivel);
		sacar_keys(d, n->k, nivel);
		sacar_keys(d, n->l, nivel);
		sacar_keys(d, n->m, nivel);
		sacar_keys(d, n->n, nivel);
		sacar_keys(d, n->ex, nivel);
		sacar_keys(d, n->o, nivel);
		sacar_keys(d, n->p, nivel);
		sacar_keys(d, n->q, nivel);
		sacar_keys(d, n->r, nivel);
		sacar_keys(d, n->s, nivel);
		sacar_keys(d, n->t, nivel);
		sacar_keys(d, n->u, nivel);
		sacar_keys(d, n->v, nivel);
		sacar_keys(d, n->w, nivel);
		sacar_keys(d, n->x, nivel);
		sacar_keys(d, n->y, nivel);
		sacar_keys(d, n->z, nivel);
		sacar_keys(d, n->_, nivel);

	}
		return;

}

char** dict_keys (Dictionary d){

	Node n = d->root;
	d->keys = (char**) malloc(sizeof(char*) * (d->size));
	sacar_keys(d, n, 0);
	d->i = 0;
	return d->keys;
}

int	dict_size (Dictionary d){
	if (d == NULL)
		return -1;
	else
		return d->size;
}
