/* f_0x10074b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10074b60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0xd50u);
    wr32(self, COW_IMG(0x10329cb8u));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10074b82;
    }
    eax = in_eax;
    ecx = t1;
    edx = in_edx;
L_10074b74: ;
    t2 = rd32(ecx + 0xcu);
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10074ab0u), eax, ecx, edx, 1, 0);
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t3;
        ecx = t2;
        edx = t4;
        goto L_10074b74;
    }
    eax = t3;
    edx = t4;
L_10074b82: ;
    esi = self + 0xd04u;
    edi = 0x40u;
L_10074b8d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x100747c0u), esi - 0x34u, 0);
    t6 = g->edx;
    if (edi != 1u)
    {
        eax = t5;
        edx = t6;
        esi = esi - 0x34u;
        edi = edi - 1u;
        goto L_10074b8d;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10074b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10074b60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
