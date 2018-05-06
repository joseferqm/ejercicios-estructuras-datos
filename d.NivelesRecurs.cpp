Niveles(A) {
    if A.Vacio() {
        return 0
    }
    else {
        NivelesR(A.Raiz())
    }
}

NivelesR(n) {
    niveles = 0
    nh = A.HijoMasIzquierdo(n)
    while nh != nodo_nulo {
        nivelesnh = NivelesR(nh)
        if nivelesnh > niveles {
            niveles = nivelesnh
        }
        nh = A.HermanoDerecho(nh)
    }
    return niveles + 1
}
