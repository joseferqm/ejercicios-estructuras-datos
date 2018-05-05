HermanoIzquierdo(nRef, A) {
    C.Iniciar()
    C.Encolar(A.Raiz())
    n = nodo_nulo
    while !C.Vacia() {
        n = C.Desencolar()
        nh = A.HijoMasIzquierdo(n)
        if nh == nRef {
            n = nodo_nulo
            C.Vaciar()
        }
        else {
            while nh != nodo_nulo {
                n = A.HermanoDerecho(nh)
                if n == nRef {
                    n = nh
                    nh = nodo_nulo
                    C.Vaciar()
                }
                else {
                    C.Encolar(nh)
                    nh = n
                }
            }
        }
    }
    C.Destruir()
    return n
}
