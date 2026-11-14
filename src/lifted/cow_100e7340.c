/* f_0x100e7340 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Stores the low byte of the stack argument at offset 0x294 of the object pointed to by the global at 0x104df770, then sets bit 4 of the byte at offset 0x1c4 of the same object.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e7340(Guest* g, uint32_t param)
{
    uint32_t eax = rd32(COW_IMG(0x104DF770u));

    /* mov cl, byte ptr [esp + 4] */
    g->ecx = (g->ecx & 0xFFFFFF00u) | (param & 0xFFu);

    /* mov byte ptr [eax + 0x294], cl */
    wr8(eax + 0x294u, (uint8_t)param);

    /* mov eax, dword ptr [0x104df770] */
    eax = rd32(COW_IMG(0x104DF770u));

    /* or byte ptr [eax + 0x1c4], 0x10 */
    {
        const uint32_t addr = eax + 0x1C4u;
        const uint8_t old = rd8(addr);
        wr8(addr, (uint8_t)(old | 0x10u));
    }

    /* edx is never written by the original; leave it as it was on entry. */
    g->edx = g->edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_100e7340(g, param);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
