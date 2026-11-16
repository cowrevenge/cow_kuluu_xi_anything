/* f_0x10036230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10036230(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x1046390cu)) != 0u)
    {
        esi = rd32(COW_IMG(0x104638f8u));
        goto L_10036251;
    }
    eax = rd32(COW_IMG(0x1046390cu));
    esi = rd32(COW_IMG(0x104638f8u));
    if (esi != 0u) goto L_10036251;
    if (rd8(COW_IMG(0x10463909u)) == 0u) goto L_10036357;
L_10036251: ;
    t1 = rd32(COW_IMG(0x1046393cu));
    wr8(COW_IMG(0x10463908u), 1u);
    wr32(COW_IMG(0x10463904u), 0u);
    wr32(COW_IMG(0x104638fcu), 0u);
    eax = 0u;
    ecx = t1;
L_1003626f: ;
    if (esi == 0u) goto L_100362b8;
    if ((int32_t)rd32(esi + 0x1e0u) > 0)
    {
        edx = rd32(esi + 0x1e0u);
        if (ecx != 0u)
        {
            g->esp = sp0 - 4u;
            t2 = cow_call_regs(g, COW_IMG(0x10246180u), eax, g->ecx, g->edx, 0, 3, 0u, edx, 0xffffffffu);
            if (t2 == 0u)
            {
                eax = rd32(COW_IMG(0x104638fcu));
            }
            else
            {
                eax = rd32(COW_IMG(0x104638fcu));
                t3 = rd32(esi + 0x1e0u);
                wr32(COW_IMG(0x10462590u) + eax * 4u, t3);
                wr32(COW_IMG(0x104638fcu), eax + 1u);
                eax = eax + 1u;
            }
            ecx = rd32(COW_IMG(0x1046393cu));
        }
    }
    if ((int32_t)eax < 64)
    {
        esi = rd32(esi + 0x194u);
        goto L_1003626f;
    }
L_100362b8: ;
    t4 = rd32(COW_IMG(0x104638f8u));
    wr32(COW_IMG(0x10463900u), eax);
    if ((int32_t)eax >= 64)
    {
        edx = t4;
        edi = t4;
        goto L_10036302;
    }
    edx = t4;
    esi = eax;
    edi = t4;
L_100362ce: ;
    if (edx == 0u) goto L_10036302;
    if (ecx != 0u)
    {
        if (rd32(edx + 0x104u) == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = rd32(edx + 0x104u);
            eax = rd32(eax);
        }
        t5 = rd32(eax + 0x38u);
        wr32(COW_IMG(0x10462590u) + esi * 4u, t5);
        wr32(COW_IMG(0x10463900u), esi + 1u);
        eax = t5;
        esi = esi + 1u;
    }
    if ((int32_t)esi < 64)
    {
        edx = rd32(edx + 0x194u);
        goto L_100362ce;
    }
    edx = rd32(edx + 0x194u);
L_10036302: ;
    if (edi == 0u) goto L_10036319;
    ecx = edi;
L_10036308: ;
    t6 = rd32(ecx + 0x194u);
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x100364a0u), eax, ecx, edx, 1, 0);
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t7;
        ecx = t6;
        edx = t8;
        goto L_10036308;
    }
    edx = t8;
L_10036319: ;
    if (rd32(COW_IMG(0x1046390cu)) != 0u)
    {
        esi = COW_IMG(0x10462538u);
        edi = 0u;
L_10036329: ;
        if (rd32(esi) != 0u)
        {
            eax = rd32(esi);
            if (rd32(eax) != 0u)
            {
                g->edx = edx;
                g->esp = sp0;
                cow_cdecl(g, COW_IMG(0x10036360u), 3, eax, in_edi, in_esi);
                t9 = g->edx;
                edx = t9;
            }
        }
        if (edi + 1u < rd32(COW_IMG(0x1046390cu)))
        {
            esi = esi + 4u;
            edi = edi + 1u;
            goto L_10036329;
        }
    }
    wr32(COW_IMG(0x1046390cu), 0u);
L_10036357: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10036230(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
