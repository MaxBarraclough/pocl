#include "pocl_cl.h"

CL_API_ENTRY cl_int CL_API_CALL
clGetCommandQueueInfo(cl_command_queue       command_queue ,
                      cl_command_queue_info  param_name ,
                      size_t                 param_value_size ,
                      void *                 param_value ,
                      size_t *               param_value_size_ret ) CL_API_SUFFIX__VERSION_1_0
{
  POCL_ABORT_UNIMPLEMENTED();
  return CL_SUCCESS;
}
