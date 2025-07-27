import random

class Pile:
    def __init__(self):
        self.L = []

    def est_vide(self):
        return self.L == []

    def depiler(self):
        assert not self.est_vide(), "pile vide"
        return self.L.pop()

    def sommet(self):
        assert not self.est_vide(), "pile vide"
        return self.L[-1]

    def empiler(self, x):
        self.L.append(x)


#v = random.choice(V)

def dfs(G, sommet):
    sommets_visites = [sommet]
    sommets_fermes = []
    p = Pile()
    p.empiler(sommet)
    while not p.est_vide():
        sommet  = p.sommet()
        voisins = [elt for elt in G[sommet] if elt not in sommets_visites]
        if voisins != []:
            v = random.choice(voisins)
            sommets_visites.append(v)
            p.empiler(v)
        else:
            sommets_fermes.append(sommet)
            p.depiler()
    return sommets_visites

graphe = {"A": ["C"], "B": ["A", "D", "E"], "C":["A", "D"], "D":["E", "C"],
          "E":["D", "G"], "F": ["E", "G"], "G": ["H", "E", "F"], "H": ["G"]}

#------------------------------------------------------------------------------

class File:
    def __init__(self):
        self.L = []

    def est_vide(self):
        return self.L == []

    def defiler(self):
        assert not self.est_vide(), "file vide"
        return self.L.pop(0)

    def enfiler(self, x):
        self.L.append(x)

    def taille(self):
        return len(self.L)

    def sommet(self):
        return self.L[0]

    def present(self, x):
        return x in self.L


def voisin_sommet(a, sommet):
    return a[sommet]

def bfs(G, sommet):
    sommets_visites = []
    f = File()
    f.enfiler(sommet)
    while not f.est_vide():
        sommet = f.defiler()
        if sommet not in sommets_visites:
            sommets_visites.append(sommet)
        for elt in G[sommet]: # ou voisin_sommet(G, sommet)
            if elt not in sommets_visites and not f.present(elt):
                f.enfiler(elt)
    return sommets_visites

graphe = {"A": ["C"], "B": ["A", "D", "E"], "C":["A", "D"], "D":["E", "C"],
          "E":["D", "G"], "F": ["E", "G"], "G": ["H", "E", "F"], "H": ["G"]}

print(bfs(graphe, "A"))
#['A', 'C', 'D', 'E', 'G', 'H', 'F']