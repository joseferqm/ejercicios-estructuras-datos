Niveles(A) {
    contNivelesGlobal = 0
    NivelesR(0, A.Raiz())
    return contNivelesGlobal
}

NivelesR(nivelPadre, n) {
    nivelActual = nivelPadre + 1
    if A.EsHoja(n) {
        if nivelActual > contNivelesGlobal {
            contNivelesGlobal = nivelActual
        }
    }
    else {
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            NivelesR(nivelActual, nh)
            nh = A.HermanoDerecho(nh)
        }
    }
}
