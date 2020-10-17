def main(args):
	w = int(input("Podaj liczbę punktów uzyskaną przez ucznia ucznia: "))

	if w < 0 or w > 60:
		print("Błędne dane")
	elif w < 20:
		print("Grupa podstawowa")
	elif w >= 20 and w <= 40:
		print("Grupa średniozaawansowana")
	else:
		print("Grupa zaawansowana")
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
