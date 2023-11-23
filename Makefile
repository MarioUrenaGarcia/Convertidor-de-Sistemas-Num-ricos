ejecutable: serie3i.o alfaconv.o
	gcc -o serie3i.out serie3i.o alfaconv.o -lm
	clear
	./serie3i.out

main.o: serie3i.c
	gcc -c serie3i.c

alfaconv.o: alfaconv.c
	gcc -c alfaconv.c

clean:
	rm *.o
