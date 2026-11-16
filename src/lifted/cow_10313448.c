/* f_0x10313448 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10313448(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x103159d3u), 0);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x109f943cu));
    t4 = cow_call_regs(g, COW_IMG(0x1031d1c9u), g->eax, t1, t2, 1, 1, t3);
    if (t4 >= rd32(COW_IMG(0x109f9438u)) - rd32(COW_IMG(0x109f943cu)) + 4u)
    {
        ecx = rd32(COW_IMG(0x109f9438u));
        edx = rd32(COW_IMG(0x109f943cu));
        goto L_103134ae;
    }
    ecx = rd32(COW_IMG(0x109f9438u));
    edx = rd32(COW_IMG(0x109f943cu));
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x1031d1c9u), g->eax, ecx, edx, 1, 1, edx);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = cow_call_regs(g, COW_IMG(0x10313110u), g->eax, t6, t7, 1, 3, rd32(COW_IMG(0x109f943cu)), t5 + 0x10u, edx);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t10;
        goto L_10313491;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    esi = 0u;
L_103134bd: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x103159dcu), 0);
    t14 = g->edx;
    g->edx = t14;
    return esi;
L_10313491: ;
    t11 = rd32(COW_IMG(0x109f9438u));
    t12 = rd32(COW_IMG(0x109f943cu));
    wr32(COW_IMG(0x109f943cu), eax);
    t13 = eax + (uint32_t)((int32_t)(t11 - t12) >> 2u) * 4u;
    wr32(COW_IMG(0x109f9438u), t13);
    ecx = t13;
L_103134ae: ;
    wr32(ecx, arg1);
    wr32(COW_IMG(0x109f9438u), rd32(COW_IMG(0x109f9438u)) + 4u);
    eax = arg1;
    esi = arg1;
    goto L_103134bd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10313448(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10313448(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
