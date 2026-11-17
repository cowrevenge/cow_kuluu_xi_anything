/* f_0x10307c69 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10307c69(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (rd32(arg1 + 0x4cu) != 1u)
    {
        esi = rd32(arg1 + 0x1a4u);
        wr32(sp0 - 0x10u, 0u);
        wr8(esi + 0x1cu, 0u);
        loc_10 = 0u;
    }
    else
    {
        esi = rd32(arg1 + 0x1a4u);
        wr32(sp0 - 0x10u, 0x1feu);
        wr8(esi + 0x1cu, 1u);
        loc_10 = 0x1feu;
    }
    t1 = rd32(arg1 + 0x64u);
    wr32(sp0 - 0x30u, t1);
    wr32(sp0 - 0x34u, loc_10 + 0x100u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, arg1);
    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t2 = rd32(arg1 + 4u);
    g->esp = sp0 - 0x2cu;
    t3 = cow_thiscall(g, rd32(t2 + 8u), loc_10 + 0x100u, 4, arg1, 1u, loc_10 + 0x100u, t1);
    t4 = g->edx;
    wr32(esi + 0x18u, t3);
    wr32(sp0 - 0x1cu, 0u);
    if ((int32_t)rd32(arg1 + 0x64u) <= 0)
    {
        edx = t4;
        loc_1c = 0u;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
    }
    else
    {
        eax = rd32(esi + 0x14u);
        wr32(sp0 - 0x14u, esi + 0x20u);
        ebx = 0u;
        loc_1c = 0u;
        loc_14 = esi + 0x20u;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
L_10307cce: ;
        t5 = cow_divs(g, eax, rd32(loc_14));
        t6 = cow_mods(g, eax, rd32(loc_14));
        wr32(sp0 - 0x18u, t5);
        if (rd32(sp0 - 0x10u) == 0u)
        {
            ecx = rd32(loc_14);
            loc_18 = t5;
        }
        else
        {
            ecx = rd32(loc_14);
            loc_18 = t5;
            wr32(ebx * 4u + rd32(esi + 0x18u), rd32(ebx * 4u + rd32(esi + 0x18u)) + 0xffu);
        }
        t7 = cow_divs(g, ecx + 0xfeu, ecx * 2u - 2u);
        t8 = cow_mods(g, ecx + 0xfeu, ecx * 2u - 2u);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, 0u);
        eax = t7;
        edx = t7;
        edi = rd32(ebx * 4u + rd32(esi + 0x18u));
        loc_c = 0u;
        loc_8 = 0u;
L_10307d08: ;
        if ((int32_t)loc_8 <= (int32_t)edx)
        {
            cf = loc_8 < edx;
            of = ((loc_8 ^ edx) & (loc_8 ^ loc_8 - edx)) >> 0x1fu;
        }
        else
        {
            eax = loc_c * 0x1feu;
            ebx = ecx * 2u - 2u;
L_10307d1f: ;
            wr32(sp0 - 0x20u, eax + 0x1feu);
            t9 = cow_divs(g, eax + ecx + 0x2fcu, ebx);
            t10 = cow_mods(g, eax + ecx + 0x2fcu, ebx);
            wr32(sp0 - 0xcu, loc_c + 1u);
            if ((int32_t)loc_8 > (int32_t)t9)
            {
                loc_c = loc_c + 1u;
                loc_20 = eax + 0x1feu;
                goto L_10307d1c;
            }
            eax = t9;
            edx = t9;
            cf = loc_8 < t9;
            of = ((loc_8 ^ t9) & (loc_8 ^ loc_8 - t9)) >> 0x1fu;
            loc_c = loc_c + 1u;
        }
        eax = (eax & 0xffffff00u) | (uint8_t)loc_c;
        { /* imul byte ptr [ebp - 0x14] */ uint32_t A = sp0 - 0x18u; { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)rd8(A); eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
        wr32(sp0 - 8u, loc_8 + 1u);
        wr8(edi + loc_8, (uint8_t)eax);
        if ((int32_t)(loc_8 + 1u) <= 255)
        {
            loc_8 = loc_8 + 1u;
            goto L_10307d08;
        }
        ebx = loc_8;
        loc_8 = loc_8 + 1u;
        if (rd32(sp0 - 0x10u) != 0u)
        {
            eax = edi + 0xffu;
            ecx = edi - 1u;
            edx = 1u;
L_10307d65: ;
            t11 = rd8(edi);
            wr8(ecx, (uint8_t)t11);
            t12 = rd8(eax);
            wr8(eax + edx, (uint8_t)t12);
            if ((int32_t)(edx + 1u) <= 255)
            {
                ecx = ecx - 1u;
                edx = edx + 1u;
                ebx = ((ebx | t11) & 0xffffff00u) | t12;
                goto L_10307d65;
            }
            edx = edx + 1u;
        }
        wr32(sp0 - 0x14u, loc_14 + 4u);
        wr32(sp0 - 0x1cu, loc_1c + 1u);
        if ((int32_t)(loc_1c + 1u) < (int32_t)rd32(arg1 + 0x64u))
        {
            ebx = loc_1c + 1u;
            loc_1c = loc_1c + 1u;
            loc_14 = loc_14 + 4u;
            goto L_10307ccb;
        }
        loc_1c = loc_1c + 1u;
        loc_14 = loc_14 + 4u;
    }
    g->ebx = loc_14;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_10307ccb: ;
    eax = loc_18;
    goto L_10307cce;
L_10307d1c: ;
    eax = loc_20;
    goto L_10307d1f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307c69(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10307c69(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
