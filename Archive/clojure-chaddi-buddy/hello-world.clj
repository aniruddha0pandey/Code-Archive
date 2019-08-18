(defn output
	"Print Hello World n times"
	[n] 
	(print (apply str 
		(repeat n "Hello World\n"))))

(def n (Integer/parseInt (read-line)))
(output n)
