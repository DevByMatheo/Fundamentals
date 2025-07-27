import requests

url = """https://geo.api.gouv.fr/departements/32/communes?fields=nom,code&format=json"""

rep = requests.get(url)
# print(rep.json()[:4])

url = """https://geo.api.gouv.fr/communes?codePostal=32200"""
print(requests.get(url).json(), "\n\n")