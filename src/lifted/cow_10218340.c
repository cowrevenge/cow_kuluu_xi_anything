/* f_0x10218340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10218340(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0x18u, in_edi);
    if ((int32_t)rd32(rd32(sp0 + 8u)) < (int16_t)rd16(self + 0x52u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x52u);
        loc_8 = t1;
        goto L_10218528;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x52u);
    ecx = rd32(rd32(sp0 + 8u));
    edx = rd32(sp0 + 8u);
    loc_8 = t1;
    if ((int32_t)ecx > (int32_t)(eax + rd16(self + 0x5au))) goto L_10218528;
    t2 = rd32(edx + 4u);
    t3 = rd16(self + 0x54u);
    t4 = rd32(edx + 4u);
    wr32(sp0 + 8u, t2);
    if ((int32_t)t4 < (int16_t)t3)
    {
        eax = (uint32_t)(int16_t)t3;
        goto L_10218528;
    }
    eax = (uint32_t)(int16_t)t3;
    edx = t2;
    if ((int32_t)edx > (int32_t)(eax + rd16(self + 0x5cu))) goto L_10218528;
    t5 = (uint32_t)(int16_t)rd16(rd32(sp0 + 0xcu) + 2u);
    t6 = rd16(rd32(sp0 + 0xcu) + 2u);
    t7 = rd32(sp0 + 0xcu);
    t8 = rd16(self + 0x36u);
    t9 = rd16(self + 0x54u);
    wr32(sp0 + 0xcu, t5);
    if ((int32_t)t5 < (int32_t)(t8 + (uint32_t)(int16_t)t9))
    {
        eax = (eax & 0xffff0000u) | t6;
        goto L_10218528;
    }
    eax = (eax & 0xffff0000u) | t6;
    edx = t5;
    ebx = t7;
    edi = t8 + (uint32_t)(int16_t)t9;
    if ((int16_t)(eax + ((edx & 0xffff0000u) | rd16(ebx + 0xau))) >= (int16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu)))
    {
        eax = eax + ((edx & 0xffff0000u) | rd16(ebx + 0xau));
        goto L_10218528;
    }
    eax = eax + ((edx & 0xffff0000u) | rd16(ebx + 0xau));
    edx = (edx & 0xffff0000u) | rd16(ebx + 0xau);
    edi = (edi & 0xffff0000u) | (uint16_t)(rd16(self + 0x54u) + rd16(self + 0x5cu));
    if (rd16(sp0 + 4u) != 0u) goto L_10218528;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        goto L_10218528;
    }
    if (rd32(self + 0x344u) != 0u)
    {
        eax = rd32(self + 0x344u);
        goto L_10218528;
    }
    t10 = rd16(self + 0x4au);
    wr16(sp0 + 4u, (uint16_t)(t10 >> 0xcu));
    if ((uint16_t)(t10 >> 0xcu) != 0u)
    {
        edi = (edi & 0xffff0000u) | t10 >> 0xcu;
        goto L_102184d3;
    }
    edi = (edi & 0xffff0000u) | t10 >> 0xcu;
    if ((rd8(self + 0x4bu) & 0xfu) == 0u) goto L_102184d3;
    if ((int32_t)ecx < (int16_t)rd16(ebx))
    {
        edi = (uint32_t)(int16_t)rd16(ebx);
        goto L_10218445;
    }
    edi = (uint32_t)(int16_t)rd16(ebx);
    if ((int32_t)ecx > (int32_t)(edi + rd16(ebx + 8u)))
    {
        ebx = rd32(sp0 + 8u);
        goto L_10218449;
    }
    ebx = rd32(sp0 + 8u);
    if ((int32_t)ebx < (int32_t)rd32(sp0 + 0xcu))
    {
        edi = rd32(sp0 + 0xcu);
        goto L_10218449;
    }
    edi = rd32(sp0 + 0xcu);
    if ((int32_t)ebx <= (int32_t)(edi + (uint16_t)edx))
    {
        edx = edi + (uint16_t)edx;
        goto L_10218470;
    }
L_10218449: ;
    if ((int32_t)ecx < (int16_t)rd16(arg4))
    {
        edx = (uint32_t)(int16_t)rd16(arg4);
        goto L_102184ce;
    }
    edx = (uint32_t)(int16_t)rd16(arg4);
    if ((int32_t)ecx > (int32_t)(edx + rd16(arg4 + 8u)))
    {
        edi = edx + rd16(arg4 + 8u);
        goto L_102184ce;
    }
    edi = edx + rd16(arg4 + 8u);
    if ((int32_t)ebx < (int16_t)rd16(arg4 + 2u)) goto L_102184ce;
    ecx = (uint32_t)(int16_t)rd16(arg4 + 2u);
    if ((int32_t)ebx > (int32_t)(ecx + rd16(arg4 + 0xau)))
    {
        edx = ecx + rd16(arg4 + 0xau);
        goto L_102184ce;
    }
    edx = ecx + rd16(arg4 + 0xau);
L_10218470: ;
    t11 = rd16(self + 0x4au);
    wr8(self + 0x20u, 0u);
    if ((uint8_t)t11 != 0u)
    {
        eax = (arg4 & 0xffff0000u) | t11;
        edi = (edi & 0xffff0000u) | (uint16_t)arg5;
        goto L_1021848a;
    }
    eax = (arg4 & 0xffff0000u) | t11;
    edi = (edi & 0xffff0000u) | (uint16_t)arg5;
    if (rd16(self + 0x14u) == (uint16_t)edi) goto L_1021848f;
L_1021848a: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t12 = g->ecx;
    t13 = g->edx;
    ecx = t12;
    edx = t13;
L_1021848f: ;
    wr8(self + 0x4au, 0u);
    wr8(self + 0x4bu, rd8(self + 0x4bu) & 0xf0u);
    wr16(self + 0x14u, (uint16_t)edi);
    wr32(sp0 - 8u, 1u);
    if ((uint16_t)arg6 != 0u)
    {
        wr8(self + 0x20u, 1u);
        wr16(self + 0x1eu, (uint16_t)arg7);
    }
    g->eax = 1u;
    g->esp = sp0 - 0x18u;
    t14 = cow_stdcall(g, COW_IMG(0x10218540u), 0);
    return (t14 & 0xffff0000u) | 1u;
L_10218445: ;
    ebx = rd32(sp0 + 8u);
    goto L_10218449;
L_102184ce: ;
    edi = (edi & 0xffff0000u) | rd16(sp0 + 4u);
L_102184d3: ;
    if ((uint16_t)edi == 0u)
    {
        eax = arg4;
    }
    else
    {
        if (rd16(self + 0x14u) != (uint16_t)arg5)
        {
            eax = arg4;
        }
        else
        {
            wr8(self + 0x20u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            t15 = (uint32_t)(int16_t)rd16(arg4) + (rd16(arg4 + 8u) >> 1u);
            wr32(sp0 - 8u, t15);
            wr32(sp0 - 0x20u, sp0 - 8u);
            t16 = (uint32_t)(int16_t)rd16(arg4 + 2u) + (rd16(arg4 + 0xau) >> 1u);
            wr32(sp0 - 4u, t16);
            g->esp = sp0 - 0x18u;
            t17 = cow_call_regs(g, COW_IMG(0x10124700u), sp0 - 8u, rd32(COW_IMG(0x104e1d4cu)), g->edx, 0, 2, sp0 - 8u, 0u);
            wr8(self + 0x4bu, 0u);
            wr32(sp0 - 8u, 1u);
            eax = t17;
            loc_8 = 1u;
        }
    }
L_10218528: ;
    return (eax & 0xffff0000u) | (uint16_t)loc_8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10218340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10218340(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
