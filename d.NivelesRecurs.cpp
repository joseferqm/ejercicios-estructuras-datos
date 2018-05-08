Niveles(A) {
    contNivelesGlobal = 0
    NivelesR(0, A.Raiz())
    return contNivelesGlobal
}

NivelesR(nivelPadre, n) {
    nivelActual = nivelPadre + 1
    nh = A.HijoMasIzquierdo(n)
    if nh == nodo_nulo {
        if nivelActual > contNivelesGlobal {
            contNivelesGlobal = nivelActual
        }
    }
    else {
        while nh != nodo_nulo {
            NivelesR(nivelActual, nh)
            nh = A.HermanoDerecho(nh)
        }
    }
}
