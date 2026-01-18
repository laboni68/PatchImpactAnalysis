; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x27 (= (_ bv1 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let (($x15 (= R ?x6)))
 (and $x15 $x27)))))
(check-sat)
