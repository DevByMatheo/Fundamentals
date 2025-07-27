def matrice(a):
    liste = ["a", "b", "c", "d", "e", "f", "g", "h"]
    n = len(liste)
    M = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if liste[j] in a[liste[i]]:
                M[i][j] = 1

    print("Matrice d'adjacence :")
    for i in range(n):
        print(M[i])

    return M

def nombre_sommets(a):
    return len(a)

def nombre_arete(a):
    n = 0
    for v in a.values():
        n += len(v)
    return n // 2

def degre(a, sommet):
    return len(a[sommet])

def sommet_plus_au_degre(a):
    valeur_max = 0
    for k in a.keys():
        deg = degre(a, k)
        if deg > valeur_max:
            valeur_max = deg
    L= []
    for k in a.keys():
        if degre(a, k) == valeur_max:
            L.append(k)


    return L

def voisin_sommet(a, sommet):
    return a[sommet]


G = {
    'a': ['b', 'c'],
    'b': ['a', 'd', 'e'],
    'c': ['a', 'd'],
    'd': ['b', 'c', 'e'],
    'e': ['b', 'd', 'f', 'g'],
    'f': ['e', 'g'],
    'g': ['e', 'f', 'h'],
    'h': ['g', 'i'],
}

matrice(G)
print()
print("Nombre de sommets :", nombre_sommets(G))
print("Nombre d'arêtes :", nombre_arete(G))
print("Degré du sommet 'a' :", degre(G, 'a'))
print("Max degré :", sommet_plus_au_degre(G))
print("Voisins du sommet 'a' :", voisin_sommet(G, 'a'))

print()



G1 = {
    'a': ['b', 'e'],
    'b': ['a', 'c'],
    'c': ['b', 'd', 'f'],
    'd': ['e', 'c', 'f'],
    'e': ['a', 'd', 'f'],
    'f': ['e', 'd', 'c']
}

print("Celui/Ceux qui a le plus d'ami est/sont :", " ".join(sommet_plus_au_degre(G1)))
