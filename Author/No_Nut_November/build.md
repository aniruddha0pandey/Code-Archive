```
$ cd tests
$ for i in $(seq 0 4); do mkdir $i && cd ./$i && touch in out && cd ..; done
$ python generate.py
$ cd .. && make main
$ for i in $(seq 0 4); do ./main < tests/$i/in > tests/$i/out; done
```