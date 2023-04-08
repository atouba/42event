import  requests
import  re

pokemon = input("Enter the name of a Pokemon: ")
url = "https://pokeapi.co/api/v2/pokemon/" + pokemon

response = requests.get(url)
if str(response) != "<Response [200]>":
    print("Pokemon not found")
    quit()

response = response.json()

abilities = re.findall("(?<='ability': {'name': ')(.*?)(?=')", str(response));

print("Name: ", pokemon.capitalize())
print("Abilities:")
for i in abilities:
    print("- " + i.capitalize())
