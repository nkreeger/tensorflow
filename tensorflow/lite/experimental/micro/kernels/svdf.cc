/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// TODO(kreeger): write me.
//#include "tensorflow/lite/kernels/internal/reference/softmax.h"
#include "tensorflow/lite/c/builtin_op_data.h"
#include "tensorflow/lite/c/c_api_internal.h"
#include "tensorflow/lite/kernels/internal/common.h"
#include "tensorflow/lite/kernels/internal/quantization_util.h"
#include "tensorflow/lite/kernels/internal/tensor_ctypes.h"
#include "tensorflow/lite/kernels/kernel_util.h"
#include "tensorflow/lite/kernels/op_macros.h"

namespace tflite {
namespace ops {
namespace micro {
namespace activations {

struct ObjData {
  //
  // TODO(kreeger): define me.
  // 
};

void* Init(TfLiteContext* context, const char* buffer, size_t length) {
  return nullptr;
}

void Free(TfLiteContext* context, void* buffer) {}

}  // namespace activations

TfLiteRegistration* Register_SVDF() {
  /* static TfLiteRegistration r = {activations::Init, activations::Free, */
  /*                                activations::SoftmaxPrepare, */
  /*                                activations::SoftmaxEval}; */
  /* return &r; */
  return nullptr;
}

}  // namespace micro
}  // namespace ops
}  // namespace tflite 
