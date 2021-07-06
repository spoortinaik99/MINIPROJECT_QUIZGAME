#Target_name : Dependencies
#<TAB>Command


SRC = quiz.c\
src/help.c\
src/game.c\
src/reset_score.c\
src/ show_record.c


INC = inc

all.out: $(SRC) 
	gcc $^ -I$(INC) -o $@

run : target
	./all.out