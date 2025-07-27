import math

class Triangle:
    def __init__(self, base, hauteur):
        self.b = base
        self.h = hauteur
    
class Disque:
    def __init__(self, rayon):
        self.r = rayon

class Carre:
    def __init__(self, cote):
        self.c = cote
    
class Rectangle:
    def __init__(self, longueur, largeur):
        self.long = longueur
        self.larg = largeur
    
class Parallelogramme:
    def __init__(self, base, hauteur):
        self.b = base
        self.h = hauteur
    
def aires(object):
    if type(object) == Triangle:
        return (object.b*object.h)/2
    elif type(object) == Disque:
        return math.pi*(object.r**2)
    elif type(object) == Carre:
        return (object.c**2)
    elif type(object) == Rectangle:
        return (object.long*object.larg)
    elif type(object) == Parallelogramme:
        return (object.b*object.h)
    else:
        return "Type d'objet inconnu"

def perimetres(object):
    if type(object) == Triangle:
        return "Impossible de calculer le périmètre"
    elif type(object) == Disque:
        return (2*math.pi*object.r)
    elif type(object) == Carre:
        return (4*object.c)
    elif type(object) == Rectangle:
        return (2*object.long+2*object.larg)
    elif type(object) == Parallelogramme:
        return"Impossible de calculer le périmètre"
    else:
        return "Type d'objet inconnu"
