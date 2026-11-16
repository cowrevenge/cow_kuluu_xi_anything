/* f_0x10082d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10082d70(Guest* g)
{
    double d13;
    double d4;
    double d5;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    wr32(COW_IMG(0x1048a350u), 0u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0x3cu);
    t2 = g->edx;
    t3 = rd32(COW_IMG(0x1047d578u));
    wr32(COW_IMG(0x1048a354u), t1);
    wr32(COW_IMG(0x1048a324u), 0u);
    if (t3 != 0u)
    {
        eax = t1;
        edx = t2;
        esi = t3;
L_10082da4: ;
        if (rd32(esi + 0x54u) == 0u)
        {
            ebp = esi + 0x54u;
            goto L_10082e65;
        }
        ebp = esi + 0x54u;
        edi = rd32(esi + 0x54u);
        d4 = (double)rdf32(edi + 0x8cu);
        d5 = (double)rdf32(esi + 0x8cu);
        if (!(d4 < d5))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
            goto L_10082e3a;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, d5, 0u);
        if (rd16(edi + 0xb2u) == 0u)
        {
            d6 = (double)rdf32(edi + 0x8cu);
            if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
            {
                eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
                t7 = rd8(edi + 0xb2u);
                wr8(edi + 0xb0u, 1u);
                wr8(edi + 0xb2u, (uint8_t)(t7 | 1u));
            }
            else
            {
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(rd32(edi) + 0x288u), edi, 0);
            }
        }
        if (rd32(esi + 0x58u) == 0u)
        {
            wr32(COW_IMG(0x1047d578u), edi);
        }
        else
        {
            eax = rd32(esi + 0x58u);
            wr32(eax + 0x54u, edi);
        }
        if (rd32(edi + 0x54u) == 0u)
        {
            eax = rd32(edi + 0x54u);
            ebp = edi + 0x54u;
        }
        else
        {
            eax = rd32(edi + 0x54u);
            ebp = edi + 0x54u;
            wr32(eax + 0x58u, esi);
        }
        t8 = rd32(esi + 0x58u);
        wr32(esi + 0x54u, rd32(ebp));
        wr32(edi + 0x58u, t8);
        wr32(esi + 0x58u, edi);
        wr32(ebp, esi);
        edx = t8;
L_10082ea5: ;
        if (rd32(ebp) != 0u)
        {
            esi = rd32(ebp);
            goto L_10082da4;
        }
    }
    return;
L_10082e3a: ;
    if (rd16(esi + 0xb2u) != 0u) goto L_10082ea5;
    d9 = (double)rdf32(esi + 0x8cu);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_10082e90;
    }
    g->eax = rd32(esi);
    g->edx = edx;
    t10 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, rd32(t10 + 0x288u), esi, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_10082ea5;
L_10082e65: ;
    if (rd16(esi + 0xb2u) != 0u) goto L_10082ea5;
    d13 = (double)rdf32(esi + 0x8cu);
    if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_10082e90;
    }
    eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    g->eax = eax;
    g->edx = rd32(esi);
    t14 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, rd32(t14 + 0x288u), esi, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    goto L_10082ea5;
L_10082e90: ;
    t17 = rd8(esi + 0xb2u);
    wr8(esi + 0xb0u, 1u);
    wr8(esi + 0xb2u, (uint8_t)(t17 | 1u));
    eax = ((eax | t17) & 0xffffff00u) | (uint8_t)(t17 | 1u);
    goto L_10082ea5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10082d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10082d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
