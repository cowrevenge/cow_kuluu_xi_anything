/* f_0x10264a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10264a60(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (self == 0u)
    {
        ecx = 0u;
    }
    else
    {
        ecx = self + 0xcu;
    }
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, ecx);
    t1 = rd32(self + 0x18u);
    wr32(sp0 - 0x28u, t1);
    g->eax = t1;
    g->edx = rd32(rd32(self + 0x18u));
    t2 = rd32(rd32(self + 0x18u));
    g->esp = sp0 - 0x1cu;
    t3 = cow_thiscall(g, rd32(t2 + 0x10u), ecx, 3, t1, ecx, arg1);
    t4 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
    }
    else
    {
        edx = t4;
        wr32(sp0 - 0x20u, arg1);
        g->eax = rd32(self);
        t5 = rd32(self);
        g->esp = sp0 - 0x1cu;
        t6 = cow_thiscall(g, rd32(t5 + 0x24u), self, 1, arg1);
        if ((int32_t)t6 < 0)
        {
            eax = t6;
        }
        else
        {
            if (rd32(self + 0x9cu) == 0u) goto L_10264b24;
            eax = rd32(self + 0x9cu);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 4u, 0u);
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            wr32(sp0 - 0x24u, eax);
            g->edx = sp0 - 0x10u;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(eax) + 0x14u), rd32(eax), 2, eax, sp0 - 0x10u);
            t7 = g->edx;
            if (0u)
            {
                edx = t7;
            }
            else
            {
                edx = t7;
                wr32(sp0 - 8u, 1u);
            }
            t8 = rd32(self + 0x98u);
            wr32(sp0 - 0x20u, t8);
            g->eax = t8;
            g->esp = sp0 - 0x1cu;
            t9 = cow_thiscall(g, rd32(rd32(t8) + 0x18u), rd32(t8), 1, t8);
            if ((int32_t)t9 < 0)
            {
                eax = t9;
                goto L_10264b26;
            }
            wr32(sp0 - 0x20u, sp0 - 0x10u);
            t10 = rd32(self + 0x98u);
            wr32(sp0 - 0x24u, t10);
            g->eax = sp0 - 0x10u;
            g->esp = sp0 - 0x1cu;
            t11 = cow_thiscall(g, rd32(rd32(self) + 0x3cu), self, 2, t10, sp0 - 0x10u);
            t12 = g->ecx;
            if ((int32_t)t11 < 0)
            {
                eax = t11;
                goto L_10264b26;
            }
            ecx = t12;
            t13 = rd32(self + 0x98u);
            wr32(sp0 - 0x20u, t13);
            g->eax = t13;
            g->esp = sp0 - 0x1cu;
            t14 = cow_thiscall(g, rd32(rd32(t13) + 0x14u), ecx, 1, t13);
            if ((int32_t)t14 < 0)
            {
                eax = t14;
                goto L_10264b26;
            }
            t15 = rd32(self + 0xd8u);
            wr32(sp0 - 0x20u, t15);
            t16 = rd32(self + 0x98u);
            wr32(sp0 - 0x24u, t16);
            t17 = rd32(self + 0x9cu);
            wr32(sp0 - 0x28u, t17);
            g->eax = t17;
            g->esp = sp0 - 0x1cu;
            t18 = cow_thiscall(g, rd32(rd32(rd32(self + 0x9cu)) + 0x10u), rd32(rd32(self + 0x9cu)), 3, t17, t16, t15);
            if ((int32_t)t18 < 0)
            {
                eax = t18;
                goto L_10264b26;
            }
L_10264b24: ;
            eax = 0u;
        }
    }
L_10264b26: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264a60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
