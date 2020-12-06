
FLAGS= -Wall -g

all: main
#pashut tafil et main
#sequence of rulles
main:main.o myBank.o
	gcc $(FLAGS) -o main main.o myBank.o

main.o: main.c myBank.h  
	gcc $(FLAGS) -c  main.c
myBank.o:myBank.c myBank.h 
	gcc $(FLAGS) -c myBank.c




.PHONY: clean all
#remove mitbazea rak ad .so yashir yashir rak maind mains
clean:
	rm -f *.o main

