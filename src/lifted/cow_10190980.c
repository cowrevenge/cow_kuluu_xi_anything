/* f_0x10190980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10190980(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_20;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, COW_IMG(0x103798ccu));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    wr32(self + 0x2cu, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1015dc10u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798ccu));
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        edi = t1;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
    else
    {
        eax = t1;
        edx = t2;
        edi = t1;
        wr32(sp0 - 0x18u, COW_IMG(0x103798b8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x1015dc10u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798b8u));
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
            goto L_101909df;
        }
        eax = t3;
        edx = t4;
        wr32(sp0 - 0x18u, sp0 - 8u);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, eax, g->edx, 0, 1, sp0 - 8u);
        eax = (uint32_t)(int16_t)rd16(sp0 - 2u) + 2u;
L_10190a06: ;
        t7 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        wr32(self + 0x28u, t7);
        wr32(self + 0x2cu, eax);
        edx = t7;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
L_10190a11: ;
    if (rd32(self + 0x2cu) == 0u)
    {
        if (rd32(rd32(COW_IMG(0x1062193cu)) + 8u) == 0u) goto L_10190a58;
        ecx = rd32(rd32(COW_IMG(0x1062193cu)) + 8u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10118f70u), eax, ecx, g->edx, 0, 1, sp0 - 8u);
        t8 = g->edx;
        t9 = (uint32_t)(int16_t)rd16(sp0 - 8u);
        t10 = rd16(sp0 - 6u);
        wr32(self + 0x28u, t9);
        t11 = (uint32_t)(int16_t)rd16(sp0 - 2u) - 0x20u;
        t12 = rd16(sp0 - 2u);
        wr32(self + 0x2cu, t11);
        if ((int32_t)((uint32_t)(int16_t)t12 - 0x20u) <= (int16_t)t10)
        {
            edx = t8;
        }
        else
        {
            ecx = (uint32_t)(int16_t)t10;
            edx = t8;
            wr32(self + 0x2cu, ecx);
        }
        eax = rd32(self + 0x2cu) - 0x5au;
L_10190a78: ;
        wr32(self + 0x2cu, eax);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
L_10190a7b: ;
        if (rd32(self + 0x2cu) == 0u)
        {
            wr32(sp0 - 0x18u, 1u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, self + 0x28u);
            wr32(self + 0x28u, 0x20u);
            wr32(self + 0x2cu, 0xc8u);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, self + 0x28u, 0u, 1u);
            t15 = g->edx;
            edx = t15;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    if (rd32(self + 0x20u) != 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_10190ac7;
    }
    eax = rd32(self + 0x20u);
    if (rd32(self + 0x14u) != 0xau)
    {
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, COW_IMG(0x103798a4u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t16 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798a4u), 1u, 0u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, COW_IMG(0x10379894u));
    loc_20 = COW_IMG(0x10379894u);
L_10190af3: ;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, loc_20, 1u, 0u);
L_10190afd: ;
    if (arg1 != 0u) goto L_10190b11;
    wr32(self + 8u, 0u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return;
L_101909df: ;
    wr32(sp0 - 0x18u, COW_IMG(0x1036f868u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall(g, COW_IMG(0x1015dc10u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f868u));
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_10190a11;
    }
    eax = t5;
    edx = t6;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, eax, g->edx, 0, 1, sp0 - 8u);
    eax = (uint32_t)(int16_t)rd16(sp0 - 6u) - 0x5au;
    goto L_10190a06;
L_10190a58: ;
    if (edi == 0u) goto L_10190a7b;
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, edi, g->edx, 0, 1, sp0 - 8u);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    t14 = rd16(sp0 - 6u);
    wr32(self + 0x28u, t13);
    eax = (uint32_t)(int16_t)t14 - 0x7au;
    edx = t13;
    goto L_10190a78;
L_10190ac7: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    if (eax != 1u) goto L_10190aee;
    wr32(sp0 - 0x20u, COW_IMG(0x10379894u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10379894u), 1u, 0u);
    t19 = g->edx;
    if (rd32(self + 0x14u) == 0xau) goto L_10190afd;
    eax = t18;
    edx = t19;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, COW_IMG(0x103798a4u));
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_20 = COW_IMG(0x103798a4u);
    goto L_10190af3;
L_10190aee: ;
    wr32(sp0 - 0x20u, COW_IMG(0x10379880u));
    loc_20 = COW_IMG(0x10379880u);
    goto L_10190af3;
L_10190b11: ;
    if (arg1 == 2u) goto L_10190b33;
    if (arg1 == 3u) goto L_10190b33;
    if (arg1 != 1u) goto L_10190b3e;
    wr32(self + 8u, 3u);
    wr8(self + 0x1cu, (uint8_t)arg1);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return;
L_10190b33: ;
    wr32(self + 8u, 2u);
    wr8(self + 0x1cu, 1u);
L_10190b3e: ;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10190980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10190980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
