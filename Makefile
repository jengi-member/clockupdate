CC = gcc
SRC = clockupdate.c
all: clockupdate

install: all
	mkdir -p ~/.local/bin
	cp -f clockupdate ~/.local/bin
	
uninstall:
	rm -f ~/.local/bin/clockupdate
