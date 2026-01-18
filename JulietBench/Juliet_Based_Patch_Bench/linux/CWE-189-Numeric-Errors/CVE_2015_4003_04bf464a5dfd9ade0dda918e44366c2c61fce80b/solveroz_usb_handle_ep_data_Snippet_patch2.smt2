; benchmark generated from python API
(set-info :status unknown)
(declare-fun rdi () (_ BitVec 64))
(declare-fun R () (_ BitVec 32))
(assert
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x25 (bvadd (_ bv4294967290 32) ?x6)))
 (let (($x44 (and (distinct R ?x25) true)))
 (let (($x32 (= R ?x25)))
 (let (($x42 (or $x32 $x44)))
 (not $x42)))))))
(check-sat)
