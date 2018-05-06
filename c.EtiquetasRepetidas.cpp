EtiquetasRepetidas(A) {
    C1.Iniciar()
    C2.Iniciar()
    C1.Encolar(A.Raiz())
    continuar = verdadero
    while !C1.Vacia() {
        n = C1.Desencolar()
        C2.Encolar(n)
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo {
            C1.Encolar(nh)
            nh = A.HermanoDerecho(nh)
        }
    }
    while (!C2.Vacia() || !C1.Vacia()) && continuar {
        if !C2.Vacia() && continuar {
            n = C2.Desencolar()
            e = A.Etiqueta(n)
            while !C2.Vacia() && continuar {
                n = C2.Desencolar()
                if A.Etiqueta(n) == e {
                    continuar = falso
                } else {
                    C1.Encolar(n)
                }
            }
        }
        if !C1.Vacia() && continuar {
            n = C1.Desencolar()
            e = A.Etiqueta(n)
            while !C1.Vacia() && continuar {
                n = C1.Desencolar
                if A.Etiqueta(n) == e {
                    continuar = falso
                }
                else {
                    C2.Encolar(n)
                }
            }
        }
    }
    C1.Destruir()
    C2.Destruir()
    return !continuar
}
