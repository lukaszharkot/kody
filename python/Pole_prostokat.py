

def main(args):
    bok1 = int(input("Podaj pierwszy bok: "))
    bok2 = int(input("Podaj drugi bok: "))
    pole = bok1 * bok2
    print("pole: ", pole)
    obwod = 2 * bok1 + 2 * bok2
    print("obwod: ", obwod)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
