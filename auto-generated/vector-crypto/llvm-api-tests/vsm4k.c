// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zvl512b \
// RUN:   -target-feature +zvbb \
// RUN:   -target-feature +zvbc \
// RUN:   -target-feature +zvkg \
// RUN:   -target-feature +zvkned \
// RUN:   -target-feature +zvknhb \
// RUN:   -target-feature +zvksed \
// RUN:   -target-feature +zvksh -disable-O0-optnone \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

vuint32mf2_t test_vsm4k_vi_u32mf2(vuint32mf2_t vs2, size_t vl) {
  return __riscv_vsm4k_vi_u32mf2(vs2, 0, vl);
}

vuint32m1_t test_vsm4k_vi_u32m1(vuint32m1_t vs2, size_t vl) {
  return __riscv_vsm4k_vi_u32m1(vs2, 0, vl);
}

vuint32m2_t test_vsm4k_vi_u32m2(vuint32m2_t vs2, size_t vl) {
  return __riscv_vsm4k_vi_u32m2(vs2, 0, vl);
}

vuint32m4_t test_vsm4k_vi_u32m4(vuint32m4_t vs2, size_t vl) {
  return __riscv_vsm4k_vi_u32m4(vs2, 0, vl);
}

vuint32m8_t test_vsm4k_vi_u32m8(vuint32m8_t vs2, size_t vl) {
  return __riscv_vsm4k_vi_u32m8(vs2, 0, vl);
}
