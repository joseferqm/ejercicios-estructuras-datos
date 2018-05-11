EtiquetasRepetidas(A) {
    L.Iniciar()
    L.AgregarAlFinal(A.Raiz())
    p = L.Primera()
    continuar = verdadero
    while p != pos_nula && continuar {
        n = L.Recuperar(p)
        nh = A.HijoMasIzquierdo(n)
        while nh != nodo_nulo && continuar {
            q = L.Ultima()
            L.AgregarAlFinal(nh)
            e = A.Etiqueta(nh)
            while q != pos_nula && continuar {
                if A.Etiqueta(L.Recuperar(q)) == e {
                    continuar = falso
                }
                else {
                    q = L.Anterior(q)
                }
            }
            nh = A.HermanoDerecho(nh)
        }
        p = L.Siguiente(p)
    }
    L.Destruir()
    return !continuar
}
