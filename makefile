all:
	mkdir -p bin
	g++ src/question_1.cpp -o bin/question_1.out
	g++ src/question_2.cpp -o bin/question_2.out
	g++ src/question_3_new.cpp -o bin/question_3_new.out
	g++ src/question_4.cpp -o bin/question_4.out
	g++ src/question_5.cpp -o bin/question_5.out
	g++ src/question_6.cpp -o bin/question_6.out
	g++ src/question_7.cpp -o bin/question_7.out
	g++ src/question_8.cpp -o bin/question_8.out
	g++ src/question_10.cpp -o bin/question_10.out
	g++ src/question_2.cpp -o bin/question_2.out
clean:
	rm -rf bin
