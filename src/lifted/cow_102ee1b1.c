/* f_0x102ee1b1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ee1b1(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x14u) + 4u);
    t2 = rd32(rd32(rd32(sp0 + 4u) + 0x14u));
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x14u);
    t5 = rd32(rd32(rd32(sp0 + 4u) + 0x14u) + 4u);
    wr32(sp0 + 4u, t1);
    if (t5 != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = t2;
        esi = t3;
        edi = t4;
        loc_4 = in_ebp;
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_102ee1e1;
    }
    eax = t1;
    esi = t3;
    edi = t4;
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t6 = cow_thiscall(g, rd32(edi + 0xcu), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_102ee2d5;
    }
    ecx = rd32(sp0 - 0x28u);
    edx = t7;
    t8 = rd32(edi + 4u);
    t9 = rd32(edi);
    wr32(sp0 + 4u, t8);
    ebx = t9;
    loc_4 = rd32(sp0 - 4u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
L_102ee1e1: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    t10 = rd8(ebx) << 8u;
    wr32(sp0 - 8u, t10);
    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = ebx + 1u;
        loc_8 = t10;
        goto L_102ee207;
    }
    eax = t10;
    loc_8 = t10;
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        edx = t12;
        goto L_102ee2d5;
    }
    ecx = rd32(sp0 - 0x28u);
    edx = t12;
    t13 = rd32(edi + 4u);
    t14 = rd32(edi);
    wr32(sp0 + 4u, t13);
    ebx = t14;
    loc_4 = rd32(sp0 - 4u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_8 = rd32(sp0 - 8u);
L_102ee207: ;
    t15 = loc_8 + rd8(ebx);
    wr32(sp0 - 8u, t15);
    t16 = rd8(ebx);
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 8u, t15 - 2u);
    if ((int32_t)(t15 - 2u) < 12)
    {
        ebx = ebx + 1u;
        loc_8 = t15 - 2u;
        goto L_102ee2ef;
    }
    eax = t16;
    ebx = ebx + 1u;
    loc_8 = t15 - 2u;
    wr32(sp0 - 0xcu, 0u);
    loc_c = 0u;
L_102ee223: ;
    if (rd32(sp0 + 4u) != 0u) goto L_102ee23e;
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t17 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t18 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        edx = t18;
        goto L_102ee2d5;
    }
    edx = t18;
    t19 = rd32(edi + 4u);
    t20 = rd32(edi);
    wr32(sp0 + 4u, t19);
    eax = t19;
    ebx = t20;
    loc_4 = rd32(sp0 - 4u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_102ee23e: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 0xcu, loc_c + 1u);
    t21 = rd8(ebx);
    wr8(loc_c + sp0 - 0x18u, (uint8_t)t21);
    if ((int32_t)(loc_c + 1u) < 12)
    {
        eax = (eax & 0xffffff00u) | t21;
        ecx = loc_c;
        ebx = ebx + 1u;
        loc_c = loc_c + 1u;
        goto L_102ee223;
    }
    ebx = ebx + 1u;
    wr32(sp0 - 8u, loc_8 - 0xcu);
    if (rd8(sp0 - 0x18u) != 0x41u)
    {
        loc_8 = loc_8 - 0xcu;
        goto L_102ee2d9;
    }
    loc_8 = loc_8 - 0xcu;
    if (rd8(sp0 - 0x17u) != 0x64u) goto L_102ee2d9;
    if (rd8(sp0 - 0x16u) != 0x6fu) goto L_102ee2d9;
    if (rd8(sp0 - 0x15u) != 0x62u) goto L_102ee2d9;
    if (rd8(sp0 - 0x14u) != 0x65u) goto L_102ee2d9;
    t22 = rd8(sp0 - 0x12u) + rd8(sp0 - 0x13u) * 0x100u;
    t23 = rd32(esi);
    t24 = rd8(sp0 - 0x10u);
    wr32(t23 + 0x18u, t22);
    t25 = t24 + rd8(sp0 - 0x11u) * 0x100u;
    t26 = rd8(sp0 - 0xeu);
    wr32(t23 + 0x1cu, t25);
    t27 = t26 + rd8(sp0 - 0xfu) * 0x100u;
    wr32(t23 + 0x20u, t27);
    t28 = rd8(sp0 - 0xdu);
    wr32(t23 + 0x24u, t28);
    wr32(rd32(esi) + 0x14u, 0x4bu);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, esi);
    g->edx = t26;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(esi) + 4u), t28, 0);
    t29 = g->edx;
    t30 = rd8(sp0 - 0xdu);
    wr8(esi + 0x106u, 1u);
    wr8(esi + 0x107u, (uint8_t)t30);
    edx = t29;
L_102ee308: ;
    t33 = rd32(sp0 + 4u);
    t34 = rd32(sp0 - 8u);
    wr32(edi, ebx);
    wr32(edi + 4u, t33);
    if ((int32_t)t34 <= 0)
    {
        eax = t33;
    }
    else
    {
        t35 = rd32(sp0 - 8u);
        wr32(sp0 - 0x28u, t35);
        wr32(sp0 - 0x2cu, esi);
        g->eax = rd32(esi + 0x14u);
        g->edx = edx;
        t36 = rd32(esi + 0x14u);
        g->esp = sp0 - 0x2cu;
        t37 = cow_thiscall(g, rd32(t36 + 0x10u), 1u, 0);
        t38 = g->edx;
        eax = t37;
        edx = t38;
    }
    eax = (eax & 0xffffff00u) | 1u;
L_102ee326: ;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102ee2d5: ;
    eax = eax & 0xffffff00u;
    goto L_102ee326;
L_102ee2d9: ;
    wr32(rd32(esi) + 0x14u, 0x4du);
    t31 = rd32(esi);
    wr32(t31 + 0x18u, loc_8 + 0xcu);
    ecx = t31;
L_102ee300: ;
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, esi);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(esi) + 4u), ecx, 0);
    t32 = g->edx;
    edx = t32;
    goto L_102ee308;
L_102ee2ef: ;
    wr32(rd32(esi) + 0x14u, 0x4du);
    wr32(rd32(esi) + 0x18u, loc_8);
    ecx = loc_8;
    goto L_102ee300;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ee1b1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ee1b1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
