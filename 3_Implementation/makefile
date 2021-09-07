PROJ_NAME=LIB_MANAGEMENT

SRC= addbook.c\
src/create.c\
src/Issue.c\
src/main.c\
src/search.c\
src/stock.c

OBJ=addbook.o\
src/create.o\
src/Issue.o\
src/main.o\
src/search.o\
src/stock.o

INC= inc
CFLAGS =-I$(INC)

ifdef OS
   RM = rm -rf
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

build : $(SRC)
	gcc $^ -I$(INC) -o $(call Fixpath,$(PROJ_NAME).$(EXEC)) -lm

%.o:src/%.c
	gcc $^ -I$(INC) -c

run: build 
	./$(call Fixpath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call Fixpath,$(PROJ_NAME).$(EXEC))