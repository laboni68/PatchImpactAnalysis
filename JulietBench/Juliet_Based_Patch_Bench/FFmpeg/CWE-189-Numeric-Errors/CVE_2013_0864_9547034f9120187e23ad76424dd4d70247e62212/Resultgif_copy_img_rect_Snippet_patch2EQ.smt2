; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x32 (= (_ bv9 32) R)))
 (let ((?x6 ((_ extract 31 0) rdi)))
 (let ((?x20 (bvmul (_ bv10 32) ?x6)))
 (let ((?x21 (bvadd (_ bv4294967295 32) ?x20)))
 (let (($x25 (= R ?x21)))
 (and $x25 $x32)))))))
(check-sat)
