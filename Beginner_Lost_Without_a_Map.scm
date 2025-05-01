;; https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/racket

#lang scheme

(provide maps)

(define (maps lst) (map (λ (x) (* x 2)) lst))
