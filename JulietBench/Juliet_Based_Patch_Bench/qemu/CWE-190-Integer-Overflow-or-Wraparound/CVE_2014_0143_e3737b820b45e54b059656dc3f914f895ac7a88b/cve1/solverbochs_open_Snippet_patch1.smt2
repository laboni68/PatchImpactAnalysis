; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun R () (_ BitVec 32))
(assert
 (let ((?x29 ((_ extract 29 0) rdi)))
 (let ((?x14 (concat ?x29 (_ bv0 2))))
 (let (($x39 (and (distinct R ?x14) true)))
 (let (($x16 (= R ?x14)))
 (let (($x26 (or $x16 $x39)))
 (not $x26)))))))
(check-sat)
