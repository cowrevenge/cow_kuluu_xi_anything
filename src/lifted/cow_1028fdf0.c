/* f_0x1028fdf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028fdf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x18u) + rd32(arg2 * 0x2cu + rd32(rd32(sp0 + 4u) + 0x48u) + 8u) * 0xcu);
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10291200u), 1, t1);
    t3 = rd32(rd32(t2 + 0x18u) + rd32(arg2 * 0x2cu + rd32(t2 + 0x48u) + 8u) * 0xcu + 4u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10283d80u), 1, t3);
    if ((int32_t)rd32(arg2 * 0x2cu + rd32(t2 + 0x48u) + 4u) <= 0)
    {
        edi = t2;
        goto L_1028febf;
    }
    eax = arg2 * 0x2cu + rd32(t2 + 0x48u);
    ebx = 0u;
    edi = t2;
L_1028fe4a: ;
    if (rd8(rd32(eax + 0x28u) + rd32(ebx * 4u + rd32(eax + 0x24u)) * 0x90u + 0x1cu) != 0u)
    {
        edx = rd32(eax + 0x24u);
        esi = rd32(eax + 0x28u) + rd32(ebx * 4u + rd32(eax + 0x24u)) * 0x90u;
        if (rd32(esi + 0x10u) != 0u)
        {
            t4 = rd32(esi + 0xcu);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102a2150u), 5, rd32(esi), t4, in_edi, in_esi, in_ebp);
            t5 = g->edx;
            edx = t5;
        }
        if (rd32(rd32(esi + 0x18u)) != 0xf0001u)
        {
            eax = rd32(esi + 0x18u);
            ecx = rd32(rd32(esi + 0x18u));
            goto L_1028fe8e;
        }
        eax = rd32(esi + 0x18u);
        ecx = rd32(rd32(esi + 0x18u));
        if ((rd8(eax + 0x84u) & 2u) != 0u) goto L_1028fe9f;
L_1028fe8e: ;
        if (ecx != 0xf0002u) goto L_1028feb0;
        if ((rd8(eax + 0x164u) & 4u) == 0u) goto L_1028feb0;
L_1028fe9f: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t6 = cow_cdecl(g, COW_IMG(0x1028f700u), 2, edi, esi);
        t7 = g->ecx;
        t8 = g->edx;
        cow_cdecl(g, COW_IMG(0x1028f4e0u), 4, edi, esi, edi, esi);
    }
L_1028feb0: ;
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg2 * 0x2cu + rd32(edi + 0x48u) + 4u))
    {
        eax = arg2 * 0x2cu + rd32(edi + 0x48u);
        ebx = ebx + 1u;
        goto L_1028fe4a;
    }
L_1028febf: ;
    t9 = rd32(edi + 0x48u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)rd32(arg2 * 0x2cu + t9 + 4u) <= 0)
    {
        edx = rd32(arg2 * 0x2cu + t9 + 4u);
        loc_4 = 0u;
        goto L_1028ff7a;
    }
    eax = arg2 * 0x2cu + t9;
    ecx = 0u;
    loc_4 = 0u;
L_1028fed5: ;
    if (rd8(rd32(eax + 0x28u) + rd32(ecx * 4u + rd32(eax + 0x24u)) * 0x90u + 0x1cu) != 0u)
    {
        edx = rd32(eax + 0x24u);
        esi = rd32(eax + 0x28u) + rd32(ecx * 4u + rd32(eax + 0x24u)) * 0x90u;
        if (rd32(rd32(esi + 0x18u)) != 0xf0001u)
        {
            eax = rd32(esi + 0x18u);
            ecx = rd32(rd32(esi + 0x18u));
            if (ecx == 0xf0002u)
            {
                t11 = rd32(eax + 0x164u);
                wr32(eax + 0x164u, t11 & 0xfffffffbu);
                ecx = t11 & 0xfffffffbu;
                loc_4 = t11;
            }
            ebx = loc_4;
        }
        else
        {
            eax = rd32(esi + 0x18u);
            t10 = rd32(eax + 0x84u);
            wr32(eax + 0x84u, t10 & 0xfffffffdu);
            ecx = t10 & 0xfffffffdu;
            ebx = t10;
            loc_4 = t10;
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t12 = cow_cdecl(g, COW_IMG(0x1028f700u), 2, edi, esi);
        t13 = g->ecx;
        t14 = g->edx;
        cow_cdecl(g, COW_IMG(0x1028f4e0u), 4, edi, esi, edi, esi);
        if (rd32(rd32(esi + 0x18u)) != 0xf0001u)
        {
            eax = rd32(rd32(esi + 0x18u));
            esi = rd32(esi + 0x18u);
            if (eax == 0xf0002u)
            {
                wr32(esi + 0x164u, ebx);
            }
        }
        else
        {
            esi = rd32(esi + 0x18u);
            wr32(esi + 0x84u, ebx);
        }
    }
    t15 = rd32(sp0 + 4u) + 1u;
    t16 = rd32(edi + 0x48u);
    wr32(sp0 + 4u, t15);
    if ((int32_t)t15 < (int32_t)rd32(arg2 * 0x2cu + t16 + 4u))
    {
        eax = arg2 * 0x2cu + t16;
        ecx = t15;
        goto L_1028fed5;
    }
    edx = t16;
L_1028ff7a: ;
    if (rd32(arg2 * 0x2cu + rd32(edi + 0x48u) + 0xcu) != 0u)
    {
        eax = rd32(edi + 0x48u);
        ecx = rd32(arg2 * 0x2cu + rd32(edi + 0x48u) + 0xcu);
        g->ebp = arg2 * 0x2cu;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x1028ffa0u), g->eax, g->ecx, edx, 1, 1, edi);
    }
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028fdf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028fdf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
