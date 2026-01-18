; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(assert
 (let (($x13 (and (distinct (_ bv0 32) R) true)))
 (let (($x15 (= (_ bv0 32) R)))
 (let (($x22 (or $x15 $x13)))
 (not $x22)))))
(check-sat)
