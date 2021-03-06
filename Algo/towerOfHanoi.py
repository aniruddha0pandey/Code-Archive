# Move (n - 1) disk to Auxiliary peg, using the Destination peg.
# Move remaining disk to the Destination peg.
# Move (n - 1) disk from Auxiliary peg to Destination peg using the Source peg.

def tower_of_hanoi(n, src, aux, des):
  if n >= 1:
    tower_of_hanoi(n - 1, src, des, aux)
    print("Moving from", src, "to", des)
    tower_of_hanoi(n - 1, aux, src, des)

tower_of_hanoi(3, 'A', 'B', 'C')
