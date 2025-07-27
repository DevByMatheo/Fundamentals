def matrice2liste(matrice, noms):
    dico = {}
    dico2 = {}
    for i in range(len(matrice)):
        dico[noms[i]] = matrice[i]
    for k, v in dico.items():
        dico2[k] = []
        for i in range(len(v)):
            if v[i] != 0:
                dico2[k].append((noms[i], v[i]))
    return dico2

def liste2matrice(dico):
    n = list(dico.keys())
    l = [[0] * len(n) for _ in range(len(n))]
    for i, cle in enumerate(n):
        for sommet, valeur in dico[cle]:
            j = n.index(sommet)
            l[i][j] = valeur
    return l, n

def matrice2liste2(dico):
    n = list(dico.keys())
    l = [[0] * len(n) for _ in range(len(n))]
    for i in range(len(n)):
        for k in dico.keys():
            if i < len(dico[k]):
                if n[i] in dico[k][i]:
                    l[i].append(dico[k][i][1])
                else:
                    l[i].append(0)
    return l, n

def matrice2liste2(dico):
    liste_sommets = list(dico.keys())
    l = [[0] * len(n) for _ in range(len(n))]
    n = len(liste_sommets)

matrice1 = [
[0, 0, 0, 100, 0, 120, 120],
[0, 0, 110, 0, 0, 0, 0],
[0, 110, 0, 0, 440, 0, 490],
[100, 0, 0, 0, 190, 150, 105],
[0, 0, 440, 190, 0, 0, 220],
[120, 0, 0, 150, 0, 0, 0],
[120, 0, 490, 105, 220, 0, 0]
]

matrice = [[1,2,1,0],
           [2,3,0,1],
           [1,0,0,0],
           [0,1,0,4]]

assert matrice1[0][6] == 120
dico = matrice2liste(matrice1, ["A", "G", "L", "M", "P", "R", "T"])
"""
{'A': [('M', 100), ('R', 120), ('T', 120)], 'G': [('L', 110)],
'L': [('G', 110), ('P', 440), ('T', 490)],
'M': [('A', 100), ('P', 190), ('R', 150), ('T', 105)],
'P': [('L', 440), ('M', 190), ('T', 220)],
'R': [('A', 120), ('M', 150)], 'T': [('A', 120), ('L', 490), ('M', 105), ('P', 220)]}
"""
l, n = liste2matrice(dico)
print(l)
print(n)

test =  matrice2liste(matrice, ["A", "B", "C", "D"])
assert test['C'] == [("A", 1)]
assert ("B",2) in test['A']
assert ("D", 4) in test['D']
l, n = liste2matrice(test)
assert n == ["A", "B", "C", "D"]
assert l == [[1,2,1,0],
            [2,3,0,1],
            [1,0,0,0],
            [0,1,0,4]]
