// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_tu(vfloat16mf4_t vd, vint8mf8_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_tu(vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_tu(vfloat16mf2_t vd, vint8mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_tu(vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_tu(vfloat16m1_t vd, vint8mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_tu(vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_tu(vfloat16m2_t vd, vint8m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_tu(vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_tu(vfloat16m4_t vd, vint8m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_tu(vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_tu(vfloat16m8_t vd, vint8m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_tu(vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_tu(vfloat16mf4_t vd, vuint8mf8_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_tu(vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_tu(vfloat16mf2_t vd, vuint8mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_tu(vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_tu(vfloat16m1_t vd, vuint8mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_tu(vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_tu(vfloat16m2_t vd, vuint8m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_tu(vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_tu(vfloat16m4_t vd, vuint8m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_tu(vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_tu(vfloat16m8_t vd, vuint8m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_tu(vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tu(vint32mf2_t vd, vfloat16mf4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_tu(vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tu(vint32m1_t vd, vfloat16mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_tu(vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tu(vint32m2_t vd, vfloat16m1_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_tu(vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tu(vint32m4_t vd, vfloat16m2_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_tu(vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tu(vint32m8_t vd, vfloat16m4_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_tu(vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tu(vuint32mf2_t vd, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_tu(vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tu(vuint32m1_t vd, vfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_tu(vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tu(vuint32m2_t vd, vfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_tu(vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tu(vuint32m4_t vd, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_tu(vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tu(vuint32m8_t vd, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tu(vfloat32mf2_t vd, vint16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tu(vfloat32m1_t vd, vint16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tu(vfloat32m2_t vd, vint16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tu(vfloat32m4_t vd, vint16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tu(vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tu(vfloat32m8_t vd, vint16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tu(vfloat32mf2_t vd, vuint16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tu(vfloat32m1_t vd, vuint16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tu(vfloat32m2_t vd, vuint16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tu(vfloat32m4_t vd, vuint16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tu(vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tu(vfloat32m8_t vd, vuint16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tu(vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tu(vfloat32mf2_t vd, vfloat16mf4_t vs2,
                                          size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_tu(vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tu(vfloat32m1_t vd, vfloat16mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_tu(vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tu(vfloat32m2_t vd, vfloat16m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_tu(vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tu(vfloat32m4_t vd, vfloat16m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_tu(vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tu(vfloat32m8_t vd, vfloat16m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_tu(vd, vs2, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tu(vint64m1_t vd, vfloat32mf2_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tu(vd, vs2, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tu(vint64m2_t vd, vfloat32m1_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tu(vd, vs2, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tu(vint64m4_t vd, vfloat32m2_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tu(vd, vs2, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tu(vint64m8_t vd, vfloat32m4_t vs2,
                                      size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tu(vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tu(vuint64m1_t vd, vfloat32mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tu(vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tu(vuint64m2_t vd, vfloat32m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tu(vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tu(vuint64m4_t vd, vfloat32m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tu(vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tu(vuint64m8_t vd, vfloat32m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tu(vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tu(vfloat64m1_t vd, vint32mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tu(vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tu(vfloat64m2_t vd, vint32m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tu(vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tu(vfloat64m4_t vd, vint32m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tu(vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tu(vfloat64m8_t vd, vint32m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tu(vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tu(vfloat64m1_t vd, vuint32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tu(vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tu(vfloat64m2_t vd, vuint32m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tu(vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tu(vfloat64m4_t vd, vuint32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tu(vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tu(vfloat64m8_t vd, vuint32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tu(vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tu(vfloat64m1_t vd, vfloat32mf2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tu(vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tu(vfloat64m2_t vd, vfloat32m1_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tu(vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tu(vfloat64m4_t vd, vfloat32m2_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tu(vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tu(vfloat64m8_t vd, vfloat32m4_t vs2,
                                        size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tu(vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                           vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_tum(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                           vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_tum(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                         vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_tum(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                         vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_tum(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                         vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_tum(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                         vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_tum(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_tum(vbool64_t vm, vfloat16mf4_t vd,
                                            vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_tum(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_tum(vbool32_t vm, vfloat16mf2_t vd,
                                            vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_tum(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_tum(vbool16_t vm, vfloat16m1_t vd,
                                          vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_tum(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_tum(vbool8_t vm, vfloat16m2_t vd,
                                          vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_tum(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_tum(vbool4_t vm, vfloat16m4_t vd,
                                          vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_tum(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_tum(vbool2_t vm, vfloat16m8_t vd,
                                          vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_tum(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tum(vbool64_t vm, vint32mf2_t vd,
                                         vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_tum(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tum(vbool32_t vm, vint32m1_t vd,
                                       vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_tum(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tum(vbool16_t vm, vint32m2_t vd,
                                       vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_tum(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tum(vbool8_t vm, vint32m4_t vd,
                                       vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_tum(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tum(vbool4_t vm, vint32m8_t vd,
                                       vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_tum(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tum(vbool64_t vm, vuint32mf2_t vd,
                                           vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_tum(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tum(vbool32_t vm, vuint32m1_t vd,
                                         vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_tum(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tum(vbool16_t vm, vuint32m2_t vd,
                                         vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_tum(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tum(vbool8_t vm, vuint32m4_t vd,
                                         vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_tum(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tum(vbool4_t vm, vuint32m8_t vd,
                                         vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vint16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vint16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vint16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vint16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tum(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vint16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                            vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                          vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                          vuint16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                          vuint16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tum(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                          vuint16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tum(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tum(vbool64_t vm, vfloat32mf2_t vd,
                                           vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_tum(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tum(vbool32_t vm, vfloat32m1_t vd,
                                         vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_tum(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tum(vbool16_t vm, vfloat32m2_t vd,
                                         vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_tum(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tum(vbool8_t vm, vfloat32m4_t vd,
                                         vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_tum(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tum(vbool4_t vm, vfloat32m8_t vd,
                                         vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_tum(vm, vd, vs2, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tum(vbool64_t vm, vint64m1_t vd,
                                       vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tum(vm, vd, vs2, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tum(vbool32_t vm, vint64m2_t vd,
                                       vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tum(vm, vd, vs2, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tum(vbool16_t vm, vint64m4_t vd,
                                       vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tum(vm, vd, vs2, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tum(vbool8_t vm, vint64m8_t vd,
                                       vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tum(vm, vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tum(vbool64_t vm, vuint64m1_t vd,
                                         vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tum(vm, vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tum(vbool32_t vm, vuint64m2_t vd,
                                         vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tum(vm, vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tum(vbool16_t vm, vuint64m4_t vd,
                                         vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tum(vm, vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tum(vbool8_t vm, vuint64m8_t vd,
                                         vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tum(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                         vint32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tum(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                         vint32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tum(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                         vint32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tum(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                         vint32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tum(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                          vuint32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tum(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                          vuint32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tum(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                          vuint32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tum(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                          vuint32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tum(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tum(vbool64_t vm, vfloat64m1_t vd,
                                         vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tum(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tum(vbool32_t vm, vfloat64m2_t vd,
                                         vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tum(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tum(vbool16_t vm, vfloat64m4_t vd,
                                         vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tum(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tum(vbool8_t vm, vfloat64m8_t vd,
                                         vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tum(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                            vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_tumu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                            vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_tumu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                          vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_tumu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                          vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_tumu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                          vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_tumu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                          vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_tumu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_tumu(vbool64_t vm, vfloat16mf4_t vd,
                                             vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_tumu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_tumu(vbool32_t vm, vfloat16mf2_t vd,
                                             vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_tumu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_tumu(vbool16_t vm, vfloat16m1_t vd,
                                           vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_tumu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_tumu(vbool8_t vm, vfloat16m2_t vd,
                                           vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_tumu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_tumu(vbool4_t vm, vfloat16m4_t vd,
                                           vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_tumu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_tumu(vbool2_t vm, vfloat16m8_t vd,
                                           vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_tumu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_tumu(vbool64_t vm, vint32mf2_t vd,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_tumu(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_tumu(vbool32_t vm, vint32m1_t vd,
                                        vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_tumu(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_tumu(vbool16_t vm, vint32m2_t vd,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_tumu(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_tumu(vbool8_t vm, vint32m4_t vd,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_tumu(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_tumu(vbool4_t vm, vint32m8_t vd,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_tumu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_tumu(vbool64_t vm, vuint32mf2_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_tumu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_tumu(vbool32_t vm, vuint32m1_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_tumu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_tumu(vbool16_t vm, vuint32m2_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_tumu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_tumu(vbool8_t vm, vuint32m4_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_tumu(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_tumu(vbool4_t vm, vuint32m8_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vint16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vint16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vint16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vint16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_tumu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vint16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                             vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                           vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                           vuint16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                           vuint16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_tumu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                           vuint16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_tumu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_tumu(vbool64_t vm, vfloat32mf2_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_tumu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_tumu(vbool32_t vm, vfloat32m1_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_tumu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_tumu(vbool16_t vm, vfloat32m2_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_tumu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_tumu(vbool8_t vm, vfloat32m4_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_tumu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_tumu(vbool4_t vm, vfloat32m8_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_tumu(vm, vd, vs2, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_tumu(vbool64_t vm, vint64m1_t vd,
                                        vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_tumu(vm, vd, vs2, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_tumu(vbool32_t vm, vint64m2_t vd,
                                        vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_tumu(vm, vd, vs2, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_tumu(vbool16_t vm, vint64m4_t vd,
                                        vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_tumu(vm, vd, vs2, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_tumu(vbool8_t vm, vint64m8_t vd,
                                        vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_tumu(vm, vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_tumu(vbool64_t vm, vuint64m1_t vd,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_tumu(vm, vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_tumu(vbool32_t vm, vuint64m2_t vd,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_tumu(vm, vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_tumu(vbool16_t vm, vuint64m4_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_tumu(vm, vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_tumu(vbool8_t vm, vuint64m8_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_tumu(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                          vint32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_tumu(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                          vint32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_tumu(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                          vint32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_tumu(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                          vint32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_tumu(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                           vuint32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_tumu(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                           vuint32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_tumu(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                           vuint32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_tumu(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                           vuint32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_tumu(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_tumu(vbool64_t vm, vfloat64m1_t vd,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_tumu(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_tumu(vbool32_t vm, vfloat64m2_t vd,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_tumu(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_tumu(vbool16_t vm, vfloat64m4_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_tumu(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_tumu(vbool8_t vm, vfloat64m8_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_tumu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_x_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                          vint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf4_mu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_x_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                          vint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16mf2_mu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_x_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                        vint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m1_mu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_x_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                        vint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m2_mu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_x_v_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                        vint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m4_mu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_x_v_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                        vint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f16m8_mu(vm, vd, vs2, vl);
}

vfloat16mf4_t test_vfwcvt_f_xu_v_f16mf4_mu(vbool64_t vm, vfloat16mf4_t vd,
                                           vuint8mf8_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf4_mu(vm, vd, vs2, vl);
}

vfloat16mf2_t test_vfwcvt_f_xu_v_f16mf2_mu(vbool32_t vm, vfloat16mf2_t vd,
                                           vuint8mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16mf2_mu(vm, vd, vs2, vl);
}

vfloat16m1_t test_vfwcvt_f_xu_v_f16m1_mu(vbool16_t vm, vfloat16m1_t vd,
                                         vuint8mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m1_mu(vm, vd, vs2, vl);
}

vfloat16m2_t test_vfwcvt_f_xu_v_f16m2_mu(vbool8_t vm, vfloat16m2_t vd,
                                         vuint8m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m2_mu(vm, vd, vs2, vl);
}

vfloat16m4_t test_vfwcvt_f_xu_v_f16m4_mu(vbool4_t vm, vfloat16m4_t vd,
                                         vuint8m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m4_mu(vm, vd, vs2, vl);
}

vfloat16m8_t test_vfwcvt_f_xu_v_f16m8_mu(vbool2_t vm, vfloat16m8_t vd,
                                         vuint8m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f16m8_mu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_mu(vbool64_t vm, vint32mf2_t vd,
                                        vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_mu(vm, vd, vs2, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_mu(vbool32_t vm, vint32m1_t vd,
                                      vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_mu(vm, vd, vs2, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_mu(vbool16_t vm, vint32m2_t vd,
                                      vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_mu(vm, vd, vs2, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_mu(vbool8_t vm, vint32m4_t vd,
                                      vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_mu(vm, vd, vs2, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_mu(vbool4_t vm, vint32m8_t vd,
                                      vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_mu(vm, vd, vs2, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_mu(vbool64_t vm, vuint32mf2_t vd,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_mu(vm, vd, vs2, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_mu(vbool32_t vm, vuint32m1_t vd,
                                        vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_mu(vm, vd, vs2, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_mu(vbool16_t vm, vuint32m2_t vd,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_mu(vm, vd, vs2, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_mu(vbool8_t vm, vuint32m4_t vd,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_mu(vm, vd, vs2, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_mu(vbool4_t vm, vuint32m8_t vd,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_x_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vint16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32mf2_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_x_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vint16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m1_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_x_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vint16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m2_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_x_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vint16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m4_mu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_x_v_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vint16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f32m8_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_xu_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                           vuint16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32mf2_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_xu_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                         vuint16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m1_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_xu_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                         vuint16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m2_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_xu_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                         vuint16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m4_mu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_xu_v_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                         vuint16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f32m8_mu(vm, vd, vs2, vl);
}

vfloat32mf2_t test_vfwcvt_f_f_v_f32mf2_mu(vbool64_t vm, vfloat32mf2_t vd,
                                          vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32mf2_mu(vm, vd, vs2, vl);
}

vfloat32m1_t test_vfwcvt_f_f_v_f32m1_mu(vbool32_t vm, vfloat32m1_t vd,
                                        vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m1_mu(vm, vd, vs2, vl);
}

vfloat32m2_t test_vfwcvt_f_f_v_f32m2_mu(vbool16_t vm, vfloat32m2_t vd,
                                        vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m2_mu(vm, vd, vs2, vl);
}

vfloat32m4_t test_vfwcvt_f_f_v_f32m4_mu(vbool8_t vm, vfloat32m4_t vd,
                                        vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m4_mu(vm, vd, vs2, vl);
}

vfloat32m8_t test_vfwcvt_f_f_v_f32m8_mu(vbool4_t vm, vfloat32m8_t vd,
                                        vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f32m8_mu(vm, vd, vs2, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_mu(vbool64_t vm, vint64m1_t vd,
                                      vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_mu(vm, vd, vs2, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_mu(vbool32_t vm, vint64m2_t vd,
                                      vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_mu(vm, vd, vs2, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_mu(vbool16_t vm, vint64m4_t vd,
                                      vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_mu(vm, vd, vs2, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_mu(vbool8_t vm, vint64m8_t vd,
                                      vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_mu(vm, vd, vs2, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_mu(vbool64_t vm, vuint64m1_t vd,
                                        vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_mu(vm, vd, vs2, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_mu(vbool32_t vm, vuint64m2_t vd,
                                        vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_mu(vm, vd, vs2, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_mu(vbool16_t vm, vuint64m4_t vd,
                                        vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_mu(vm, vd, vs2, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_mu(vbool8_t vm, vuint64m8_t vd,
                                        vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_mu(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_x_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                        vint32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m1_mu(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_x_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                        vint32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m2_mu(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_x_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                        vint32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m4_mu(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_x_v_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                        vint32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_x_v_f64m8_mu(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_xu_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                         vuint32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m1_mu(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_xu_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                         vuint32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m2_mu(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_xu_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                         vuint32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m4_mu(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_xu_v_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                         vuint32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_xu_v_f64m8_mu(vm, vd, vs2, vl);
}

vfloat64m1_t test_vfwcvt_f_f_v_f64m1_mu(vbool64_t vm, vfloat64m1_t vd,
                                        vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m1_mu(vm, vd, vs2, vl);
}

vfloat64m2_t test_vfwcvt_f_f_v_f64m2_mu(vbool32_t vm, vfloat64m2_t vd,
                                        vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m2_mu(vm, vd, vs2, vl);
}

vfloat64m4_t test_vfwcvt_f_f_v_f64m4_mu(vbool16_t vm, vfloat64m4_t vd,
                                        vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m4_mu(vm, vd, vs2, vl);
}

vfloat64m8_t test_vfwcvt_f_f_v_f64m8_mu(vbool8_t vm, vfloat64m8_t vd,
                                        vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_f_f_v_f64m8_mu(vm, vd, vs2, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tu(vint32mf2_t vd, vfloat16mf4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tu(vint32m1_t vd, vfloat16mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tu(vint32m2_t vd, vfloat16m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tu(vint32m4_t vd, vfloat16m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tu(vint32m8_t vd, vfloat16m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tu(vuint32mf2_t vd, vfloat16mf4_t vs2,
                                             size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tu(vuint32m1_t vd, vfloat16mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tu(vuint32m2_t vd, vfloat16m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tu(vuint32m4_t vd, vfloat16m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tu(vuint32m8_t vd, vfloat16m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_tu(vint64m1_t vd, vfloat32mf2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_tu(vint64m2_t vd, vfloat32m1_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_tu(vint64m4_t vd, vfloat32m2_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_tu(vint64m8_t vd, vfloat32m4_t vs2,
                                         size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_tu(vuint64m1_t vd, vfloat32mf2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_tu(vuint64m2_t vd, vfloat32m1_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_tu(vuint64m4_t vd, vfloat32m2_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_tu(vuint64m8_t vd, vfloat32m4_t vs2,
                                           size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_tu(vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tum(vbool64_t vm, vint32mf2_t vd,
                                            vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tum(vbool32_t vm, vint32m1_t vd,
                                          vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tum(vbool16_t vm, vint32m2_t vd,
                                          vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tum(vbool8_t vm, vint32m4_t vd,
                                          vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tum(vbool4_t vm, vint32m8_t vd,
                                          vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tum(vbool64_t vm, vuint32mf2_t vd,
                                              vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tum(vbool32_t vm, vuint32m1_t vd,
                                            vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tum(vbool16_t vm, vuint32m2_t vd,
                                            vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tum(vbool8_t vm, vuint32m4_t vd,
                                            vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tum(vbool4_t vm, vuint32m8_t vd,
                                            vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_tum(vbool64_t vm, vint64m1_t vd,
                                          vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_tum(vbool32_t vm, vint64m2_t vd,
                                          vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_tum(vbool16_t vm, vint64m4_t vd,
                                          vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_tum(vbool8_t vm, vint64m8_t vd,
                                          vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_tum(vbool64_t vm, vuint64m1_t vd,
                                            vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_tum(vbool32_t vm, vuint64m2_t vd,
                                            vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_tum(vbool16_t vm, vuint64m4_t vd,
                                            vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_tum(vbool8_t vm, vuint64m8_t vd,
                                            vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_tum(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_tumu(vbool64_t vm, vint32mf2_t vd,
                                             vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_tumu(vbool32_t vm, vint32m1_t vd,
                                           vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_tumu(vbool16_t vm, vint32m2_t vd,
                                           vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_tumu(vbool8_t vm, vint32m4_t vd,
                                           vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_tumu(vbool4_t vm, vint32m8_t vd,
                                           vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_tumu(vbool64_t vm, vuint32mf2_t vd,
                                               vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_tumu(vbool32_t vm, vuint32m1_t vd,
                                             vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_tumu(vbool16_t vm, vuint32m2_t vd,
                                             vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_tumu(vbool8_t vm, vuint32m4_t vd,
                                             vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_tumu(vbool4_t vm, vuint32m8_t vd,
                                             vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_tumu(vbool64_t vm, vint64m1_t vd,
                                           vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_tumu(vbool32_t vm, vint64m2_t vd,
                                           vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_tumu(vbool16_t vm, vint64m4_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_tumu(vbool8_t vm, vint64m8_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_tumu(vbool64_t vm, vuint64m1_t vd,
                                             vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_tumu(vbool32_t vm, vuint64m2_t vd,
                                             vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_tumu(vbool16_t vm, vuint64m4_t vd,
                                             vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_tumu(vbool8_t vm, vuint64m8_t vd,
                                             vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_tumu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32mf2_t test_vfwcvt_x_f_v_i32mf2_rm_mu(vbool64_t vm, vint32mf2_t vd,
                                           vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32mf2_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m1_t test_vfwcvt_x_f_v_i32m1_rm_mu(vbool32_t vm, vint32m1_t vd,
                                         vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m1_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m2_t test_vfwcvt_x_f_v_i32m2_rm_mu(vbool16_t vm, vint32m2_t vd,
                                         vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m2_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m4_t test_vfwcvt_x_f_v_i32m4_rm_mu(vbool8_t vm, vint32m4_t vd,
                                         vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m4_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint32m8_t test_vfwcvt_x_f_v_i32m8_rm_mu(vbool4_t vm, vint32m8_t vd,
                                         vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i32m8_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32mf2_t test_vfwcvt_xu_f_v_u32mf2_rm_mu(vbool64_t vm, vuint32mf2_t vd,
                                             vfloat16mf4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32mf2_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m1_t test_vfwcvt_xu_f_v_u32m1_rm_mu(vbool32_t vm, vuint32m1_t vd,
                                           vfloat16mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m1_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m2_t test_vfwcvt_xu_f_v_u32m2_rm_mu(vbool16_t vm, vuint32m2_t vd,
                                           vfloat16m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m2_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m4_t test_vfwcvt_xu_f_v_u32m4_rm_mu(vbool8_t vm, vuint32m4_t vd,
                                           vfloat16m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m4_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint32m8_t test_vfwcvt_xu_f_v_u32m8_rm_mu(vbool4_t vm, vuint32m8_t vd,
                                           vfloat16m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u32m8_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m1_t test_vfwcvt_x_f_v_i64m1_rm_mu(vbool64_t vm, vint64m1_t vd,
                                         vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m1_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m2_t test_vfwcvt_x_f_v_i64m2_rm_mu(vbool32_t vm, vint64m2_t vd,
                                         vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m2_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m4_t test_vfwcvt_x_f_v_i64m4_rm_mu(vbool16_t vm, vint64m4_t vd,
                                         vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m4_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vint64m8_t test_vfwcvt_x_f_v_i64m8_rm_mu(vbool8_t vm, vint64m8_t vd,
                                         vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_x_f_v_i64m8_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m1_t test_vfwcvt_xu_f_v_u64m1_rm_mu(vbool64_t vm, vuint64m1_t vd,
                                           vfloat32mf2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m1_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m2_t test_vfwcvt_xu_f_v_u64m2_rm_mu(vbool32_t vm, vuint64m2_t vd,
                                           vfloat32m1_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m2_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m4_t test_vfwcvt_xu_f_v_u64m4_rm_mu(vbool16_t vm, vuint64m4_t vd,
                                           vfloat32m2_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m4_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}

vuint64m8_t test_vfwcvt_xu_f_v_u64m8_rm_mu(vbool8_t vm, vuint64m8_t vd,
                                           vfloat32m4_t vs2, size_t vl) {
  return __riscv_vfwcvt_xu_f_v_u64m8_rm_mu(vm, vd, vs2, __RISCV_FRM_RNE, vl);
}
