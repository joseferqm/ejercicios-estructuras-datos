NumNodosNivel(i, A) {
    contNodosGlobal =0
    NumNodosNivelR(0, A.Raiz())
    return contNodosGlobal
}

NumNodosNivelR(nivelPadre, n) {
    nivelActual = nivelPadre + 1
    if nivelActual == i {
        contNodosGlobal++
    } else {
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            NumNodoNivelR(nivelActual, nh)
            nh = A.HermanoDerecho(nh)
        }
    }
}
