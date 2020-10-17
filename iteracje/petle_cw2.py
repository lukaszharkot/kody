def main(args):
   
    start = int(input("Podaj początek przedziału: "))
    koniec = int(input("Podaj koniec przedziału: "))
    
    for liczba in range(start, koniec + 1):
        if liczba >= 1:
            print(liczba)
    
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))