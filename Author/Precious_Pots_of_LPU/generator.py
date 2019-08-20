import random, time 

def remove_dublicates(t):
	return list(dict.fromkeys(t))

def create_random(i, j, n):
	# time.sleep(1)
	# random.seed((time.time_ns()*3) % 19)
	t = [random.randint(i, j) for _ in range(n)]
	return remove_dublicates(t)

tests_files = 5
for file in range(tests_files):
	t = create_random(3, 20, 10) # (1<=T<=100)
	f = open("tests/" + str(file + 2) + ".in", "a")
	f.write(str(t[file]) + "\n")
	for i in range(t[file]):
		pots = create_random(1, 100, 50) # (1<=N<=10^5)
		count = 0
		borken_pots = [] # (1<=M<=N)
		for num in range(len(pots)):
			hop = random.randint(1, 20)
			count = count + hop
			if (count >= len(pots)): break
			borken_pots.append(pots[count])
		f.write(str(len(pots)) + " " + str(len(borken_pots) ) + "\n");
		for _ in pots: f.write(str(_) + " ");
		f.write("\n");
		for _ in borken_pots: f.write(str(_) + " ");
		f.write("\n");
	f.close()
