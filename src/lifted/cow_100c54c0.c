/* f_0x100c54c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100c54c0(Guest* g)
{
    double d16;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        edx = t2;
        esi = t1;
        g->eax = rd32(esi);
        g->edx = edx;
        t3 = rd32(esi);
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, rd32(t3 + 0x334u), esi, 1, 0u);
        t5 = g->edx;
        g->edx = t5;
        t6 = cow_call_regs(g, COW_IMG(0x10157cf0u), t4, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
        t7 = g->edx;
        if (t6 != 0u)
        {
            eax = t6;
            goto L_100c54fa;
        }
        edx = t7;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
        t9 = g->edx;
        if (t8 == 0u)
        {
            eax = t8;
            edx = t9;
            goto L_100c552e;
        }
        eax = t8;
L_100c54fa: ;
        g->edx = rd32(eax);
        t10 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t10 + 0x3f8u), eax, 0);
        t11 = g->edx;
        t12 = cow_fastcall(g, COW_IMG(0x10084420u), esi, t11, 0);
        t13 = g->edx;
        if (t12 == 5u)
        {
            eax = t12;
            edx = t13;
            goto L_100c551c;
        }
        edx = t13;
        g->esp = sp0 - 4u;
        t14 = cow_fastcall(g, COW_IMG(0x10084420u), esi, edx, 0);
        t15 = g->edx;
        if (t14 != 6u)
        {
            eax = t14;
            edx = t15;
            goto L_100c552e;
        }
        eax = t14;
        edx = t15;
L_100c551c: ;
        d16 = fr(g, (double)rdf32(COW_IMG(0x10456da8u)) * (double)rdf32(COW_IMG(0x10329a34u)));
        wrf32(COW_IMG(0x10456da8u), (float)d16);
    }
L_100c552e: ;
    wr32(COW_IMG(0x10456dacu), 0x40a00000u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c54c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c54c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
