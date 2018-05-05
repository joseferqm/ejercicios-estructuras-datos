Niveles(A) {
    niveles = 0
    if !A.Vacio() {
        C.Iniciar()
        C.Encolar(A.Raiz())
        niveles = 1
        contNodosNivelActual = 1
        contNodosNivelSiguiente = 0
        while !C.Vacia() {
            if contNodosNivelActual == 0 {
                niveles++
                contNodosNivelActual = contNodosNivelSiguiente
                contNodosNivelSiguiente = 0
            }

            n = C.Desencolar()
            contNodosNivelActual--
            nh = A.HijoMasIzquierdo(n)
            while nh != nodo_nulo {
                C.Encolar(nh)
                contNodosNivelSiguiente++
                nh = A.HermanoDerecho(nh)
            }
        }
    }
    return niveles
}
