all: help.exe strlength.exe strconcat.exe strcompare.exe
help.exe:menu_for_help.c
	gcc menu_for_help.c -o menu_for_help.exe
mystrings.o:mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o
strlength.exe:strlength.c mystrings.h mystrings.o
	gcc strlength.c mystrings.o -o strlength.exe
strconcat.exe:strconcat.c mystrings.h mystrings.o
	gcc strconcat.c mystrings.o -o strconcat.exe
strcompare.exe:strcompare.c mystrings.h mystrings.o
	gcc strcompare.c mystrings.o -o strcompare.exe
clean:
	del -f *.exe *.o