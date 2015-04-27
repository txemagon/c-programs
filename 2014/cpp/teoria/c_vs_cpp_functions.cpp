

/* c */
void cargar(Cubeta *complemento_directo, double cantidad) {
    complemento_directo->nivel += cantidad;
}

/* c++ */ 
void Cubeta::cargar(double cantidad) {
    this->nivel += cantidad;
}


int
main()
{
    Cubeta uno, dos;

    /* c */
    cargar(&uno, 50);
    cargar(&dos, 1000);

    /* c++ */
    uno.cargar(50);
    dos.cargar(1000);
}
