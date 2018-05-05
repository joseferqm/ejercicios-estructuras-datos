Iguales(A1, A2) {
    if A1.NumElem() != A2.NumElem() {
        return falso
    }
    else {
        if A1.NumElem == 0 {    // Ya se ha verificó que numElem de A1 es igual a numElem de A2, entonces basta con verificar que numElem de cualquiera es 0 para concluir que son iguales
            return verdadero
        }
        else {
            if A1.Etiqueta(A1.Raiz()) != A2.Etiqueta(A2.Raiz()) {
                return falso
            }
            else {
                C1.Iniciar
                C2.Iniciar
                C1.Encolar(A1.Raiz())
                C2.Encolar(A2.Raiz())
                continuar = verdadero
                while !C1.Vacia() && continuar {    // Las encoladas y desencoladas se hacen 1:1, entonces basta con verificar que una de las colas no está vacía
                    n1 = C1.Desencolar()
                    n2 = C2.Desencolar()
                    if A1.NumHijos(n1) != A2.NumHijos(n2) {
                        continuar = falso
                    }
                    else {
                        nh1 = A1.HijoMasIzquierdo(n1)
                        nh2 = A2.HijoMasIzquierdo(n2)
                        while nh1 != nodo_nulo && continuar {   // Ya se verificó que numHijos de n1 es igual a numHijos de n2, entonces basta con verificar que cualquier nh es un nodo no nulo para continuar
                            if A1.Etiqueta(nh1) != A2.Etiqueta(nh2) {
                                continuar = falso
                            } else {
                                C1.Encolar(nh1)
                                C2.Encolar(nh2)
                                nh1 = A1.HermanoDerecho(nh1)
                                nh2 = A2.HermanoDerecho(nh2)
                            }
                        }
                    }
                }
                C.Destruir()
                return continuar
            }
        }
    }
}
