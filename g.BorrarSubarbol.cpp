BorrarSubarbol(n, A) {
    BorrarSubarbolR(n)
}

BorrarSubarbolR(n) {
    nh = A.HijoMasIzquierdo(n)
    while nh != nodo_nulo {
        BorrarSubarbolR(nh)
        nh = A.HermanoDerecho(nh)
    }
    A.BorrarHoja(n)
}
