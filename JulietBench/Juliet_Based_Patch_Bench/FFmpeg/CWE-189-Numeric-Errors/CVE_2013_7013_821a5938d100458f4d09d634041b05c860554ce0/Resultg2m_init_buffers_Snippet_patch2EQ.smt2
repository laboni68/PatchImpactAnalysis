; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x47 (= (_ bv48 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x29 (bvadd (bvadd (_ bv15 32) (concat ((_ extract 30 0) rdi) (_ bv0 1))) ?x6)))
 (let ((?x27 ((_ extract 31 4) ?x29)))
 (let ((?x32 (concat ?x27 (_ bv0 4))))
 (let (($x20 (= R ?x32)))
 (and $x20 $x47))))))))
(check-sat)
