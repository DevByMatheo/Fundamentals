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

    def affiche(self):
        if self == None:
            return None
        else:
            if self.gauche == None:
                sag = None
            else:
                sag = self.gauche.affiche()
            if self.droite == None:
                sad = None
            else:
                sad = self.droite.affiche()
            return (self.cle, sag, sad)
        
    def taille(self):
        if self == None:
            return 0
        else:
            if self.gauche == None:
                taille_sag = 0
            else:
                taille_sag = self.gauche.taille()
            if self.droite == None:
                taille_sad = 0
            else:
                taille_sad = self.droite.taille()
            return 1 + taille_sag + taille_sad 


    def hauteur(self):
        if self == None:
            return 0
        else:
            if self.gauche == None:
                hauteur_sag = 0
            else:
                hauteur_sag = self.gauche.hauteur()
            if self.droite == None:
                hauteur_sad = 0
            else:
                hauteur_sad = self.droite.hauteur()
            if hauteur_sag > hauteur_sad:
                return 1 + hauteur_sag
            else:
                return 1 + hauteur_sad


arbre1 = ArbreBinaire(15)
arbre1.ajout_gauche(8)
arbre1.ajout_droite(20)
arbre1.ajout_droite(10)
print(f'L arbre est {arbre1.affiche()}')
print(f'La taille est {arbre1.taille()}')
print(f'La hauteur est {arbre1.hauteur()}')


