
.PHONY: clean

all: zoo.out
	@echo "\033[0mcompilation terminee\n"
	@bash launch.sh

clean:
	@echo "\033[95mfichiers objet et zoo.out supprimes"
	rm -f *.o zoo.out	

zoo.out: main.o Animal.o Felin.o AdesAiles.o Aquatique.o Chat.o Tigre.o Canard.o Autruche.o Lion.o Paracanthurus.o Axolotl.o User.o Auxiliaire.o Griffon.o
	@echo "\033[31mCreation du zoo"
	g++ main.o Animal.o Felin.o AdesAiles.o Aquatique.o Chat.o Tigre.o Canard.o Autruche.o Lion.o Paracanthurus.o Axolotl.o User.o Auxiliaire.o Griffon.o -o zoo.out	

main.o: main.cpp Auxiliaire.o
	@echo "\033[32mCreation de main.o"
	g++ -c main.cpp -o main.o	

Chat.o: Chat.cpp Chat.h Felin.o
	@echo "\033[33mCreation des chats"
	g++ -c Chat.cpp -o Chat.o

Tigre.o: Tigre.cpp Tigre.h Felin.o
	@echo "\033[34mCreation des tigres"
	g++ -c Tigre.cpp -o Tigre.o

Lion.o: Lion.cpp Lion.h Felin.o
	@echo "\033[34mCreation des lions"
	g++ -c Lion.cpp -o Lion.o

Canard.o: Canard.cpp Canard.h AdesAiles.o
	@echo "\033[35mCreation des canards"
	g++ -c Canard.cpp -o Canard.o

Autruche.o: Autruche.cpp Autruche.h AdesAiles.o
	@echo "\033[36mCreation des autruches"
	g++ -c Autruche.cpp -o Autruche.o

Paracanthurus.o: Paracanthurus.cpp Aquatique.o
	@echo "\033[33mCreation des paracanthurus"
	g++ -c Paracanthurus.cpp -o Paracanthurus.o

Axolotl.o: Axolotl.cpp Axolotl.h Aquatique.o
	@echo "\033[31mCreation des axolotl"
	g++ -c Axolotl.cpp -o Axolotl.o

Aquatique.o: Aquatique.cpp Aquatique.h Animal.o
	@echo "\033[37mCreation des bestioles aquatiques"
	g++ -c Aquatique.cpp -o Aquatique.o

Griffon.o: Griffon.cpp Griffon.h Felin.o AdesAiles.o
	@echo "\033[36mCreation des griffons"
	g++ -c Griffon.cpp -o Griffon.o

Felin.o: Felin.cpp Felin.h Animal.o
	@echo "\033[37mCreation des felins"
	g++ -c Felin.cpp -o Felin.o

AdesAiles.o: AdesAiles.cpp AdesAiles.h Animal.o
	@echo "\033[92mCreation des ailes"
	g++ -c AdesAiles.cpp -o AdesAiles.o

Animal.o: Animal.cpp Animal.h
	@echo "\033[93mCreation des animaux..."
	g++ -c Animal.cpp -o Animal.o

Auxiliaire.o: Auxiliaire.cpp Auxiliaire.h Chat.o Tigre.o Canard.o Autruche.o Lion.o Paracanthurus.o Axolotl.o User.o Griffon.o
	@echo "\033[0mCreation de l'interface..."
	g++ -c Auxiliaire.cpp -o Auxiliaire.o

User.o: User.cpp User.h
	@echo "\033[0mRecherche d'un acquereur pour le zoo..."
	g++ -c User.cpp -o User.o

snow:
	@bash ilneige.sh