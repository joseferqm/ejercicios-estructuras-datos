ColorearGrafo(GrafoNoDirigido G)
{
    // Efecto: Resuelve el problema de coloreo de grafos
    // Implementación: Búsqueda Exhaustiva Pura
    // Requiere: G inicializado y sin etiquetas repetidas
    // Modifica:

    numVert = G.NumVértices()
    CCGrafo.Iniciar() // Conjunto de conjuntos análogo a G
    SolAct.Iniciar() // Conjunto de conjuntos para almacenar la solución actual
    SolOpt.Iniciar() // Conjunto de conjuntos para almacenar la solución óptima

    v = G.PrimerVértice()
    I = 1
    while v != vértice_nulo
    {
        SolAct.AgregarConjuntoVacío(tipo_idConjunto(I))
        CCGrafo.AgregarConjuntoVacío(tipo_idConjunto(G.Etiq(v)))
        vAdy = G.PrimerVérticeAdyacente()
        while vAdy != vértice_nulo
        {
            CCGrafo.AgregarElementoAConjunto(vAdy, tipo_idConjunto(G.Etiq(v)))
            vAdy = G.SiguienteVérticeAdyacente(vAdy)
        }
        I++
        v = G.SiguienteVértice(v)
    }

    contSolFact = 0
    contColSolAct = 0
    contColSolOpt = 0

    ColorearVértice(G.PrimerVértice()) // El resultado queda en solOpt y contSol
}

ColorearVértice(tipo_vértice v)
{
    for C = 1 ... numVert
    {
        id1 = tipo_idConjunto(C)
        id2 = tipo_idConjunto(G.Etiq(v))
        conj1 = SolAct.Conjunto(id1)
        conj2 = CCGrafo.Conjunto(id2)
        if Intersección(conj1, conj2) == conj_vacío
        {
            SolAct.AgregarElementoAConjunto(v, id1)
            if SolAct.CardinalidadConjunto(id1) == 1
            {
                contColSolAct++
            }

            if G.SiguienteVértice(v) != vértice_nulo
            {
                contSolFact++
                if contColSolAct < contColSolOpt
                {
                    SolOpt = SolAct
                    contColSolOpt = contColSolAct
                }
            }
            else
            {
                ColocarVert(G.SiguienteVértice(v))
            }

            SolAct.BorrarElementoDeConjunto(v, id1)
            if SolAct.CardinalidadConjunto(id1) == 0
            {
                contColSolAct--
            }
        }
    }
}
