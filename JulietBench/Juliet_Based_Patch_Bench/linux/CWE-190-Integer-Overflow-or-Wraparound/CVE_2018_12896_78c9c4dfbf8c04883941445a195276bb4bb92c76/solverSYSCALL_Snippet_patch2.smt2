; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun R () (_ BitVec 32))
(assert
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let (($x20 (and (distinct R ?x6) true)))
 (let (($x11 (= R ?x6)))
 (let (($x18 (or $x11 $x20)))
 (not $x18))))))
(check-sat)
