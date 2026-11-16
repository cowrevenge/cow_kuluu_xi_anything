/* f_0x1007cab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007cab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 564u);

    wr32(sp0 - 0x20cu, sp0 - 0x208u);
    g->edx = in_edx;
    g->esp = sp0 - 0x208u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc770u), 1, sp0 - 0x208u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        esi = in_esi;
    }
    else
    {
        edx = t2;
        wr32(sp0 - 0x20cu, in_esi);
        t3 = rd32(sp0 - 0x208u);
        wr32(sp0 - 0x210u, t3);
        g->esp = sp0 - 0x20cu;
        t4 = cow_cdecl(g, COW_IMG(0x10103c50u), 1, t3);
        t5 = rd32(sp0 - 0x208u);
        if (t4 != 0u)
        {
            eax = t5;
            ecx = t5;
            esi = t4;
            wr32(sp0 - 0x210u, in_edi);
            t15 = cow_divu(g, eax, 0x3cu);
            t16 = cow_modu(g, eax, 0x3cu);
            wr32(sp0 - 0x214u, t16);
            wr32(sp0 - 0x218u, ecx);
            g->edx = t16;
            g->esp = sp0 - 0x214u;
            t17 = cow_cdecl(g, COW_IMG(0x10103c80u), 1, ecx);
            t18 = g->edx;
            wr32(sp0 - 0x218u, t17);
            t19 = rd32(sp0 - 0x208u);
            wr32(sp0 - 0x21cu, t19);
            g->ecx = t19;
            g->esp = sp0 - 0x218u;
            t20 = cow_cdecl(g, COW_IMG(0x10103c60u), 1, t19);
            t21 = g->ecx;
            wr32(sp0 - 0x21cu, t20);
            wr32(sp0 - 0x220u, esi);
            wr32(sp0 - 0x224u, 0x2fu);
            wr32(sp0 - 0x228u, 0xau);
            wr32(sp0 - 0x22cu, 0x200u);
            wr32(sp0 - 0x230u, sp0 - 0x200u);
            g->edx = sp0 - 0x200u;
            g->esp = sp0 - 0x21cu;
            cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x200u, 0x200u, 0xau, 0x2fu, esi);
            t22 = g->edx;
            edx = t22;
        }
        else
        {
            eax = t5;
            ecx = t5;
            t6 = cow_divu(g, eax, 0x3cu);
            t7 = cow_modu(g, eax, 0x3cu);
            wr32(sp0 - 0x210u, t7);
            wr32(sp0 - 0x214u, ecx);
            g->ecx = ecx;
            g->esp = sp0 - 0x210u;
            t8 = cow_cdecl(g, COW_IMG(0x10103c80u), 1, ecx);
            t9 = g->ecx;
            wr32(sp0 - 0x214u, t8);
            t10 = rd32(sp0 - 0x208u);
            wr32(sp0 - 0x218u, t10);
            g->ecx = t9;
            g->edx = t10;
            g->esp = sp0 - 0x214u;
            t11 = cow_cdecl(g, COW_IMG(0x10103c60u), 1, t10);
            t12 = g->ecx;
            t13 = g->edx;
            wr32(sp0 - 0x218u, t11);
            wr32(sp0 - 0x21cu, 0x2eu);
            wr32(sp0 - 0x220u, 0xau);
            wr32(sp0 - 0x224u, 0x200u);
            wr32(sp0 - 0x228u, sp0 - 0x200u);
            g->edx = t13;
            cow_cdecl(g, COW_IMG(0x10153150u), 5, sp0 - 0x200u, 0x200u, 0xau, 0x2eu, t11);
            t14 = g->edx;
            edx = t14;
        }
        wr32(sp0 - 0x210u, 0u);
        wr32(sp0 - 0x214u, 1u);
        wr32(sp0 - 0x218u, 0u);
        wr32(sp0 - 0x21cu, sp0 - 0x204u);
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        g->edx = edx;
        g->esp = sp0 - 0x20cu;
        cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x200u, sp0 - 0x204u, 0u, 1u, 0u);
        t23 = g->edx;
        edx = t23;
        esi = rd32(sp0 - 0x20cu);
    }
    g->esi = esi;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007cab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007cab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
