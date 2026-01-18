; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(declare-fun rsi () (_ BitVec 64))
(assert
 (let (($x28 (= (_ bv1900 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x15 (bvmul (_ bv50 32) ?x6)))
 (let ((?x39 (bvadd (bvadd (_ bv1399 32) ((_ extract 31 0) rsi)) ?x15)))
 (let (($x37 (= R ?x39)))
 (and $x37 $x28)))))))
(check-sat)
