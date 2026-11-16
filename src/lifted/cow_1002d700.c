/* f_0x1002d700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1002d700(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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

    t1 = rd32(self + 0x5cu);
    wr32(self, COW_IMG(0x1032a7b0u));
    if (t1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t2 = g->edx;
        wr32(self + 0x5cu, 0u);
        edx = t2;
    }
    t3 = rd32(self + 0x40u);
    wr32(self + 0x60u, 0u);
    if (t3 != 0u)
    {
        eax = t3;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t4 = g->edx;
        wr32(self + 0x40u, 0u);
        edx = t4;
    }
    if (rd32(self + 0x4cu) != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, self + 0x4cu);
        t5 = g->edx;
        wr32(self + 0x4cu, 0u);
        edx = t5;
    }
    t6 = rd32(self + 0x64u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    if (t6 == 0u)
    {
        ecx = t6;
    }
    else
    {
        ecx = t6;
        t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->edx = rd32(t7);
        t8 = rd32(t7);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t8 + 0x138u), ecx, 2, t7, ecx);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(self + 0x64u, 0u);
        ecx = t9;
        edx = t10;
    }
    t11 = rd32(self + 0x6au);
    wr8(self + 0x68u, 0u);
    wr8(self + 0x69u, 0u);
    if (t11 != 0u)
    {
        eax = t11;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(self + 0x6au, 0u);
        ecx = t12;
        edx = t13;
    }
    t14 = rd32(self + 0x72u);
    wr32(self + 0x6eu, 0u);
    if (t14 != 0u)
    {
        eax = t14;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(self + 0x72u, 0u);
        ecx = t15;
        edx = t16;
    }
    wr32(self + 0x76u, 0u);
    eax = 0u;
L_1002d7ac: ;
    if (rd32(COW_IMG(0x1045b650u) + eax * 4u) == self) goto L_1002d7bb;
    if ((int32_t)(eax + 1u) < 16)
    {
        eax = eax + 1u;
        goto L_1002d7ac;
    }
    eax = eax + 1u;
L_1002d7bb: ;
    if (eax != 0x10u)
    {
        wr32(COW_IMG(0x1045b650u) + eax * 4u, 0u);
    }
    if (rd32(self + 0x7au) == 0u)
    {
        eax = rd32(self + 0x7au);
    }
    else
    {
        eax = rd32(self + 0x7au);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t17 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t18 = g->edx;
        wr32(self + 0x7au, 0u);
        eax = t17;
        edx = t18;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100747c0u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002d700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002d700(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
