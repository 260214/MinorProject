# comments

#Target : dependency
#<TAB>Command

PROJECT_NAME =project.exe
SRC = calculator.c\
src\calculatorDefinition.c

INC= inc

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o project.exe

run :project.exe
	project.exe	


clean:
	del/q *.exe


# gcc main.c test_complex_calculator.c  -o all.exe
