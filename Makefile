CC = g++

EXECS = $(patsubst %.cc,%,$(wildcard *.cc))


all: $(EXECS)


% : %.cc
	$(CC) $*.cc -o $*





clean:
	rm -f $(EXECS)
