/* f_0x10204d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10204d50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106643a8u)) == 0u) goto L_10204d8e;
    eax = rd32(COW_IMG(0x106643a8u));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10204d7f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((rd8(eax + 0x34u) & 3u) != 0u) goto L_10204d7f;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x100e9800u), g->eax, g->ecx, edx, 1, 2, 0u, COW_IMG(0x10204cd0u));
    return;
L_10204d7f: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x100e9800u), g->eax, g->ecx, edx, 1, 2, 5u, COW_IMG(0x10204cd0u));
L_10204d8e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10204d50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
