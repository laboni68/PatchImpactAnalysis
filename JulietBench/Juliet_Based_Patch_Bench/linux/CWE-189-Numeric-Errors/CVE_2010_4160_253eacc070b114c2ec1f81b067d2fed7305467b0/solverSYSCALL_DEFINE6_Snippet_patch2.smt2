; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun R () (_ BitVec 32))
(assert
 (let ((?x15 ((_ extract 31 0) rdi)))
 (let (($x22 (and (distinct R ?x15) true)))
 (let (($x13 (= R ?x15)))
 (let (($x7 (or $x13 $x22)))
 (not $x7))))))
(check-sat)
