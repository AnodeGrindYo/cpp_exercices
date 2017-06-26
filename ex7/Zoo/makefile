.PHONY: clean

all: zoo.out
	@echo "compilation terminee"

clean:
	rm -f *.o zoo.out
	@echo "fichiers objet et zoo.out supprimes"

zoo.out: main.o Animal.o Felin.o AdesAiles.o Chat.o Tigre.o Canard.o Autruche.o
	g++ main.o Animal.o Felin.o AdesAiles.o Chat.o Tigre.o Canard.o Autruche.o -o zoo.out

main.o: main.cpp Animal.o Felin.o AdesAiles.o Chat.o Tigre.o Canard.o Autruche.o
	g++ -c main.cpp -o main.o

Chat.o: Chat.cpp Animal.o Felin.o
	g++ -c Chat.cpp -o Chat.o

Tigre.o: Tigre.cpp Animal.o Felin.o
	g++ -c Tigre.cpp -o Tigre.o

Canard.o: Canard.cpp Animal.o AdesAiles.o
	g++ -c Canard.cpp -o Canard.o

Autruche.o: Autruche.cpp Animal.o AdesAiles.o
	g++ -c Autruche.cpp -o Autruche.o

Felin.o: Felin.cpp Animal.o
	g++ -c Felin.cpp -o Felin.o

AdesAiles.o: AdesAiles.cpp Animal.o
	g++ -c AdesAiles.cpp -o AdesAiles.o

Animal.o: Animal.cpp
	g++ -c Animal.cpp -o Animal.o