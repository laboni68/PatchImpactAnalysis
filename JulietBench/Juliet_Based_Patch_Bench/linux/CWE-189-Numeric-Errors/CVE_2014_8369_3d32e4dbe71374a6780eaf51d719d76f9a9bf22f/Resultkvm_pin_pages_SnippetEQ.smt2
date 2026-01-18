; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun rsi () (_ BitVec 64))
(declare-fun R () (_ BitVec 64))
(assert
 (let ((?x17 (bvadd rsi rdi)))
 (let (($x28 (= R ?x17)))
 (let ((?x9 ((_ extract 63 13) rsi)))
 (let ((?x10 (concat (_ bv0 13) ?x9)))
 (let ((?x13 (bvadd rdi ?x10)))
 (let (($x19 (= R ?x13)))
 (and $x19 $x28))))))))
(check-sat)
