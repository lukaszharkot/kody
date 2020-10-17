def main(args):
	waga = float(input("Podaj swoją wagę w kilogramach: ")) 
	wzrost = int(input("Podaj swój wzrost w centymetrach: ")) 

	wzrost = wzrost/100


	bmi = waga/(wzrost*wzrost)



	if bmi < 18.5:
		print(bmi , "Niedowaga")
	elif bmi<25:
		print( bmi,"Bmi w normie")
	elif bmi<30:
		print(bmi,"Nadwaga")
	else:
		print(bmi, "Otyłość")

	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
