; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x23 (= (_ bv2 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x9 (bvadd (_ bv1 32) ?x6)))
 (let (($x16 (= R ?x9)))
 (and $x16 $x23))))))
(check-sat)
