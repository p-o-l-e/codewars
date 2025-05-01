;;https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/racket

#lang scheme

(provide repeat-string)

(define (repeat-string count str)
  (if (= count 0) "" (string-append str (repeat-string (- count 1) str))))
