/* f_0x100572e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100572e0(Guest* g)
{
    double d16;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10074740u), in_eax, self, in_edx, 1, 0);
    t1 = g->edx;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003b540u), self + 0x34u, 0);
    t3 = g->edx;
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x10055640u), self + 0xb4u, 0);
    t4 = g->edx;
    eax = self + 0xc0u;
    ecx = 0x10u;
    edx = t4;
L_1005730b: ;
    wr32(eax, 0u);
    if (ecx != 1u)
    {
        eax = eax + 8u;
        ecx = ecx - 1u;
        goto L_1005730b;
    }
    eax = eax + 8u;
    wr32(self, COW_IMG(0x1032b860u));
    wr32(self + 0x34u, COW_IMG(0x1032b844u));
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100573b0u), self, 0);
    t5 = g->edx;
    if (rd32(arg1 + 0x80u) == 0u)
    {
        ecx = rd32(arg1 + 0x90u);
        edx = t5;
        eax = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x80u);
        ecx = rd32(arg1 + 0x90u);
        edx = t5;
        eax = rd32(eax);
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, eax, 0u, ecx);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x100627d0u), arg1, 0);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10062770u), arg1, 0);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x34u, 1, t9);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x34u, 1, t7);
    t14 = g->edx;
    t15 = rd8(arg1 + 0x144u);
    wr8(self + 0x144u, (uint8_t)t15);
    if (rd8(arg1 + 0x142u) == 0u)
    {
        edx = t14;
    }
    else
    {
        edx = t14;
        d16 = (double)rdf32(arg1 + 0x9cu);
        wrf32(self + 0x9cu, (float)d16);
        wr8(self + 0x142u, 1u);
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100572e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100572e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
