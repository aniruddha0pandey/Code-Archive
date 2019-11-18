import random

t_limit = 100
n_limit = 30

choices = ['S', 'N']

test_files = 5
for file in range( 1, test_files ):
	test = random.randint(1, t_limit)
	f = open("{}/in".format(str(file)), "w+")
	f.write("{}\n".format(str(test)))
	for t in range(test):
		n = random.randint(2, n_limit)
		k = random.randint(1, n - 1)
		f.write("{} {}\n".format(str(k), str(n)))
		ls = ""
		for _ in range(n):
			ls += "{} ".format(random.choice(choices))
		f.write("{}\n".format(str(ls)))
	f.close()