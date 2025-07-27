class File:
    def __init__(self):
        self.file = []
    
    def est_vide(self):
        return len(self.file) == 0

    def enfiler(self, e):
        self.file.append(e)

    def tete(self):
        assert not self.est_vide(), 'File vide!'
        return self.file[0]

    def defiler(self):
        assert not self.est_vide(), 'File vide!'
        return self.file.pop(0)
    
    def __str__(self):
        retour = ''
        for e in self.file[:-1]:
            retour += str(e) + ", "
        retour += str(self.file[-1])
        return retour



class ArbreBinaire():
    def __init__(self, valeur)-> None:
        self.cle = valeur
        self.gauche = None
        self.droite = None

    def ajout_gauche(self, valeur: int)-> None:
        if self.gauche == None:
            self.gauche = ArbreBinaire(valeur)
        else:
            self.gauche.ajout_gauche(valeur)

    def ajout_droite(self, valeur: int)-> None:
        if self.droite == None:
            self.droite = ArbreBinaire(valeur)
        else:
            self.droite.ajout_droite(valeur)

    def parcours_prefixe(self):
        print(self.cle)
        if self.gauche != None:
            self.gauche.parcours_prefixe()
        if self.droite != None:
            self.droite.parcours_prefixe()

    def parcours_infixe(self):
        if self.gauche != None:
            self.gauche.parcours_infixe()
        print(self.cle)
        if self.droite != None:
            self.droite.parcours_infixe()

    def parcours_suffixe(self):
        L = []
        if self.gauche != None:
            self.gauche.parcours_suffixe()
        if self.droite != None:
            self.droite.parcours_suffixe()
        print(self.cle)

    def parcours_largeur(self):
        file1 = File()
        L =[]
        file1.enfiler(self)
        while not file1.est_vide():
            noeud = file1.defiler()
            L.append(noeud.cle)
            if noeud.gauche != None:
                file1.enfiler(noeud.gauche)
            if noeud.droite != None:
                file1.enfiler(noeud.droite)
        print(L)


a1 = ArbreBinaire(1)
a1.ajout_gauche(2)
a1.ajout_droite(3)
a1.gauche.ajout_gauche(4)
a1.gauche.ajout_droite(5)
a1.droite.ajout_droite(6)
a1.gauche.droite.ajout_gauche(7)
a1.gauche.droite.ajout_droite(8)
a1.droite.droite.ajout_gauche(9)

print("Parcours prefixe")
a1.parcours_prefixe()
print()
print("Parcours infixe")
a1.parcours_infixe()
print()
print("Parcours suffixe")
a1.parcours_suffixe()
print()
print("Parcours en largeur")
a1.parcours_largeur()
