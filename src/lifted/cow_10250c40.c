/* f_0x10250c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10250c40(Guest* g)
{
    double d2;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(sp0 + 0xcu) < 0)
    {
        eax = 0u;
        ecx = rd32(sp0 + 0xcu);
    }
    else
    {
        ecx = rd32(sp0 + 0xcu);
        if ((int32_t)ecx > 15)
        {
            eax = 0u;
        }
        else
        {
            eax = COW_IMG(0x103890e8u) + ecx * 0x24u;
        }
    }
    if ((int32_t)arg2 >= 0) goto L_10250cf0;
    if (eax == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1033cda0u));
        wr32(sp0 + 0xcu, 0x3f8ccccdu);
        esi = 0xffffffffu;
    }
    else
    {
        x0 = (double)rdf32(COW_IMG(0x1033cda0u));
        t1 = rd32(eax + 0x14u);
        wr32(sp0 + 0xcu, t1);
        esi = ecx;
    }
    ecx = COW_IMG(0x103890fcu);
    edx = 0u;
L_10250c8d: ;
    if (!(rd32(ecx - 0x14u) & 1u))
    {
        eax = rd32(ecx - 0x14u);
    }
    else
    {
        eax = rd32(ecx - 0x14u);
        if ((eax & 6u) != 0u)
        {
            if (!(x0 < (double)rdf32(ecx)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(ecx), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(ecx), 1u);
                d2 = (double)rdf32(sp0 + 0xcu);
                if (!((double)rdf32(ecx) < d2))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d2, 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d2, 1u);
                    esi = edx;
                    x0 = (double)rdf32(ecx);
                }
            }
        }
    }
    if ((int32_t)(ecx + 0x24u) < (int32_t)COW_IMG(0x10389318u))
    {
        ecx = ecx + 0x24u;
        edx = edx + 1u;
        goto L_10250c8d;
    }
    if ((int32_t)esi < 0) goto L_10250d65;
    if (arg4 != 0u)
    {
        wr32(arg4, esi);
    }
    t3 = COW_IMG(0x103890fcu) + esi * 0x24u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10274d40u), 2, arg5, t3);
    return 0u;
L_10250cf0: ;
    if (arg2 == 0u || (int32_t)arg2 < 0) goto L_10250d6a;
    if (eax == 0u)
    {
        x0 = (double)rdf32(COW_IMG(0x1033cb1cu));
        wr32(sp0 + 0xcu, 0xbf8ccccdu);
        esi = 0xffffffffu;
    }
    else
    {
        x0 = (double)rdf32(COW_IMG(0x1033cb1cu));
        t4 = rd32(eax + 0x14u);
        wr32(sp0 + 0xcu, t4);
        esi = ecx;
    }
    ecx = COW_IMG(0x103890fcu);
    edx = 0u;
L_10250d19: ;
    if (!(rd32(ecx - 0x14u) & 1u))
    {
        eax = rd32(ecx - 0x14u);
    }
    else
    {
        eax = rd32(ecx - 0x14u);
        if ((eax & 6u) != 0u)
        {
            if ((cow_fsw(g, x0, (double)rdf32(ecx), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, x0, (double)rdf32(ecx), 1u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, x0, (double)rdf32(ecx), 1u) & 0x4100u;
                d5 = (double)rdf32(sp0 + 0xcu);
                if ((cow_fsw(g, (double)rdf32(ecx), d5, 1u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(ecx), d5, 1u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(ecx), d5, 1u) & 0x4100u;
                    esi = edx;
                    x0 = (double)rdf32(ecx);
                }
            }
        }
    }
    if ((int32_t)(ecx + 0x24u) < (int32_t)COW_IMG(0x10389318u))
    {
        ecx = ecx + 0x24u;
        edx = edx + 1u;
        goto L_10250d19;
    }
    if ((int32_t)esi < 0) goto L_10250d65;
    if (arg4 != 0u)
    {
        wr32(arg4, esi);
    }
    eax = esi * 9u;
L_10250d7b: ;
    t6 = COW_IMG(0x103890fcu) + eax * 4u;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10274d40u), 2, arg5, t6);
L_10250d90: ;
    return 0u;
L_10250d65: ;
    return 0xffffffffu;
L_10250d6a: ;
    if (arg4 != 0u)
    {
        wr32(arg4, ecx);
    }
    if (eax == 0u) goto L_10250d90;
    eax = ecx * 9u;
    goto L_10250d7b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10250c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10250c40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
