; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun rsi () (_ BitVec 64))
(declare-fun R () (_ BitVec 32))
(assert
 (let ((?x7 (bvadd rsi rdi)))
 (let ((?x9 ((_ extract 31 0) ?x7)))
 (let (($x16 (and (distinct R ?x9) true)))
 (let (($x18 (= R ?x9)))
 (let (($x25 (or $x18 $x16)))
 (not $x25)))))))
(check-sat)
