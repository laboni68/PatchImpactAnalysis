; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x25 (= (_ bv41 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x13 (bvadd (_ bv41 32) ?x6)))
 (let (($x16 (= R ?x13)))
 (and $x16 $x25))))))
(check-sat)
