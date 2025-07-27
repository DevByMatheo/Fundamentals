from PIL import Image

image = Image.open("C:/Users/Matheo/Documents/Scolaire/NSI/Medias/coliseum.jpg")

# image.show()

print(f"Taille de l'image: longueur : {image.size[0]}px, largeur : {image.size[1]}px")

image_grise = image.convert("L")
image_grise.show()
image_grise.save("C:/Users/Matheo/Documents/Scolaire/NSI/Medias/coliseum_gris.jpg")
image_grise.close()