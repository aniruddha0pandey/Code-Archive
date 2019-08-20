#!/bin/sh

tests_files=6
make main
for i in $(seq 2 $tests_files); do ./main < tests/${i}.in > tests/${i}.out; done
