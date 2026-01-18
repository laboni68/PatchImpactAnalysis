; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x40 (= (_ bv512 32) R)))
 (let ((?x29 ((_ extract 22 0) rdi)))
 (let ((?x30 (concat ?x29 (_ bv0 9))))
 (let (($x33 (= R ?x30)))
 (and $x33 $x40))))))
(check-sat)
