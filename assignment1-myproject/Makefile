main:main.o sort.o merge.o
	gcc main.o sort.o merge.o -o merge-sort
main.o:main.c
	gcc -c main.c
sort.o:sort.c
	gcc -c sort.c
merge.o:merge.c
	gcc -c merge.c
clean:
	rm merge-sort *.o
