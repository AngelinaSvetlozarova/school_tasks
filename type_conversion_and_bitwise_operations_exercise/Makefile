main.exe:main.c quadraticroots.o quadraticroots.h
	gcc main.c -lm quadraticroots.o -o main.exe
quadraticroots.o:quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	del -f *.exe *.o