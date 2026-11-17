/* f_0x10269000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10269000(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if (rd32(self + 0x10u) != 0u) goto L_10269019;
    return 0x80040234u;
L_10269019: ;
    wr32(sp0 - 0x38u, sp0 - 0x2cu);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    t1 = rd32(self + 0x20u);
    wr32(sp0 - 0x44u, t1);
    wr32(sp0 - 0x48u, self + 0x48u);
    g->eax = t1;
    g->esp = sp0 - 0x34u;
    t2 = cow_fastcall(g, COW_IMG(0x10266bc0u), sp0 - 0x2cu, self + 0x48u, 5, self + 0x48u, t1, 0u, 0u, sp0 - 0x2cu);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        goto L_102690ad;
    }
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    t4 = rd32(self + 0x20u);
    wr32(sp0 - 0x3cu, t4);
    t5 = rd32(self + 0x14u);
    wr32(sp0 - 0x40u, t5);
    g->eax = t5;
    g->edx = rd32(rd32(self + 0x14u));
    t6 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x3cu;
    t7 = cow_thiscall(g, rd32(t6), t4, 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)t7 >= 0)
    {
        ecx = t8;
        goto L_1026905c;
    }
    edx = t9;
    edi = t7;
    t10 = rd32(sp0 - 0x34u);
    wr32(sp0 - 0x40u, t10);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    cow_thiscall(g, rd32(rd32(t10) + 8u), rd32(t10), 3, t10, rd32(sp0 - 0x3cu), sp0 - 0x28u);
    t11 = g->edx;
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->edx = t11;
    return edi;
L_1026905c: ;
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, sp0 - 0x2cu);
    wr32(sp0 - 0x4cu, sp0 - 0x28u);
    t12 = rd32(self + 0x2cu);
    wr32(sp0 - 0x50u, t12);
    wr32(sp0 - 0x54u, self + 0x34u);
    t13 = (ecx & 0xffff0000u) | rd16(self + 0x28u);
    wr32(sp0 - 0x58u, t13);
    t14 = rd32(self + 0x24u);
    wr32(sp0 - 0x5cu, t14);
    t15 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x60u, t15);
    t16 = rd32(sp0 - 0x34u);
    wr32(sp0 - 0x64u, t16);
    g->eax = self + 0x34u;
    g->esp = sp0 - 0x5cu;
    t17 = cow_thiscall(g, rd32(rd32(rd32(sp0 - 0x34u)) + 0x2cu), t15, 2, t16, t15);
    t18 = g->ecx;
    wr32(self + 0x4cu, t17);
    wr32(sp0 - 0x60u, sp0 - 0x2cu);
    g->edx = rd32(sp0 - 0x2cu);
    t19 = rd32(sp0 - 0x2cu);
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, rd32(t19 + 8u), t18, 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x64u, t16);
    g->eax = rd32(t16);
    t22 = rd32(t16);
    g->esp = sp0 - 0x64u;
    t23 = cow_thiscall(g, rd32(t22 + 8u), t20, 0);
    wr32(sp0 - 0x68u, self);
    g->edx = rd32(rd32(self + 0x10u));
    t24 = rd32(rd32(self + 0x10u));
    g->esp = sp0 - 0x3cu;
    t25 = cow_thiscall(g, rd32(t24 + 0xcu), rd32(self + 0x10u), 11, self, rd32(sp0 - 0x64u), sp0 - 0x2cu, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), self + 0x34u, rd32(sp0 - 0x50u), sp0 - 0x28u, sp0 - 0x2cu, in_ebp, in_ebx);
    t26 = g->edx;
    t27 = rd32(sp0 - 0x3cu);
    wr32(self + 0x10u, 0u);
    eax = t25;
    edx = t26;
    ebx = sp0 - 0x28u;
    ebp = t27;
L_102690ad: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
