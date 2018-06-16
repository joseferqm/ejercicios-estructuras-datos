Kruskal(G, L) { // en L se almacenan como tripletas las aristas del AAMC
	CC.Iniciar()	// en CC se almacenan los componentes conexos
	D.Iniciar()		// en D se almacenan como tripletas las aristas de G recorridas y que ya estan en el APO
	APO.Iniciar()	// en APO se almacenan como tripletas las aristas de G ordenadas ascendentemente por peso
	id = 1			// variable de tipo_identificador para el conjunto del CC
	v = G.PrimerVértice()
	while (v != vert_nulo) {
		CC.AgregarConjuntoDeCard1(id, v)
		id++
		va = G.PrimerVérticeAdyacente(v)
		while (va != vert_nulo) {
			arista = Tripleta(v, va, G.Peso(v, va))
			if !D.Pertenece(arista) {
				APO.Meter(arista)
				D.Agregar(arista)
			}
			va = G.SiguienteVérticeAdyacente(v, va)
		}
		v = G.SiguienteVértice(v)
	}
	numConj = CC.NumConjuntos()
	while (numConj > 1) {
		arista = APO.Suprimir()
		v = arista.Primero()
		va = arista.Segundo()
		id1 = CC.ConjuntoAlQuePertenece(v)
		id2 = CC.ConjuntoAlQuePertenece(va)
		if (id1 != id2) {
			CC.Unir(id1, id2)
			numConj--
			L.Agregar(arista)
		}
	}
	CC.Destruir()
	D.Destruir()
	APO.Destruir()
}