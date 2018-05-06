Altura(n, A) {
    return AlturaR(n)
}

AlturaR(n) {    // OPCIÓN 1
    if A.EsHoja() {
        return 0
    }
    else {
        altura = 0
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            alturanh = AlturaR(nh)
            if alturanh > altura {
                altura = alturanh
            }
            nh = A.HermanDerecho(nh)
        }
        return altura + 1
    }
}

AlturaR(n) {    // OPCIÓN 2
    altura = -1
    nh = A.HijoMasIzquierdo(n)
    while nh != nodo_nulo {
        alturan = AlturaR(nh)
        if alturanh > altura {
            altura = alturanh
        }
        nh = A.HermanoDerecho(nh)
    }
    return altura + 1
}
