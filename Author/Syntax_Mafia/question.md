Yashwant Singh is an aspiring graduate student. He's writing a research papers on hardware virtualization for subsystem modulation. After compeletion of his research he realized, immature of him he has written the whole paper in one go into a single paragraph. Now he has to curate the whole paragraph into the syntax of a research paper. The syntax specifies the following rules:

1. The whole string should be converted to a column.
2. Each line in a column should characters equal or less than the specifed character limit.
3. The characters should fill the whole line, distributing spaces equally.
	3.1 Minimum one space is required between words.
	3.2 Distribution weight is higher towards end of the line.

Example:

Convenience is one of the factors to consider when building Linux distributions; thus, the inclusion of preinstalled packages is possible for various applications. Containers, in contrast, are designed for lightweight virtualization to run many identical machines as possible with the least amount of overhead in terms of memory, disk and CPU. To cater for the low overhead requirements that provide faster spin-up time, vendors have developed container-optimized builds. The result is minimalistic distributions containing the minimum requirements for containers to run.

> Should be converted to a para like this

<img src="https://raw.githubusercontent.com/aniruddha0pandey/Code-Archive/master/Author/foreground.jpeg" 
alt="foreground" width="400" height="400" border="10" />

Six or nine squares drawn on the ground, inside where player will stand behind a defined line and toss a small piece of rock or pebble into a selected square, then they had to hop across the squares, skipping the one with the rock, completing the whole path uptill end and returning the same way. No stepping on lines, or you were considered out.

---------
It was a beautiful day, Kukoo came to play Langdi (One Leg Hop) with her girl friends.
Coinsidently, her school friend Gaitonde was present there too, climbed
upon a tree, eating apples. Kukoo had a crush on him and maybe it was mutual.
She wanted to talk to Gaitonde, but her friends wouldn't let her go in the
middle of the game. Restricted by this situation, she decided to
give him a signal or secret message, which only he can understand. Knowing
Gaitonde also have a knack for encryption, she's
convinced he can decode her message. So Kukoo decided as follows:

- Other than ordering the squares with their usual ascending order, she numbered them randomly.
- She skips the square in which the rock landed.
- Returning back is not counted.  
  
  
Gaitonde knows, he has to use the number present inside square as data. Kukoo wrote a the key to decrypt the message in a piece of paper and throw near Gaitonde.  

**The Paper says**:  
<code>
A node (x) will be considered to be counted, if it is the bottommost node at its horizontal distance from the root. Horizontal distance of left child of a node (x) is equal to horizontal distance of (x) minus 1, and that of right child is horizontal distance of (x) plus 1.
The final message will be a integer generated from a binary string including all the LSB (Least Significant Bit) of all those bottom (x)s.
</code>  
    
Gaitonde arranged those numbers as follows. But now he don't know what to do next. Help Gaitonde to find love.


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
2  
9  
1 2 L 1 3 R 2 4 L 2 5 R 3 7 R 4 8 L 4 9 R  
14  
20 8 L 20 22 R 8 5 L 8 3 R 22 4 L 22 25 R 3 10 L 3 14 R
####Output:
15 17
####Case 1:
(1)<sub>horizontalDistance</sub> = +0  
(2)<sub>horizontalDistance</sub> = -1  
(3)<sub>horizontalDistance</sub> = +1  
(4)<sub>horizontalDistance</sub> = -2  
(5)<sub>horizontalDistance</sub> = +0  
(7)<sub>horizontalDistance</sub> = +2  
(8)<sub>horizontalDistance</sub> = -3  
(9)<sub>horizontalDistance</sub> = -1  
  
(8)<sub>10</sub> = (1000)<sub>2</sub> = (0)<sub>LSB</sub>  
(4)<sub>10</sub> = (0100)<sub>2</sub> = (0)<sub>LSB</sub>  
(9)<sub>10</sub> = (1001)<sub>2</sub> = (1)<sub>LSB</sub>  
(5)<sub>10</sub> = (0101)<sub>2</sub> = (1)<sub>LSB</sub>  
(3)<sub>10</sub> = (0011)<sub>2</sub> = (1)<sub>LSB</sub>  
(7)<sub>10</sub> = (0111)<sub>2</sub> = (1)<sub>LSB</sub>  
  
(001111)<sub>2</sub> = (15)<sub>10</sub>

####Case 2:
(20)<sub>horizontalDistance</sub> = +0  
( 8)<sub>horizontalDistance</sub> = -1  
(22)<sub>horizontalDistance</sub> = +1  
( 5)<sub>horizontalDistance</sub> = -2  
( 3)<sub>horizontalDistance</sub> = +0  
( 4)<sub>horizontalDistance</sub> = +0  
(25)<sub>horizontalDistance</sub> = +2  
(10)<sub>horizontalDistance</sub> = -1  
(14)<sub>horizontalDistance</sub> = +1  
  
( 5)<sub>10</sub> = (00101)<sub>2</sub> = (1)<sub>LSB</sub>  
(10)<sub>10</sub> = (01010)<sub>2</sub> = (0)<sub>LSB</sub>  
( 4)<sub>10</sub> = (00100)<sub>2</sub> = (0)<sub>LSB</sub>  
(14)<sub>10</sub> = (01110)<sub>2</sub> = (0)<sub>LSB</sub>  
(25)<sub>10</sub> = (11001)<sub>2</sub> = (1)<sub>LSB</sub>  
  
(10001)<sub>2</sub> = (17)<sub>10</sub>
 
---------
**(HINT)**:  
- There aren't any Escape Sequences in the string.
- There are special characters present inside string, though should be considered as normal characters.
