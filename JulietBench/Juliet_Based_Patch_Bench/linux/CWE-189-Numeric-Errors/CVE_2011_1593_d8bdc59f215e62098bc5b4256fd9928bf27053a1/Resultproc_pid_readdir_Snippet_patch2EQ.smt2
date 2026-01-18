; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x24 (= (_ bv1 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x16 (bvadd (_ bv4294967040 32) ?x6)))
 (let (($x17 (= R ?x16)))
 (and $x17 $x24))))))
(check-sat)
