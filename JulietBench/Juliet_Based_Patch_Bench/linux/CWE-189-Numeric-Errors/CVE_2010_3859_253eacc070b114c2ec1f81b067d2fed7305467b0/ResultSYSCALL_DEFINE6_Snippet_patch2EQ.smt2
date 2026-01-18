; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x7 (= (_ bv1024 32) R)))
 (let ((?x15 ((_ extract 31 0) rdi)))
 (let (($x13 (= R ?x15)))
 (and $x13 $x7)))))
(check-sat)
