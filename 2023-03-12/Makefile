CCX=cc -Wall -Werror -Wextra -pedantic -g -std=c99

all: main.o func.o	
	$(CCX) -o main main.o func.o

main.o: main.c
	$(CCX) -c main.c

func.o: func.c
	$(CCX) -c func.c

clean:
	rm main *.o