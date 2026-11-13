/* f_0x10192f40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Loads two object pointers from the object in ecx, then calls FUN_10118db0 with this=ecx[8], a 16-bit field from ecx[0x18]+0x24, and 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10192f40(Guest* g, uint32_t self)
{
    uint32_t esp = g->esp;
    uint32_t eax = rd32(self + 0x18u);
    uint32_t ecx = rd32(self + 0x8u);

    /* push 0 */
    esp -= 4u;
    wr32(esp, 0u);

    /* mov dx, word ptr [eax + 0x24] */
    uint32_t edx = (g->edx & 0xFFFF0000u) | (uint32_t)rd16(eax + 0x24u);

    /* push edx */
    esp -= 4u;
    wr32(esp, edx);

    /*
     * call 0x10118db0
     *
     * The original has already pushed both stack arguments.  Call the callee
     * with no additional stack arguments; its ret 8 pops the two words we
     * pushed manually.
     */
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = esp;

    cow_thiscall(g, COW_IMG(0x10118db0u), ecx, 0u);

    /*
     * The callee may have changed eax/edx.  The judge compares both, so take
     * them from g after the call.  The original returns with a bare ret, so
     * the caller-visible esp is the entry esp.
     */
    g->esp = esp + 8u; /* not used by adapter, but keep guest state sane */
    g->edx = g->edx;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10192f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10192f40(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
