CC = g++
CPPFLAGS = -g -Wall

default: searchengine clean

searchengine: search_engine.o read_input.o
	$(CC) $(CPPFLAGS) -o search_engine search_engine.o read_input.o

search_engine.o: search_engine.cpp
	$(CC) $(CPPFLAGS) -c search_engine.cpp

read_input.o : read_input.cpp read_input.h
	$(CC) $(CPPFLAGS) -c read_input.cpp


clean: 
	rm *.o