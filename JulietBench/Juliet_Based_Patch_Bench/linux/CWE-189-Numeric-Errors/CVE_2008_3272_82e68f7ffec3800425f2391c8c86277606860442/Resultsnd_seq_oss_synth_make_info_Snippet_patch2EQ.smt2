; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x22 (= (_ bv0 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let (($x13 (= R ?x6)))
 (and $x13 $x22)))))
(check-sat)
