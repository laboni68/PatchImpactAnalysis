; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(assert
 (let (($x15 (and (distinct (_ bv1 32) R) true)))
 (let (($x17 (= (_ bv1 32) R)))
 (let (($x24 (or $x17 $x15)))
 (not $x24)))))
(check-sat)
