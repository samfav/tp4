CC=gcc
CFLAGS= -g -Wall
EXEC=tp3
OBJ=main.o tp4.o

all: $(OBJ)
	$(CC) $^ -o $(EXEC) $(CFLAGS)

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -rv *.o

mrproper: clean
	rm -rv $(EXEC)

