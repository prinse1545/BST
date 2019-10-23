# Philipp Moura Srivastava
# Filename: makefile
# Description: A makefile for the bst class
# 16.10.2019
# ++++++++++++++++++++++++++++++++++

CC = g++
LD = g++

CFLAGS = -g -Wall -c
LDFLAGS = -g

all: test_bst imdb


test_bst.o: test_bst.cc bst.h
	$(CC) $(CFLAGS) test_bst.cc

test_bst: test_bst.o bst.h bst.cc
	$(LD) $(LDFLAGS) -o test_bst test_bst.o

test_dict.o: test_dict.cc dict.h
	$(CC) $(CFLAGS) test_dict.cc

test_dict: test_dict.o dict.h dict.cc
	$(LD) $(LDFLAGS) -o test_dict test_dict.o

imdb.o: imdb.cc dict.h
	$(CC) $(CFLAGS) imdb.cc

imdb: imdb.o dict.h dict.cc
	$(LD) $(LDFLAGS) -o imdb imdb.o



clean:
	rm *.o
