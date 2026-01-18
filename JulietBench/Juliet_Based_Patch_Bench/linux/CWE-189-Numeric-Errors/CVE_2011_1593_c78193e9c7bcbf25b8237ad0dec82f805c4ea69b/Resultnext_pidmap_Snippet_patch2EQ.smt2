; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x13 (= (_ bv2 32) R)))
 (let ((?x26 ((_ extract 15 0) rdi)))
 (let ((?x27 (bvadd (_ bv1 16) ?x26)))
 (let ((?x14 (concat (_ bv0 16) ?x27)))
 (let (($x22 (= R ?x14)))
 (and $x22 $x13)))))))
(check-sat)
