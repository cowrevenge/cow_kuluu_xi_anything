/* f_0x100b6180 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100af4b0(1), stores its low word with bit 13 set into a global word, and increments a word field at self+0x256 by 3.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6180(Guest* g, uint32_t self)
{
    const uint32_t saved_esi = g->esi;

    /* 100b6185: call 0x100af4b0 with one stack argument (1), callee pops it. */
    uint32_t eax = cow_stdcall(g, COW_IMG(0x100af4b0u), 1u, 1u);

    /* Original saved/restored esi around the call. */
    g->esi = saved_esi;

    /* 100b618a: or ah, 0x20 */
    uint16_t ax = (uint16_t)eax;
    ax = (uint16_t)((ax & 0x00FFu) | ((ax & 0xFF00u) | 0x2000u));

    /* Keep eax faithful for the rest of the function, although eax is not compared. */
    g->eax = (eax & 0xFFFF00FFu) | ((uint32_t)ax << 8);

    /* 100b618d: mov word ptr [0x104808fc], ax */
    wr16(COW_IMG(0x104808fcu), ax);

    /* 100b6193: add word ptr [esi + 0x256], 3 */
    const uint32_t addr = self + 0x256u;
    const uint16_t old = rd16(addr);
    wr16(addr, (uint16_t)(old + 3u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6180(g, g->ecx);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
