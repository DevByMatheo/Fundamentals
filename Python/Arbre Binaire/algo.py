class ArbreBinaire():
    def __init__(self, valeur)-> None:
        self.cle = valeur
        self.gauche = None
        self.droite = None

    def affiche(self):
        if self == None:
            return None
        elif self.gauche == None and self.droite == None:
            return self.cle
        elif self.gauche != None and self.droite == None:
            return (self.cle, self.gauche.affiche(), None)
        elif self.gauche == None and self.droite != None:
            return (self.cle, None, self.droite.affiche())
        else:
            return (self.cle, self.gauche.affiche(), self.droite.affiche())
        
    def ajoute(self, valeur: int):
        if valeur < self.cle:
            if self.gauche == None:
                self.gauche = ArbreBinaire(valeur)
            else:
                self.gauche.ajoute(valeur)
        else:
            if self.droite == None:
                self.droite = ArbreBinaire(valeur)
            else:
                self.droite.ajoute(valeur)

    def recherche(self, valeur: int):
        if self == None:
            return False
        elif self.cle == valeur:
            return True
        elif self.cle < valeur:
            return self.droite.recherche()
        else:
            return self.gauche.recherche()

    def minimum(self):
        if self.gauche == None:
            return self.cle
        else:
            return self.gauche.minimum()

    def maximum(self):      
        if self.droite == None:
            return self.cle
        else:
            return self.droite.maximum() 



a1 = ArbreBinaire(23)
a1.ajoute(15)
a1.ajoute(42)
a1.gauche.ajoute(6)
a1.gauche.ajoute(18)
a1.gauche.gauche.ajoute(10)
a1.droite.ajoute(37)
a1.droite.ajoute(53)
a1.droite.gauche.ajoute(26)
a1.droite.droite.ajoute(49)
print(a1.affiche())

