/* f_0x100743d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100743d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1007453f;
    }
    eax = rd32(self + 0x14u);
    esi = rd32(COW_IMG(0x1047d130u));
    if (eax == 0u)
    {
        edx = self;
        goto L_10074534;
    }
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(eax + 8u);
        goto L_100744ac;
    }
    eax = rd32(eax + 8u);
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    wr32(self + 0x14u, eax);
    if (eax == 0u)
    {
        edx = self;
        goto L_10074534;
    }
    edx = self;
L_10074418: ;
    if ((rd32(rd32(edx + 0x14u) + 0x24u) & 0x7fu) != 1u) goto L_1007444e;
    eax = rd32(edx + 0x14u);
    ecx = rd32(rd32(edx + 0x14u) + 0x24u) & 0x7fu;
    if (rd32(eax + 0x38u) != esi) goto L_1007443f;
    if (rd32(eax + 0x3cu) == 0u)
    {
        wr32(edx + 0x14u, 0u);
    }
    else
    {
        eax = rd32(eax + 0x3cu);
        wr32(edx + 0x14u, rd32(eax));
    }
L_1007446b: ;
    if ((rd32(rd32(edx + 0x14u) + 0x24u) & 0x7fu) != rd32(edx + 8u))
    {
        eax = rd32(edx + 0x14u);
        goto L_1007448d;
    }
    eax = rd32(edx + 0x14u);
    if ((rd32(eax + 0x20u) & rd32(edx + 0x10u)) == rd32(edx + 0xcu)) goto L_1007459e;
L_1007448d: ;
    if (rd32(eax + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
        eax = rd32(eax);
    }
    wr32(edx + 0x14u, eax);
    if (eax != 0u) goto L_10074418;
    wr32(edx + 0x14u, eax);
    g->edx = edx;
    return eax;
L_1007443f: ;
    if (ecx == 1u)
    {
        wr32(eax + 0x38u, esi);
        t1 = rd32(edx + 0x18u) + 1u;
        wr32(edx + 0x18u, t1);
    }
L_1007444e: ;
    if ((rd8(rd32(edx + 0x14u) + 0x24u) & 0x7fu) != 0u) goto L_1007446b;
    ecx = rd32(edx + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10072270u), ecx, 0);
    t3 = g->edx;
    wr32(t2 + 0x38u, esi);
    t4 = rd32(t3 + 0x18u) - 1u;
    t5 = rd32(t3 + 0x18u);
    wr32(t3 + 0x18u, t4);
    if ((int32_t)(t5 - 1u) < 0)
    {
        eax = t4;
        edx = t3;
        goto L_10074534;
    }
    edx = t3;
    goto L_1007446b;
L_100744ac: ;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    wr32(self + 0x14u, eax);
    if (eax == 0u)
    {
        edx = self;
        goto L_10074534;
    }
    edx = self;
L_100744c2: ;
    if ((rd32(rd32(edx + 0x14u) + 0x24u) & 0x7fu) != 1u) goto L_100744f8;
    eax = rd32(edx + 0x14u);
    ecx = rd32(rd32(edx + 0x14u) + 0x24u) & 0x7fu;
    if (rd32(eax + 0x38u) != esi) goto L_100744e9;
    if (rd32(eax + 0x3cu) == 0u)
    {
        wr32(edx + 0x14u, 0u);
    }
    else
    {
        eax = rd32(eax + 0x3cu);
        wr32(edx + 0x14u, rd32(eax));
    }
L_10074511: ;
    if ((rd32(rd32(edx + 0x14u) + 0x24u) & 0x7fu) == rd32(edx + 8u))
    {
        eax = rd32(edx + 0x14u);
        goto L_1007459e;
    }
    eax = rd32(edx + 0x14u);
    if (rd32(eax + 8u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 8u);
        eax = rd32(eax);
    }
    wr32(edx + 0x14u, eax);
    if (eax != 0u) goto L_100744c2;
L_10074534: ;
    wr32(edx + 0x14u, 0u);
    g->edx = edx;
    return eax;
L_100744e9: ;
    if (ecx == 1u)
    {
        wr32(eax + 0x38u, esi);
        t6 = rd32(edx + 0x18u) + 1u;
        wr32(edx + 0x18u, t6);
    }
L_100744f8: ;
    if ((rd8(rd32(edx + 0x14u) + 0x24u) & 0x7fu) != 0u) goto L_10074511;
    ecx = rd32(edx + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x10072270u), ecx, 0);
    t8 = g->edx;
    wr32(t7 + 0x38u, esi);
    t9 = rd32(t8 + 0x18u) - 1u;
    t10 = rd32(t8 + 0x18u);
    wr32(t8 + 0x18u, t9);
    if ((int32_t)(t10 - 1u) < 0)
    {
        eax = t9;
        edx = t8;
        goto L_10074534;
    }
    edx = t8;
    goto L_10074511;
L_1007453f: ;
    if (eax == 0u)
    {
        edx = self;
        goto L_1007459e;
    }
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(eax + 0x10u);
        goto L_1007458c;
    }
    eax = rd32(eax + 0x10u);
    esi = rd32(self + 0xcu);
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    wr32(self + 0x14u, eax);
    if (eax == 0u) goto L_10074581;
    ecx = rd32(self + 0x10u);
L_10074561: ;
    if ((rd32(rd32(self + 0x14u) + 0x20u) & ecx) == esi)
    {
        eax = rd32(self + 0x14u);
        edx = self;
        goto L_1007459e;
    }
    eax = rd32(self + 0x14u);
    if (rd32(eax + 0x10u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 0x10u);
        eax = rd32(eax);
    }
    wr32(self + 0x14u, eax);
    if (eax != 0u) goto L_10074561;
L_10074581: ;
    wr32(self + 0x14u, 0u);
    g->edx = self;
    return eax;
L_1007458c: ;
    if (eax == 0u) goto L_10074599;
    t11 = rd32(eax);
    wr32(self + 0x14u, t11);
    g->edx = self;
    return t11;
L_10074599: ;
    wr32(self + 0x14u, 0u);
    eax = 0u;
    edx = self;
L_1007459e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100743d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100743d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
