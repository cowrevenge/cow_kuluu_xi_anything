/* f_0x10062fe0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts ecx by subtracting 0x34 and returns a pointer to a global at 0x1032b7ec in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10062fe0(Guest* g)
{
    /* sub ecx, 0x34 */
    uint32_t a = g->ecx;
    uint32_t b = 0x34u;
    uint32_t r = (uint32_t)(a - b);
    
    /* Update flags as per the original instruction semantics */
    g->cf = (uint32_t)a < (uint32_t)b;
    g->of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1u;
    g->af = (((a) ^ (b) ^ (r)) >> 4) & 1u;
    g->zf = (uint32_t)r == 0;
    g->sf = ((r) >> 31) & 1u;
    /* pf calculation: parity of the low 8 bits */
    uint32_t p = r ^ (r >> 4);
    p ^= (p >> 2);
    p ^= (p >> 1);
    g->pf = (~p) & 1u;
    
    g->ecx = r;

    /* mov eax, 0x1032b7ec */
    return COW_IMG(0x1032b7ecu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10062fe0(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
