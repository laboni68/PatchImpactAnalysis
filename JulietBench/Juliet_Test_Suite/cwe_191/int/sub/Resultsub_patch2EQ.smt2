; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x26 (= (_ bv0 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x15 (bvadd (_ bv4294967295 32) ?x6)))
 (let (($x17 (= R ?x15)))
 (and $x17 $x26))))))
(check-sat)
