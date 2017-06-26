#project : ClasseDate
#makefile created by Adrien G

CPP = g++
OBJ = main.o Date.o
LINKOBJ = main.o Date.o
BIN	= MonProgramme.out
RM = rm -f

.PHONY: clean

all: $(BIN)
	@echo "Compilation terminee"

clean:
	${RM} $(OBJ) $(BIN)
	@echo "Suppression des fichiers *.o et de l'executable"

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o  $(BIN)
	@echo "Creation de l'executable $(BIN)"

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $
	@echo "Creation de main.o"

Date.o: Date.cpp
	$(CPP) -c Date.cpp -o Date.o
	@echo "Creation de Date.o"

snow:
	bash ilneige.sh