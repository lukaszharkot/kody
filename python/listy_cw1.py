def pobierzOceny(lista, ile):
    while ile > 0:
        ocena = int(input("Podaj ocenę: "))
        if ocena > 0 and ocena <7:
            lista.append(ocena)
            ile -= 1
        else:
            print("Błędne dane")
            
def obliczsrednia(lista):
    suma = 0
    for ocena in lista:
        suma+=ocena
    return suma/len(lista)
    #return sum(lista)/len(lista)

def main(args):
    ile = int(input("Podaj ilość ocen: "))
    lista = [] #pusta lista
    pobierzOceny(lista , ile)

    print(lista)
    
    print("Średnia: ",obliczsrednia(lista))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
