; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x40 (= (_ bv4096 32) R)))
 (let ((?x28 ((_ extract 29 0) rdi)))
 (let ((?x29 (concat ?x28 (_ bv0 2))))
 (let (($x33 (= R ?x29)))
 (and $x33 $x40))))))
(check-sat)
