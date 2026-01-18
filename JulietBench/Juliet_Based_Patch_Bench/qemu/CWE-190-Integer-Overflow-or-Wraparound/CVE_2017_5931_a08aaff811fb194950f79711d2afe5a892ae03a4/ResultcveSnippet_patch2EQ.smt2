; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(declare-fun rsi () (_ BitVec 64))
(assert
 (let (($x25 (= (_ bv1536 32) R)))
 (let ((?x7 (bvadd rsi rdi)))
 (let ((?x9 ((_ extract 31 0) ?x7)))
 (let (($x18 (= R ?x9)))
 (and $x18 $x25))))))
(check-sat)
