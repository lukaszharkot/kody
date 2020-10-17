#Program sumuje liczby parzyste w zakresie <0, 100>


def main(args):

    Początek = int(input("Podaj liczbę końcową: "))
    Końcówa = int(input("Podaj liczbę końcową: "))

    Essa = 0

    for Dab in range(Początek, Końcówa + 1):
        if Dab%2==0:
            Essa = Essa + Dab
    print(Essa)




    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
