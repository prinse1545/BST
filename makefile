# Philipp Moura Srivastava
# Filename: makefile
# Description: A makefile for the BST class
# 16.10.2019
# ++++++++++++++++++++++++++++++++++

CC = g++
LD = g++

CFLAGS = -g -Wall -c
LDFLAGS = -g

all: test_bst imdb BST.o

BST.o: BST.h
	$(CC) $(CFLAGS) BST.h

test_bst.o: test_bst.cc BST.h
	$(CC) $(CFLAGS) test_bst.cc

test_bst: test_bst.o BST.h
	$(LD) $(LDFLAGS) -o test_bst test_bst.o

test_dict.o: test_dict.cc dict.h
	$(CC) $(CFLAGS) test_dict.cc

test_dict: test_dict.o dict.h
	$(LD) $(LDFLAGS) -o test_dict test_dict.o

imdb.o: imdb.cc dict.h
	$(CC) $(CFLAGS) imdb.cc

imdb: imdb.o dict.h
	$(LD) $(LDFLAGS) -o imdb imdb.o



clean:
	rm *.o
