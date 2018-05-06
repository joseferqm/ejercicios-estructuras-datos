NumNodosNivel(i, A) {
    numNodos = 0
    C.Iniciar()
    CNiveles.Iniciar()
    C.Encolar(A.Raiz())
    CNiveles.Encolar(1)
    while !C.Vacia() {
        n = C.Desencolar()
        niveln = CNiveles.Desencolar()
        if niveln == i {
            numNodos++
        }
        else {
            nh = A.HijoMasIzquierdo(n)
            nivelnh = niveln + 1
            while nh != nodo_nulo {
                C.Encolar(nh)
                CNiveles.Encolar(nivelnh)
                nh = A.HermanoDerecho(nh)
            }
        }
    }
    C.Destruir()
    CNiveles.Destruir()
    return numNodos
}
