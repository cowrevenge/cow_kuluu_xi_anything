/* f_0x1003abb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003abb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1003aab0u), self, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
        esi = t1;
    }
    else
    {
        eax = rd32(self + 0xcu);
        edx = in_edx;
        esi = self + 0xcu;
    }
    if (rd32(esi) == 0u) goto L_1003ac39;
    ecx = rd32(esi);
    ebp = 0u;
L_1003abd5: ;
    if (rd32(ecx + 0x3cu) != 1u)
    {
        eax = rd32(ecx + 0x3cu);
        goto L_1003ac00;
    }
    eax = rd32(ecx + 0x3cu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10039a30u), ecx, 0);
    t3 = g->edx;
    t4 = rd32(esi);
    wr32(self + 0xcu, t4);
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = t4;
        edx = t3;
        goto L_1003ac2e;
    }
    eax = t4;
    edx = t3;
    if (rd8(self + 0x10u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
        goto L_1003ac2e;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
    if ((int32_t)(ebp + 1u) > 20) goto L_1003ac39;
    ebp = ebp + 1u;
L_1003ac2e: ;
    if (rd32(rd32(esi) + 0x38u) != 0u)
    {
        ecx = rd32(rd32(esi) + 0x38u);
        esi = rd32(esi) + 0x38u;
        goto L_1003abd5;
    }
L_1003ac39: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_1003ac00: ;
    if (eax == 2u)
    {
        if (rd32(ecx + 0x40u) != 0u) goto L_1003ac13;
        if (rd32(ecx + 0x44u) == 0u)
        {
            eax = rd32(ecx + 0x44u);
            goto L_1003ac23;
        }
L_1003ac13: ;
        if (rd32(ecx + 0x40u) != 0u)
        {
            eax = rd32(ecx + 0x40u);
        }
        else
        {
            eax = rd32(ecx + 0x44u);
        }
        g->eax = eax;
        g->edx = rd32(eax);
        t5 = rd32(eax);
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, rd32(t5 + 8u), ecx, 1, eax);
        t7 = g->edx;
        eax = t6;
        edx = t7;
L_1003ac23: ;
        g->ebx = self;
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10039a60u), eax, rd32(esi), edx, 1, 0);
        t8 = g->edx;
        t9 = rd32(esi);
        wr32(self + 0xcu, t9);
        eax = t9;
        edx = t8;
    }
    goto L_1003ac2e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003abb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003abb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
