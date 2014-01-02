#Author: Jeff Bunce
#File type: Linux makefile
#Purpose: Simplify the compilation process
#Options
CC=g++
DEBUG=-g
CFLAGS=-Wall
FILES= permutateClient.C CSVBuilder.C BitPermutator.C
OBJECTS=
EXECUTABLE=permutate
#make arguments: all(defualt option), build,  clean

all : build

build : $(FILES) $(OBJECTS)
	g++ $(CFLAGS) $(FILES) $(OBJECTS) $(DEBUG) -o $(EXECUTABLE)

clean : 
	\rm *~ $(EXECUTABLE)