#Makefile

Uebung2 : Uebung2.o stringCompare.o wordCount.o
Uebung2.o : Uebung2.cpp Uebung2.h
stringCompare.o : stringCompare.cpp Uebung2.h
wordCount.o : wordCount.cpp Uebung2.h

#Regel, um aus .cpp-Dateien .o-Dateien zu erzeugen
#$< ist die erste Abhaengigkeit
%.o: %.cpp
		g++ -Wall -Wextra -g -c $<
		
#Regel, um aus .o-Dateien eine ausführbare Datei zu erzeugen
#$@ ist das zu erzeugende Ziel
#$^ ist die Liste aller Abhaengigkeiten dieses Ziels
%: %.o
		g++ -o $@ $^
		
#Regel, um aus .c-Dateien eine ausführbare Datei zu erzeugen
#$@ ist das zu erzeugende Ziel
#$^ ist die Liste aller Abhaengigkeiten dieses Ziels
%: %.c
		gcc -Wall -Wextra -g -o $@ $^

