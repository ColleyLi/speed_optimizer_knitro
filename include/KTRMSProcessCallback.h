/*******************************************************/
/* Copyright (c) 2015 by Artelys                       */
/* All Rights Reserved                                 */
/*******************************************************/
#pragma once

#include <vector>

namespace knitro {
class KTRISolver;

/**
 * Abstract base class for multistart process callback, called after each multistart solve.
 */
class KTRMSProcessCallback {
 public:
  /**
   * Virtual destructor required for virtual classes.
   */
  virtual ~KTRMSProcessCallback() {
  }

  /**
   *
   * @param x
   * @param lambda
   * @param obj
   * @param c
   * @param solver
   * @return
   */
  virtual int CallbackFunction(const double* const x, const double* const lambda, const double obj,
                               const double* const c, KTRISolver* solver) = 0;

  /**
   * 
   * @param x
   * @param obj
   * @param solver
   * @return
   */
  virtual int CallbackFunctionLSQ(const double* const x, const double obj, KTRISolver* solver) { return -1; }

};

}

