Altura(nRef, A) {
    C.Iniciar()
    C.Encolar(nRef)
    altura = 0
    contNivActual = 1
    contNivSiguiente = 0
    while !C.Vacia() {
        if (contNivActual == 0) {
            altura++
            contNivActual = contNivSiguiente
            contNivSiguiente = 0
        }

        n = C.Desencolar()
        contNivActual--
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            C.Encolar(nh)
            contNivSiguiente++
            nh = A.HermanoDerecho(nh)
        }
    }
    C.Destruir()
    return altura
}
