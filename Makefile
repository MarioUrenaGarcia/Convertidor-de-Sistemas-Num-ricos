ejecutable: main.o alfaconv.o
	gcc -o serie3i main.o alfaconv.o -lm
	clear
	./serie3i

main.o: main.c
	gcc -c main.c

alfaconv.o: alfaconv.c
	gcc -c alfaconv.c

clean:
	rm *.o
	rm ejecutable
