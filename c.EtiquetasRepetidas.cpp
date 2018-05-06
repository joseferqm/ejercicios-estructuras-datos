EtiquetasRepetidas(A) {
    C.Iniciar()
    CEtiquetas1.Iniciar()
    C.Encolar(A.Raiz())
    while !C1.Vacia() {
        n = C1.Desencolar()
        CEtiquetas1.Encolar(A.Etiqueta(n))
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            C1.Encolar(nh)
            nh = A.HermanoDerecho(nh)
        }
    }
    C.Destruir()
    CEtiquetas2.Iniciar()
    continuar = verdadero
    while !CEtiquetas1.Vacia() && continuar {
        e1 = CEtiquetas1.Desencolar()
        while !CEtiquetas1.Vacia() && continuar {
            e2 = CEtiquetas1.Desencolar()
            if e2 == e1 {
                continuar = falso
            }
            else {
                CEtiquetas2.Encolar(e2)
            }
        }

        if !CEtiquetas2.Vacia() && continuar {
            e1 = CEtiquetas2.Desencolar()
            while !CEtiquetas2.Vacia() && continuar {
                e2 = CEtiquetas2.Desencolar()
                if e2 == e1 {
                    continuar = falso
                }
                else {
                    CEtiquetas1.Encolar(e2)
                }
            }
        }
    }
    CEtiquetas1.Destruir()
    CEtiquetas2.Destruir()
    return !continuar
}
