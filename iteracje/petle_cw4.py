def main(args):
	
	m=int(input("Podaj liczbę początkową: "))
	n=int(input("Podaj liczbę końcową: "))
	liczba = 0
	
	for liczba in range(m, n):
		if liczba >= 10 and liczba <=100:
			if liczba % 2 == 0:  
				if liczba % 3 == 0:  
					print(liczba)
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))