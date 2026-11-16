/* f_0x100c5440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100c5440(Guest* g)
{
    double d14;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(esi) + 0x334u), esi, 1, 0u);
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x10157cf0u), rd32(COW_IMG(0x1057876cu)), 0);
        t5 = g->edx;
        if (t4 != 0u)
        {
            eax = t4;
            goto L_100c547a;
        }
        edx = t5;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t6 = cow_thiscall(g, COW_IMG(0x10081600u), COW_IMG(0x10487f58u), 0);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            edx = t7;
            goto L_100c54ae;
        }
        eax = t6;
L_100c547a: ;
        g->edx = rd32(eax);
        t8 = rd32(eax);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t8 + 0x3f8u), eax, 0);
        t9 = g->edx;
        t10 = cow_fastcall(g, COW_IMG(0x10084420u), esi, t9, 0);
        t11 = g->edx;
        if (t10 == 5u)
        {
            eax = t10;
            edx = t11;
            goto L_100c549c;
        }
        edx = t11;
        g->esp = sp0 - 4u;
        t12 = cow_fastcall(g, COW_IMG(0x10084420u), esi, edx, 0);
        t13 = g->edx;
        if (t12 != 6u)
        {
            eax = t12;
            edx = t13;
            goto L_100c54ae;
        }
        eax = t12;
        edx = t13;
L_100c549c: ;
        d14 = fr(g, (double)rdf32(COW_IMG(0x10456da8u)) * (double)rdf32(COW_IMG(0x10329a34u)));
        wrf32(COW_IMG(0x10456da8u), (float)d14);
    }
L_100c54ae: ;
    wr32(COW_IMG(0x10456dacu), 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c5440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c5440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
