BuscarEtiqueta(tipo_etiqueta e, GrafoDirigido G) -> bool {

	// Efecto: Devuelve verdadero si e está en G, y devuelve falso si no
	// Requiere: G inicializado
	// Modifica:

	v = G.PrimerVértice()
	encontrada = falso
	while (v != vértice_nulo && !encontrada) {
		if (G.Etiq(v) == e) {
			encontrada = verdadero
		}
		else {
			v = G.Siguiente(v)
		}
	}
	return encontrada
}
