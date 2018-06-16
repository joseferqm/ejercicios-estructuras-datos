BuscarEtiqueta(e, G) -> bool {
	v = G.PrimerVértice()
	encontrada = falso
	while (v != vert_nulo && !encontrada) {
		if (G.Etiq(v) == e) {
			encontrada = verdadero
		}
		else {
			v = G.Siguiente(v)
		}
	}
	return encontrada
}