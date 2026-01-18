; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x21 (= (_ bv1 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x10 (bvmul ?x6 ?x6)))
 (let (($x14 (= R ?x10)))
 (and $x14 $x21))))))
(check-sat)
