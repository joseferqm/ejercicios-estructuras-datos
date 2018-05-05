HermanoIzquierdo(nRef, A) {
    C.Iniciar()
    C.Encolar(A.Raiz())
    n = nodo_nulo
    continuar = verdadero
    while !C.Vacia() && continuar {
        n = C.Desencolar()
        nh = A.HijoMasIzquierdo(n)
        if nh == nRef {
            n = nodo_nulo
            continuar = falso
        }
        else {
            while nh != nodo_nulo {
                n = A.HermanoDerecho(nh)
                if n == nRef {
                    n = nh
                    nh = nodo_nulo
                    continuar = falso
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
