Yashwant Singh is an aspiring graduate student. He's writing a research papers on hardware virtualization for subsystem modulation. After compeletion of his research he realized, immature of him he has written the whole paper in one go into a single paragraph. Now he has to curate the whole paragraph into the syntax of a research paper. The syntax specifies the following rules:

1. The whole string should be converted to a column.
2. Each line in a column should characters equal or less than the specifed character limit.
3. The characters should fill the whole line, distributing spaces equally.  
	**3.1** Minimum one space is required between words.  
	**3.2** Distribution weight is higher towards end of the line.  

Example:

Convenience is one of the factors to consider when building Linux distributions; thus, the inclusion of preinstalled packages is possible for various applications. Containers, in contrast, are designed for lightweight virtualization to run many identical machines as possible with the least amount of overhead in terms of memory, disk and CPU. To cater for the low overhead requirements that provide faster spin-up time, vendors have developed container-optimized builds. The result is minimalistic distributions containing the minimum requirements for containers to run.

> Should be converted to a para like this &#8595;

<img src="https://raw.githubusercontent.com/aniruddha0pandey/Code-Archive/master/Author/Syntax_Mafia/para.PNG" alt="foreground" width="600" height="400" border="10" />

---------
##Input:
First line takes Test Case **T**.  
Second line contains an integer **L** denoting the Character Limit for all lines.  
  
For multiple test case, program will be run separately.

---------
##Output:
Print the Column made according to syntax specifed.

---------
##Constraints:
1 ≤ **T** ≤ 30  
20 ≤ **L** ≤ 40  

---------
##Example:
####Input:
1  
30  
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quid nunc honeste dicit? Huc et illuc, Torquate, vos versetis licet, nihil in hac praeclara epistula scriptum ab Epicuro congruens et conveniens decretis eius reperietis. Roges enim Aristonem, bonane ei videantur haec: vacuitas doloris, divitiae, valitudo; Ergo instituto veterum, quo etiam Stoici utuntur, hinc capiamus exordium. Aliter homines, aliter philosophos loqui putas oportere? Sed utrum hortandus es nobis, Luci, inquit, an etiam tua sponte propensus es? Duo Reges: constructio interrete. Scripta sane et multa et polita, sed nescio quo pacto auctoritatem oratio non habet. Alii rursum isdem a principiis omne officium referent aut ad voluptatem aut ad non dolendum aut ad prima illa secundum naturam optinenda. Non pugnem cum homine, cur tantum habeat in natura boni; Summus dolor plures dies manere non potest? Quamquam scripsit artem rhetoricam Cleanthes, Chrysippus etiam, sed sic, ut, si quis obmutescere concupierit, nihil aliud legere debeat. Habes, inquam, Cato, formam eorum, de quibus loquor, philosophorum. Id enim volumus, id contendimus, ut officii fructus sit ipsum officium.
####Output:
Lorem ipsum  dolor  sit  amet,
consectetur  adipiscing  elit.
Quid nunc honeste  dicit?  Huc
et   illuc,   Torquate,    vos
versetis licet, nihil  in  hac
praeclara epistula scriptum ab
Epicuro      congruens      et
conveniens    decretis    eius
reperietis.     Roges     enim
Aristonem, bonane ei videantur
haec:    vacuitas     doloris,
divitiae,    valitudo;    Ergo
instituto veterum,  quo  etiam
Stoici utuntur, hinc  capiamus
exordium.   Aliter    homines,
aliter philosophos loqui putas
oportere? Sed utrum  hortandus
es  nobis,  Luci,  inquit,  an
etiam tua sponte propensus es?
Duo     Reges:     constructio
interrete.  Scripta  sane   et
multa et  polita,  sed  nescio
quo pacto auctoritatem  oratio
non habet. Alii rursum isdem a
principiis    omne    officium
referent aut ad voluptatem aut
ad non dolendum aut  ad  prima
illa     secundum      naturam
optinenda.  Non   pugnem   cum
homine, cur tantum  habeat  in
natura  boni;   Summus   dolor
plures dies manere non potest?
Quamquam    scripsit     artem
rhetoricam          Cleanthes,
Chrysippus etiam, sed sic, ut,
si      quis       obmutescere
concupierit,    nihil    aliud
legere debeat. Habes,  inquam,
Cato, formam eorum, de  quibus
loquor, philosophorum. Id enim
volumus,  id  contendimus,  ut
officii  fructus   sit   ipsum
officium.
 
---------
**(HINT)**:  
- There aren't any Escape Sequences in the string.
- There are special characters present inside string, though should be considered as normal characters.
