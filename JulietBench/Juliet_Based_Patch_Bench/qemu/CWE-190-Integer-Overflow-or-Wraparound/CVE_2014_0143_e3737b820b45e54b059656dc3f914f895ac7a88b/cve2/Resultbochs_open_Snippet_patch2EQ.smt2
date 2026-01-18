; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x18 (= (_ bv1 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let (($x11 (= R ?x6)))
 (and $x11 $x18)))))
(check-sat)
