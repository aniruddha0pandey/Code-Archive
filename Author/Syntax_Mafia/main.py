import re

def creator(lines, file):
	for words in lines:
		for char in words:
			file.write(char)


def  arrange(lines, line_limit, new_lines=(), new_words=(), char_count=0, word_count=0):
	for words in lines:
		for char in words:
			word_count += 1
			char_count += len(char)
		spaces = line_limit - char_count

		new_words += (words[0],)

		for i in range(1, len(words)):
			allo = int(spaces / (word_count - 1))
			spaces = spaces - allo
			word_count =  word_count - 1
			new_words += (allo * " ",)
			new_words += (words[i],)
		new_words += ("\n",)
		new_lines += (new_words,)
		new_words = ()
		word_count = char_count = 0

	return new_lines


def trim(lines, line_limit, new_lines=(), new_words=()):
	for i in range(len(lines)):
		for word in lines[i]:
			if not word == " ":
				new_words += (word,)
		new_lines += (new_words,)
		new_words=()

	return new_lines


def limitfy(words, line_limit, para_line = [], lines = (), length = 0, i = 0):
	saved_line_limit = line_limit
	while not i == len(words):
		line_limit = line_limit - len(words[i])
		if line_limit >= 0:
			para_line.append(words[i])
			i = i + 1
			if i == len(words): lines = lines + (tuple(para_line),)
		else:
			line_limit = saved_line_limit
			lines = lines + (tuple(para_line),)
			para_line.clear()
	return lines


if __name__ == '__main__':
	# try: test_cases, line_limit = int(input()), int(input())
	# except ValueError: test_cases, line_limit = 1, 30 # 14(min)
	# string = input() or "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quid nunc honeste dicit? Huc et illuc, Torquate, vos versetis licet, nihil in hac praeclara epistula scriptum ab Epicuro congruens et conveniens decretis eius reperietis. Roges enim Aristonem, bonane ei videantur haec: vacuitas doloris, divitiae, valitudo; Ergo instituto veterum, quo etiam Stoici utuntur, hinc capiamus exordium. Aliter homines, aliter philosophos loqui putas oportere? Sed utrum hortandus es nobis, Luci, inquit, an etiam tua sponte propensus es? Duo Reges: constructio interrete. Scripta sane et multa et polita, sed nescio quo pacto auctoritatem oratio non habet. Alii rursum isdem a principiis omne officium referent aut ad voluptatem aut ad non dolendum aut ad prima illa secundum naturam optinenda. Non pugnem cum homine, cur tantum habeat in natura boni; Summus dolor plures dies manere non potest? Quamquam scripsit artem rhetoricam Cleanthes, Chrysippus etiam, sed sic, ut, si quis obmutescere concupierit, nihil aliud legere debeat. Habes, inquam, Cato, formam eorum, de quibus loquor, philosophorum. Id enim volumus, id contendimus, ut officii fructus sit ipsum officium."

	file = open("./tests/test1.in", "r")
	test_cases = int(file.readline())
	line_limit = int(file.readline())
	string = file.readline()

	file = open("./tests/test1.out", "w")

	test_cases = int(input())
	while test_cases > 0:
		line_limit = int(input())
		string = input()

		words = tuple(re.split(r'(\s)', string))
		lines = limitfy(words, line_limit)
		lines = trim(lines, line_limit)
		para = arrange(lines, line_limit)
		creator(para, file)
		test_cases = test_cases - 1
