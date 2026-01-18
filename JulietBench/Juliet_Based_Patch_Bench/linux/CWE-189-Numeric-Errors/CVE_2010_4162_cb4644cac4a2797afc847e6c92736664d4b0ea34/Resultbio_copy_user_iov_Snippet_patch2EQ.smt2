; benchmark generated from python API
(set-info :status unknown)
(declare-fun R () (_ BitVec 32))
(declare-fun rdi () (_ BitVec 64))
(assert
 (let (($x31 (= (_ bv1 32) R)))
 (let ((?x10 (bvadd (_ bv35184372072562 64) rdi)))
 (let ((?x14 ((_ extract 44 13) ?x10)))
 (let ((?x22 (bvadd (_ bv3 32) ?x14)))
 (let (($x20 (= R ?x22)))
 (and $x20 $x31)))))))
(check-sat)
