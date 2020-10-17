def main(args):
	
	m=int(input("Podaj liczbę początkową: "))
	n=int(input("Podaj liczbę końcową: "))
	
	for x in range(m, n):
		if x >= 10 and x <=100:
			if x % 2 == 0:  
				if x % 3 == 0:  
					print(x)
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
