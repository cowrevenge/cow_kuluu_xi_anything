/* f_0x101bc520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101bc520(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_204;
    uint32_t loc_208;
    uint32_t loc_20c;
    uint32_t loc_210;
    uint32_t loc_214;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 568u);

    wr32(sp0 - 0x218u, in_ebx);
    wr32(sp0 - 0x21cu, in_ebp);
    wr32(sp0 - 0x220u, in_esi);
    wr32(sp0 - 0x224u, in_edi);
    if ((int32_t)rd32(self + 0x224u) <= 0)
    {
        eax = rd32(self + 0x224u);
        ecx = self;
        edx = in_edx;
        ebp = 0u;
    }
    else
    {
        eax = rd32(self + 0x224u);
        edx = in_edx;
        ebp = 0u;
        esi = 0u;
        edi = self + 0x22cu;
L_101bc540: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        t1 = cow_thiscall(g, COW_IMG(0x101bae20u), edi, 0);
        t2 = g->edx;
        wr32(esi * 4u + sp0 - 0x100u, t1);
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x101bae30u), edi, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(esi * 4u + sp0 - 0x200u, t3);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(self + 0x224u))
        {
            eax = rd32(self + 0x224u);
            edx = t5;
            ebp = ebp + t3;
            esi = esi + 1u;
            edi = edi + 0x1f0u;
            goto L_101bc540;
        }
        eax = rd32(self + 0x224u);
        ecx = t4;
        edx = t5;
        ebp = ebp + t3;
    }
    if (rd8(self) != 0u)
    {
        if (rd32(self + 0x10u) != ebp)
        {
            t6 = rd32(self + 0xcu);
            wr32(sp0 - 0x228u, t6);
            g->ecx = ecx;
            g->edx = t6;
            g->esp = sp0 - 0x224u;
            cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t6);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(sp0 - 0x22cu, COW_IMG(0x1037c9e8u));
            wr32(sp0 - 0x230u, ebp * 4u);
            wr32(sp0 - 0x234u, self + 0xcu);
            cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xcu, ebp * 4u, COW_IMG(0x1037c9e8u), rd32(sp0 - 0x228u));
        }
    }
    else
    {
        wr32(sp0 - 0x228u, COW_IMG(0x1037c9e8u));
        wr32(sp0 - 0x22cu, ebp * 4u);
        wr32(sp0 - 0x230u, self + 0xcu);
        g->esp = sp0 - 0x220u;
        cow_cdecl(g, COW_IMG(0x101907a0u), 4, self + 0xcu, ebp * 4u, COW_IMG(0x1037c9e8u), in_edi);
    }
    t9 = rd32(self + 0xcu);
    wr32(self + 0x10u, ebp);
    if (t9 != 0u) goto L_101bc5cc;
    eax = t9;
    return eax & 0xffffff00u;
L_101bc5cc: ;
    wr32(sp0 - 0x210u, 0u);
    wr32(sp0 - 0x214u, 0u);
    if ((int32_t)rd32(self + 0x224u) <= 0)
    {
        edx = 0u;
        loc_210 = 0u;
        goto L_101bc648;
    }
    ecx = 0u;
    loc_210 = 0u;
    loc_214 = 0u;
L_101bc5e2: ;
    if ((int32_t)rd32(ecx * 4u + sp0 - 0x200u) > 0)
    {
        eax = rd32(ecx * 4u + sp0 - 0x200u);
        ebp = eax;
        edi = rd32(ecx * 4u + sp0 - 0x100u);
L_101bc5f3: ;
        g->eax = eax;
        g->edx = rd32(rd32(edi));
        t10 = rd32(rd32(edi));
        t11 = rd32(edi);
        g->esp = sp0 - 0x224u;
        t12 = cow_thiscall(g, rd32(t10 + 0x10u), t11, 0);
        t13 = g->edx;
        if (t12 == 0u)
        {
            eax = t12;
        }
        else
        {
            eax = t12;
            edx = t13;
            esi = t11;
            if (rd8(eax) != 0xfdu) goto L_101bc611;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x224u;
            t14 = cow_thiscall(g, COW_IMG(0x101bc9b0u), esi, 0);
            t15 = g->edx;
            if (t14 == 6u)
            {
                eax = t14;
                goto L_101bc62b;
            }
            eax = t14;
            edx = t15;
L_101bc611: ;
            g->eax = eax;
            g->esp = sp0 - 0x224u;
            t16 = cow_thiscall(g, COW_IMG(0x101bc9b0u), esi, 0);
            if (t16 == 0u)
            {
                eax = t16;
            }
            else
            {
                t17 = rd32(sp0 - 0x210u);
                wr32(rd32(self + 0xcu) + t17 * 4u, esi);
                wr32(sp0 - 0x210u, t17 + 1u);
                eax = t17 + 1u;
                loc_210 = t17 + 1u;
            }
        }
L_101bc62b: ;
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            edi = edi + 4u;
            goto L_101bc5f3;
        }
        ecx = rd32(sp0 - 0x214u);
    }
    wr32(sp0 - 0x214u, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(self + 0x224u))
    {
        loc_214 = ecx + 1u;
        ecx = ecx + 1u;
        goto L_101bc5e2;
    }
    edx = loc_210;
L_101bc648: ;
    wr32(self + 0x14u, edx);
    wr32(sp0 - 0x214u, 0u);
    if ((int32_t)(edx - 1u) <= 0)
    {
        eax = 0u;
    }
    else
    {
        eax = 0u;
        loc_214 = 0u;
L_101bc65e: ;
        wr32(sp0 - 0x208u, eax);
        wr32(sp0 - 0x20cu, eax + 1u);
        if ((int32_t)(eax + 1u) >= (int32_t)edx)
        {
            edi = eax + 1u;
        }
        else
        {
            edi = eax + 1u;
            loc_208 = eax;
            loc_20c = eax + 1u;
            wr32(sp0 - 0x204u, eax * 4u);
            ebp = eax * 4u;
            loc_204 = eax * 4u;
L_101bc678: ;
            t18 = rd32(edi * 4u + rd32(self + 0xcu));
            wr32(sp0 - 0x228u, t18);
            g->eax = t18;
            g->esp = sp0 - 0x224u;
            t19 = cow_thiscall(g, rd32(rd32(rd32(ebp + rd32(self + 0xcu)))), rd32(ebp + rd32(self + 0xcu)), 1, t18);
            if ((int32_t)t19 < 0)
            {
                esi = edi * 4u;
                wr32(sp0 - 0x208u, edi);
                ebp = esi;
                loc_208 = edi;
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x210u))
            {
                edi = edi + 1u;
                goto L_101bc678;
            }
            if (loc_208 != rd32(sp0 - 0x214u))
            {
                ecx = loc_208;
                t20 = rd32(ecx * 4u + rd32(self + 0xcu));
                t21 = rd32(rd32(self + 0xcu) + rd32(sp0 - 0x204u));
                wr32(rd32(self + 0xcu) + rd32(sp0 - 0x204u), t20);
                wr32(ecx * 4u + rd32(self + 0xcu), t21);
            }
            edi = rd32(sp0 - 0x20cu);
        }
        wr32(sp0 - 0x214u, edi);
        if ((int32_t)edi < (int32_t)(loc_210 - 1u))
        {
            edx = loc_210;
            loc_214 = edi;
            goto L_101bc65a;
        }
        eax = loc_210 - 1u;
    }
    return (eax & 0xffffff00u) | 1u;
L_101bc65a: ;
    eax = loc_214;
    goto L_101bc65e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bc520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bc520(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
