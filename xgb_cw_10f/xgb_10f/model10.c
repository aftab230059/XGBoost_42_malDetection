
#include "header.h"


static const int32_t num_class[] = {  15, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 10;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}

void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  predict_unit0(data, result);
  predict_unit1(data, result);
  predict_unit2(data, result);
  predict_unit3(data, result);
  predict_unit4(data, result);
  predict_unit5(data, result);
  predict_unit6(data, result);
  predict_unit7(data, result);
  predict_unit8(data, result);
  predict_unit9(data, result);
  predict_unit10(data, result);
  predict_unit11(data, result);
  predict_unit12(data, result);
  predict_unit13(data, result);
  predict_unit14(data, result);
  predict_unit15(data, result);
  predict_unit16(data, result);
  predict_unit17(data, result);
  predict_unit18(data, result);
  predict_unit19(data, result);
  predict_unit20(data, result);
  predict_unit21(data, result);
  predict_unit22(data, result);
  predict_unit23(data, result);
  predict_unit24(data, result);
  predict_unit25(data, result);
  predict_unit26(data, result);
  predict_unit27(data, result);
  predict_unit28(data, result);
  predict_unit29(data, result);
  predict_unit30(data, result);
  predict_unit31(data, result);
  
  // Apply base_scores
  result[0] += 0.5;
  result[1] += 0.5;
  result[2] += 0.5;
  result[3] += 0.5;
  result[4] += 0.5;
  result[5] += 0.5;
  result[6] += 0.5;
  result[7] += 0.5;
  result[8] += 0.5;
  result[9] += 0.5;
  result[10] += 0.5;
  result[11] += 0.5;
  result[12] += 0.5;
  result[13] += 0.5;
  result[14] += 0.5;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

// Apply postprocessor for a single target
static void postprocess_impl(float* target_result, int num_class) {
  float max_margin = target_result[0];
  double norm_const = 0.0;
  float t;
  for (int k = 1; k < num_class; ++k) {
    if (target_result[k] > max_margin) {
      max_margin = target_result[k];
    }
  }
  for (int k = 0; k < num_class; ++k) {
    t = expf(target_result[k] - max_margin);
    norm_const += t;
    target_result[k] = t;
  }
  for (int k = 0; k < num_class; ++k) {
    target_result[k] /= (float)norm_const;
  }
}

void postprocess(float* result) {
  // softmax
  postprocess_impl(&result[0], 15);
}

