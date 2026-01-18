; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x46 (= (_ bv0 32) R)))
 (let (($x15 (bvsgt (_ bv2147483648 64) rdi)))
 (let (($x47 (and $x15 $x46)))
 (let (($x43 (= (_ bv27 32) R)))
 (let (($x26 (bvsle (_ bv2147483648 64) rdi)))
 (let (($x44 (and $x26 $x43)))
 (let (($x48 (or $x44 $x47)))
 (and $x48 $x46)))))))))
(check-sat)
