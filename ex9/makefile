COMP = g++
black = \033[30m
red = \033[31m
green = \033[32m
yellow = \033[33m
blue = \033[34m
magenta = \033[35m
cyan = \033[36m
white = \033[37m
defcolor = \033[0m

.PHONY: clean

all: MilleSabords.out
	@echo "$(magenta)Compilation terminee... A l'abordage, moussaillon!"
	bash launch.sh

MilleSabords.out: main.o GPS.o Equipage.o interface.o
	@echo "$(red)Formation du bourreau pour l'executable"
	$(COMP) main.o GPS.o Equipage.o interface.o -o MilleSabords.out

main.o: main.cpp interface.o
	@echo "$(green)Comptage des doigts de main.o"
	$(COMP) -c main.cpp -o main.o

interface.o: interface.cpp Equipage.o
	@echo "$(magenta)Confection des plats du menu"
	$(COMP) -c interface.cpp -o interface.o

Equipage.o: Equipage.cpp GPS.o
	@echo "$(yellow)Recrutement de l'equipage"
	$(COMP) -c Equipage.cpp -o Equipage.o

GPS.o: GPS.cpp
	@echo "$(blue)Localisation du Hollandais Volant"
	$(COMP) -c GPS.cpp -o GPS.o

clean:
	@echo "$(cyan)Sabordage de toute la flotte"
	rm -f *.o MilleSabords.out

supercopter:
	bash FindThem.sh

