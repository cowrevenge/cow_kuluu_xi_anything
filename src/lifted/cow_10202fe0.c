/* f_0x10202fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10202fe0(Guest* g)
{
    double d14;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(COW_IMG(0x106643e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643e8u));
        ecx = rd32(COW_IMG(0x106643fcu));
        goto L_10203004;
    }
    eax = rd32(COW_IMG(0x106643e8u));
    ecx = rd32(COW_IMG(0x106643fcu));
    if (ecx == 0u)
    {
        loc_14 = rd32(sp0 - 0x14u) & 0xffffffu;
        goto L_10203009;
    }
    loc_14 = rd32(sp0 - 0x14u) & 0xffffffu;
L_10203004: ;
    loc_14 = (loc_14 & 0xffffffu) | 0x1000000u;
L_10203009: ;
    if (eax == 0u) goto L_10203013;
    if (ecx != 0u)
    {
        ebp = eax;
        goto L_10203019;
    }
L_10203013: ;
    ebp = rd32(COW_IMG(0x106643e4u));
L_10203019: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        t3 = rd32(eax + 0x74u);
        wr32(sp0 - 8u, t3);
        esi = rd32(eax + 0x78u);
    }
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if ((int32_t)rd32(COW_IMG(0x106643e0u)) >= 0)
    {
        ecx = rd32(COW_IMG(0x106643e0u));
        t7 = rd32(COW_IMG(0x10663af0u) + ecx * 0x7cu);
        wr32(sp0 - 4u, t7);
        t8 = rd16(COW_IMG(0x10663af4u) + ecx * 0x7cu);
        wr32(sp0 - 8u, t8);
        edi = COW_IMG(0x10663adeu) + ecx * 0x7cu;
        ecx = t7;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106643e0u));
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t4 = cow_stdcall(g, COW_IMG(0x101cc550u), 0);
        if (t4 == 0u)
        {
            ecx = rd32(sp0 - 4u);
            edi = 0u;
        }
        else
        {
            eax = t4;
            t5 = rd32(eax + 0x78u);
            wr32(sp0 - 4u, t5);
            t6 = rd32(eax + 0x74u);
            wr32(sp0 - 8u, t6);
            if (rd16(eax + 0x210u) == 0u)
            {
                ecx = t5;
                edi = eax + 0x7cu;
            }
            else
            {
                ecx = t5;
                edi = eax + 0x214u;
            }
        }
    }
    if (rd32(COW_IMG(0x106643e8u)) == 0u)
    {
        eax = ecx == esi;
        edx = rd32(COW_IMG(0x106643e8u));
        goto L_102030b1;
    }
    eax = ecx == esi;
    edx = rd32(COW_IMG(0x106643e8u));
    if (eax != 0u) goto L_102030cf;
L_102030b1: ;
    if (rd8(COW_IMG(0x103852b0u)) != 1u) goto L_102030e0;
    if (eax != 0u) goto L_102030cf;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, ecx);
    g->ebx = 0u;
    g->ecx = rd32(sp0 - 0x10u);
    g->edx = edx;
    t9 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x102031f0u), eax, g->ecx, g->edx, 0, 3, ecx, 1u, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t12;
        goto L_102030e0;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
L_102030cf: ;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    d14 = cow_take_float(g);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    fpush(g, d14);
    return t13 & 0xffffff00u;
L_102030e0: ;
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x106643f8u)));
    g->eax = rd32(COW_IMG(0x106643f8u));
    t15 = rd32(COW_IMG(0x106643f8u));
    t16 = rd32(COW_IMG(0x106643fcu));
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall_cdecl(g, ebp, sp0 - 8u, 2, sp0 - 8u, edi);
    if (t16 == 0u)
    {
        eax = t17;
        goto L_10203110;
    }
    eax = t17;
    t18 = rd32(sp0 - 0x20u);
    t19 = rd32(sp0 - 0x24u);
    wr32(COW_IMG(0x106643fcu), 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t18;
    g->edi = t19;
    g->ebp = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_10203110: ;
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x11u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10202fe0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
