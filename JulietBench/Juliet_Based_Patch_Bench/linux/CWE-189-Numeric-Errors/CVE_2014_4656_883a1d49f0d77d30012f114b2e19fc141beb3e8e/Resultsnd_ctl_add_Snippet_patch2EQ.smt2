; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdx () (_ BitVec 64))
(declare-fun R () (_ BitVec 32))
(declare-fun rsi () (_ BitVec 64))
(assert
 (let ((?x10 ((_ extract 31 0) rdx)))
 (let ((?x20 (bvadd (_ bv100 32) ?x10)))
 (let (($x33 (= R ?x20)))
 (let ((?x8 ((_ extract 31 0) rsi)))
 (let ((?x16 (bvadd ?x8 ?x10)))
 (let (($x24 (= R ?x16)))
 (and $x24 $x33))))))))
(check-sat)
