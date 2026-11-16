/* f_0x1011c720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1011c720(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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

    if (rd32(COW_IMG(0x10456aa0u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456aa0u));
        edx = in_edx;
        goto L_1011c7f1;
    }
    eax = rd32(COW_IMG(0x10456aa0u));
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x931u) != 0u)
    {
        eax = eax - 1u;
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x931u);
        goto L_1011c7f1;
    }
    eax = eax - 1u;
    ecx = rd32(COW_IMG(0x1045666cu));
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x1045666cu)) + 0x931u);
    if (rd32(ecx + 0x934u) < 0x800u)
    {
        eax = 0u;
    }
    if (rd32(ecx + 0x938u) < 0x1000u)
    {
        eax = 0u;
    }
    t1 = rd32(COW_IMG(0x10333000u) + eax * 0xcu);
    g->eax = eax * 0xcu;
    g->edx = edx;
    t2 = rd32(COW_IMG(0x10333004u) + eax * 0xcu);
    t3 = rd32(COW_IMG(0x10333008u) + eax * 0xcu);
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4af0u), rd32(COW_IMG(0x10662dccu)), 1, t1);
    t5 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        edx = t5;
        goto L_1011c7f1;
    }
    eax = t4;
    edx = t5;
    ebx = t2;
    ebp = t3;
    loc_4 = t1;
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_stdcall(g, COW_IMG(0x1011c5d0u), 3, self + 0x7cu, ebx, ebp);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(self + 0x7cu) == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t9 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x7cu);
        t10 = g->edx;
        if (t9 == 0u)
        {
            edx = t10;
            eax = 0u;
        }
        else
        {
            eax = t9;
            edx = t10;
            t11 = rd32(self + 0x7cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t12 = cow_thiscall(g, COW_IMG(0x10026890u), eax, 3, 0xffffffffu, t11, 0u);
            t13 = g->edx;
            eax = t12;
            edx = t13;
        }
        wr32(self + 0x78u, eax);
    }
    if (rd32(self + 0x78u) == 0u)
    {
        eax = rd32(self + 0x78u);
        goto L_1011c7f1;
    }
    eax = rd32(self + 0x78u);
    if (rd32(eax + 8u) == 0u) goto L_1011c7f1;
    ecx = rd32(eax + 8u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10039a30u), ecx, 0);
    t14 = rd32(rd32(self + 0x78u) + 8u);
    g->ebx = ebx;
    g->edx = loc_4;
    t15 = rd32(self + 0x78u);
    t16 = cow_call_regs(g, COW_IMG(0x1011c670u), t15, g->ecx, g->edx, 0, 2, t14, loc_4);
    t17 = g->edx;
    if ((uint8_t)t16 == 1u)
    {
        edx = t17;
        goto L_1011c7fe;
    }
    eax = t16;
    edx = t17;
L_1011c7f1: ;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1011c810u), eax, self, edx);
    return;
L_1011c7fe: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011c720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011c720(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
