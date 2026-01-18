; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x33 (= (_ bv2 32) R)))
 (let ((?x15 ((_ extract 30 0) rdi)))
 (let ((?x16 (concat ?x15 (_ bv0 1))))
 (let (($x26 (= R ?x16)))
 (and $x26 $x33))))))
(check-sat)
