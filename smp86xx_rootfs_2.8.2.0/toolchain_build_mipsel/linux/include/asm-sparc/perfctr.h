/*----------------------------------------
  PERFORMANCE INSTRUMENTATION  
  Guillaume Thouvenin           08/10/98
  David S. Miller               10/06/98
  ---------------------------------------*/
#ifndef PERF_COUNTER_API
#define PERF_COUNTER_API

/* sys_perfctr() interface.  First arg is operation code
 * from enumeration below.  The meaning of further arguments
 * are determined by the operation code.
 *
 * int sys_perfctr(int opcode, unsigned long arg0,
 *                 unsigned long arg1, unsigned long arg2)
 *
 * Pointers which are passed by the user are pointers to 64-bit
 * integers.
 *
 * Once enabled, performance counter state is retained until the
 * process either exits or performs an exec.  That is, performance
 * counters remain enabled for fork/clone children.
 */
enum perfctr_opcode {
	/* Enable UltraSparc performance counters, ARG0 is pointer
	 * to 64-bit accumulator for D0 counter in PIC, ARG1 is pointer
	 * to 64-bit accumulator for D1 counter.  ARG2 is a pointer to
	 * the initial PCR register value to use.
	 */
	PERFCTR_ON,

	/* Disable UltraSparc performance counters.  The PCR is written
	 * with zero and the user counter accumulator pointers and
	 * working PCR register value are forgotten.
	 */
	PERFCTR_OFF,

	/* Add current D0 and D1 PIC values into user pointers given
	 * in PERFCTR_ON operation.  The PIC is cleared before returning.
	 */
	PERFCTR_READ,

	/* Clear the PIC register. */
	PERFCTR_CLRPIC,

	/* Begin using a new PCR value, the pointer to which is passed
	 * in ARG0.  The PIC is also cleared after the new PCR value is
	 * written.
	 */
	PERFCTR_SETPCR,

	/* Store in pointer given in ARG0 the current PCR register value
	 * being used.
	 */
	PERFCTR_GETPCR
};

#endif /* !(PERF_COUNTER_API) */
