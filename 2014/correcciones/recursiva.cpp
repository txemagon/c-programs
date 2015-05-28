void incrementa(double *variable, double cantidad) {
    *variable += cantidad;
}

incrementa(&a, 3);


S(0) = 0
S(1) = 1 + 0 = 1 + S(0)
S(2) = 2 + 1 + 0 = 2 + S(1)
S(3) = 3 + 2 + 1 + 0 = 3 + S(2)

S(n) = n + S(n-1)


int suma(int n) {
    if (n <= 0)
	return 0;

    return n + suma(n-1);
}

int suma(int n) {
    return n<=0 ? 0 : n + suma(n-1);
}

suma(71);

void imprime(const char *letra) {
    if (*letra == '\0')
	return;
    printf("%c", *letra);
    imprime(letra+1);
}


int main(){
 const char *frase = "Mimi ninasema kiswahili kidogo.";
 
 imprime(frase);
}
