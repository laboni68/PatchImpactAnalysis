; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun rsi () (_ BitVec 64))
(declare-fun R () (_ BitVec 64))
(assert
 (let ((?x7 (bvadd rsi rdi)))
 (let (($x18 (and (distinct R ?x7) true)))
 (let (($x9 (= R ?x7)))
 (let (($x16 (or $x9 $x18)))
 (not $x16))))))
(check-sat)
