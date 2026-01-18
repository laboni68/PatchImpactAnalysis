; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rsi () (_ BitVec 64))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x25 (= (_ bv1 32) R)))
 (let ((?x11 ((_ extract 31 0) rsi)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x14 (bvmul ?x6 ?x11)))
 (let (($x18 (= R ?x14)))
 (and $x18 $x25)))))))
(check-sat)
