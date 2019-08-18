(defn run [n]
	(print (str "Some Function with arg: " n "\n")))

(let [n (line-seq (java.io.BufferedReader. *in*))] 
	((fn -main [n & args] 
		(run n))
		(Integer. (first n))))