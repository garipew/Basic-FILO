

typedef struct item{

	struct item *anterior;
	struct item *proximo;
	int chave;

} Item;

typedef struct pilha{

	Item *primeiro;
	Item *ultimo;
	int tamanho;

} Pilha;


Pilha* criaPilhaVazia();
Item* criaItem(int);
int pilhaVazia(Pilha*);
void empilha(Item*, Pilha*);
void imprimePilha(Pilha*);
void desempilha(Pilha*);
void deletaPilha(Pilha*);
