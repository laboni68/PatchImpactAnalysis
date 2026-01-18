; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x32 (= (_ bv8192 32) R)))
 (let ((?x28 ((_ extract 28 0) rdi)))
 (let ((?x29 (concat ?x28 (_ bv0 3))))
 (let (($x23 (= R ?x29)))
 (and $x23 $x32))))))
(check-sat)
