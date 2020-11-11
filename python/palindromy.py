def czy_palindrom(wyraz):
    rozmiar=len(wyraz)/2
    for i in range(0, int(rozmiar)):
        if wyraz[i] != wyraz[int(rozmiar)-1-i]:
            return False
    return True

def main(args):
    wyraz = input("Podaj słowo: ")
    
    if(czy_palindrom(wyraz)):
        print("To jest palindrom!")
    else: 
        print("To nie jest palindrom!")

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
