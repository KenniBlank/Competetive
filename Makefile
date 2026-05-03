CC = g++
CFLAGS = -std=c++11 -O2 -Wall

%:
	$(CC) $(CFLAGS) $@.cpp -o $@
	@./$@
	@rm $@

clean:
	# @rm test_input.in
	@rm test_output.out
