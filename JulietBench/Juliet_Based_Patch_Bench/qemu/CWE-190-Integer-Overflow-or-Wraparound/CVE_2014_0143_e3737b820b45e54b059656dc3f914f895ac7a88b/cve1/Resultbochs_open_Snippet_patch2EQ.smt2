; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x14 (= (_ bv4194304 32) R)))
 (let ((?x29 ((_ extract 29 0) rdi)))
 (let ((?x16 (concat ?x29 (_ bv0 2))))
 (let (($x31 (= R ?x16)))
 (and $x31 $x14))))))
(check-sat)
