/* f_0x10260200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10260200(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x1cu, in_ebx);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 4u, arg4);
    if ((int32_t)rd32(self + 0x10cu) >= 0)
    {
        eax = rd32(self + 0x10cu);
        t2 = (int32_t)eax <= (int32_t)(rd32(self + 0xf4u) * 2u);
        wr32(sp0 - 0x18u, t2);
        ecx = t2;
        edx = rd32(self + 0xf4u) * 2u;
    }
    else
    {
        eax = rd32(self + 0x10cu);
        wr32(sp0 - 0x18u, 0u);
        ecx = arg4;
        edx = in_edx;
    }
    wr32(sp0 - 0x14u, 0x3e8u);
    if ((int32_t)eax < 0)
    {
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    else
    {
        if ((int32_t)arg2 < 0) goto L_1026028c;
        if (arg2 != 0u && (int32_t)arg2 >= 0) goto L_10260261;
        if (arg1 == 0u) goto L_1026028c;
L_10260261: ;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x2710u);
        wr32(sp0 - 0x30u, arg2);
        wr32(sp0 - 0x34u, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t3 = cow_stdcall(g, COW_IMG(0x10316840u), 4, arg1, arg2, 0x2710u, 0u);
        wr32(sp0 - 0x14u, 0x3e8u - t3);
        if ((int32_t)(0x3e8u - t3) >= 500)
        {
            loc_1c = in_ebx;
            loc_20 = in_esi;
            loc_24 = in_edi;
            loc_28 = 0u;
            loc_2c = 0x2710u;
        }
        else
        {
            wr32(sp0 - 0x14u, 0x1f4u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = 0u;
            loc_2c = 0x2710u;
        }
    }
L_102602e5: ;
    t7 = arg1 + (uint32_t)((int32_t)(rd32(self + 0xf4u) - (uint32_t)((int32_t)rd32(self + 0xf4u) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x10u, t7);
    t8 = arg2 + (uint32_t)((int32_t)(uint32_t)((int32_t)(rd32(self + 0xf4u) - (uint32_t)((int32_t)rd32(self + 0xf4u) >> 0x1fu)) >> 1u) >> 0x1fu) + (arg1 + (uint32_t)((int32_t)(rd32(self + 0xf4u) - (uint32_t)((int32_t)rd32(self + 0xf4u) >> 0x1fu)) >> 1u) < (uint32_t)((int32_t)(rd32(self + 0xf4u) - (uint32_t)((int32_t)rd32(self + 0xf4u) >> 0x1fu)) >> 1u));
    wr32(sp0 - 0xcu, t8);
    if (rd32(self + 0xacu) != 0u)
    {
        edx = t8;
    }
    else
    {
        t9 = rd32(self + 0x78u);
        wr32(sp0 + 0xcu, 0u);
        wr32(sp0 - 0x28u, sp0 + 0xcu);
        wr32(sp0 - 0x2cu, COW_IMG(0x1033e828u));
        t10 = rd32(t9 + 0x18u);
        wr32(sp0 - 0x30u, t10);
        g->eax = t10;
        g->edx = sp0 + 0xcu;
        g->esp = sp0 - 0x24u;
        t11 = cow_thiscall(g, rd32(rd32(t10)), rd32(t10), 3, t10, COW_IMG(0x1033e828u), sp0 + 0xcu);
        t12 = g->edx;
        if ((int32_t)t11 < 0)
        {
            edx = t12;
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = sp0 + 0xcu;
            loc_2c = COW_IMG(0x1033e828u);
        }
        else
        {
            edx = t12;
            t13 = rd32(sp0 + 0xcu);
            wr32(self + 0xacu, t13);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = sp0 + 0xcu;
            loc_2c = COW_IMG(0x1033e828u);
        }
    }
    if (rd32(self + 0xacu) == 0u) goto L_1026035f;
    eax = rd32(self + 0xacu);
    wr32(sp0 - 0x40u, self + 0xcu);
    wr32(sp0 - 0x44u, eax);
    t14 = rd32(eax);
    esi = sp0 - 0x18u;
    edi = sp0 - 0x3cu;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = t14;
    g->esp = sp0 - 0x24u;
    t15 = cow_thiscall(g, rd32(t14 + 0xcu), ecx, 8, eax, self + 0xcu, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), loc_2c, loc_28);
    t16 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = t16;
    return t15;
L_1026028c: ;
    if ((int32_t)rd32(self + 0x108u) <= 20000)
    {
        loc_1c = in_ebx;
        loc_20 = in_esi;
        loc_24 = in_edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    else
    {
        ecx = rd32(self + 0x108u);
        if ((int32_t)arg2 > -1)
        {
            loc_1c = in_ebx;
            loc_20 = in_esi;
            loc_24 = in_edi;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
        else
        {
            if ((int32_t)(arg2 + 1u) < 0 != (~arg2 & (arg2 ^ arg2 + 1u)) >> 0x1fu) goto L_102602a9;
            if (arg1 >= 0xffffb1e0u)
            {
                loc_1c = in_ebx;
                loc_20 = in_esi;
                loc_24 = in_edi;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                goto L_102602e5;
            }
L_102602a9: ;
            if ((int32_t)ecx >= (int32_t)eax) goto L_102602dd;
            if ((int32_t)(eax + 0x4e20u) <= (int32_t)ecx) goto L_102602dd;
            t4 = eax - ecx + 0x4e20u;
            t5 = cow_divs(g, eax, t4);
            t6 = cow_mods(g, eax, t4);
            wr32(sp0 - 0x14u, t5 * 0x3e8u);
            if ((int32_t)(t5 * 0x3e8u) <= 2000)
            {
                loc_1c = in_ebx;
                loc_20 = in_esi;
                loc_24 = in_edi;
                loc_28 = rd32(sp0 - 0x28u);
                loc_2c = rd32(sp0 - 0x2cu);
                goto L_102602e5;
            }
L_102602dd: ;
            wr32(sp0 - 0x14u, 0x7d0u);
            loc_1c = in_ebx;
            loc_20 = in_esi;
            loc_24 = in_edi;
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
        }
    }
    goto L_102602e5;
L_1026035f: ;
    g->ebx = loc_1c;
    g->esi = loc_20;
    g->edi = loc_24;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260200(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
