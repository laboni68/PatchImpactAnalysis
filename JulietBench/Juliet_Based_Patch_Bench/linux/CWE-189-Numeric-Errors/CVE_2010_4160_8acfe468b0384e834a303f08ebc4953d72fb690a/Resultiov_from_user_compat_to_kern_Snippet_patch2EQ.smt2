; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x24 (= (_ bv4294967295 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x11 (bvadd (_ bv4294967295 32) ?x6)))
 (let (($x15 (= R ?x11)))
 (and $x15 $x24))))))
(check-sat)
