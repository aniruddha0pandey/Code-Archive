import random

t_limit = 100
n_limit = 30

test_files = 3
for file in range( 1, test_files + 1 ):
	t = random.randint(1, t_limit)
	f = open("tests/in{}".format(str(file)), "a")
	f.write("{}\n".format(str(t)))
	for cars in range(t):
		n = random.randint(1, n_limit)
		f.write("{} ".format(str(n)))
	f.close()