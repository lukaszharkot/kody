def anagramy(r,wyraz):
    for i1 in range(0, r):
        for i2 in range(0, r):
            if i1 == i2:
                continue
            for i3 in range(0, r):
                if i3 == i1 or i3 == i2:
                    continue
                i4 = 6 - i1 - i2 - i3
                
            print(wyraz[i1], wyraz[i2], wyraz[i3], wyraz[i4])
    return 0


def main(args):
    r=5 
    wyraz=input("Podaj wyraz: ")
    anagramy(r-1,wyraz)

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))