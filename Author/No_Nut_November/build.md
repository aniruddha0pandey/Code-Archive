```
$ cd tests
$ for i in $(seq 0 3); do mkdir $i && cd ./$i && touch in out && cd ..; done
$ make main && ./main < tests/0/in > tests/0/out
```