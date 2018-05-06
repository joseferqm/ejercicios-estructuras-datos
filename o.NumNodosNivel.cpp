NumNodosNivel(i, A) {
    return NumNodosNivelR(0, A.Raiz())
}

NumNodosNivelR(nivelPadre, n) {
    nivelActual = nivelPadre + 1
    if nivelActual == i {
        return 1
    } else {
        numNodos = 0
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            numNodos += NumNodoNivelR(nivelActual, nh)
            nh = A.HermanoDerecho(nh)
        }
        return numNodos
    }
}
