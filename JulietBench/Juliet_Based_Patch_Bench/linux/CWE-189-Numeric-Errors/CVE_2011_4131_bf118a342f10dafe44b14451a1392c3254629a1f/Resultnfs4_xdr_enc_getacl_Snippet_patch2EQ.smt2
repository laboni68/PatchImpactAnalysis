; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x25 (= (_ bv7 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x12 (bvadd (_ bv7 32) ?x6)))
 (let (($x16 (= R ?x12)))
 (and $x16 $x25))))))
(check-sat)
