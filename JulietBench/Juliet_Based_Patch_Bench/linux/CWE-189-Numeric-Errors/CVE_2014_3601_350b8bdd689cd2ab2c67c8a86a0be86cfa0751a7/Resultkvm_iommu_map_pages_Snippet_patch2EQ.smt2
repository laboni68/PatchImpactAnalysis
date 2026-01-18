; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rsi () (_ BitVec 64))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x29 (= (_ bv1 32) R)))
 (let ((?x7 (bvadd rdi rsi)))
 (let (($x13 (bvule ?x7 rsi)))
 (let ((?x15 (ite $x13 (_ bv0 1) (_ bv1 1))))
 (let ((?x31 (concat (_ bv0 31) ?x15)))
 (let (($x8 (= R ?x31)))
 (and $x8 $x29))))))))
(check-sat)
