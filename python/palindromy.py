def czy_palindrom(wyraz):
    i = 0
    rozmiar = len(wyraz)
    czyp = True

    while(i < rozmiar/2):
        if(wyraz[i] != wyraz[rozmiar-1-i]):
            czyp = False
        break
    return czyp

def main(args):
    wyraz = input("Podaj słowo: ")
    
    if(czy_palindrom(wyraz)):
        print("To jest palindrom!")
    else: 
        print("To nie jest palindrom!")

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
