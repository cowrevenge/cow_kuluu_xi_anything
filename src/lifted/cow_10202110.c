/* f_0x10202110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10202110(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(COW_IMG(0x106643e4u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106643e4u));
        goto L_10202175;
    }
    eax = rd32(COW_IMG(0x106643e4u));
    if (rd32(COW_IMG(0x1057876cu)) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1020229f;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, in_edx, 1, 0);
    if (t1 == 0u)
    {
        eax = t1;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1020229f;
    }
    ecx = t1;
    if (rd32(COW_IMG(0x10663af0u) + rd32(COW_IMG(0x106643dcu)) * 0x7cu) != rd32(ecx + 4u))
    {
        eax = rd32(COW_IMG(0x106643dcu));
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_1020229f;
    }
    eax = rd32(COW_IMG(0x106643dcu));
    edx = rd32(COW_IMG(0x10663af0u) + rd32(COW_IMG(0x106643dcu)) * 0x7cu);
    eax = eax - arg1 * 6u;
    ecx = rd32(COW_IMG(0x106643e0u));
    edi = 0xffffffffu;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_102021f0: ;
    if ((int32_t)eax < 0) goto L_1020229f;
    if ((int32_t)eax >= 6) goto L_1020229f;
    if (rd32(COW_IMG(0x106643e4u)) != 0u) goto L_1020221c;
    if (rd32(COW_IMG(0x106643e8u)) != 0u) goto L_1020221c;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, rd32(rd32(self) + 0x48u), self, 2, eax, 0u);
    eax = t6;
L_10202226: ;
    wr32(sp0 - 0x20u, sp0 + 8u);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    g->eax = eax;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x1cu;
    t9 = cow_thiscall(g, COW_IMG(0x10118a80u), rd32(self + 8u), 2, sp0 - 0xcu, sp0 + 8u);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
    }
    else
    {
        edx = t10;
        wr32(sp0 - 0x20u, arg2);
        t11 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x24u, t11);
        g->eax = arg2;
        g->esp = sp0 - 0x1cu;
        t12 = cow_thiscall(g, COW_IMG(0x102022b0u), self, 2, t11, arg2);
        eax = t12;
    }
    if ((int32_t)edi >= 0)
    {
        if ((int32_t)edi < 6)
        {
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, edi + 1u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            t13 = rd32(self + 8u);
            wr16(sp0 - 8u, 0u);
            wr16(sp0 - 6u, 0u);
            wr16(sp0 - 4u, 0u);
            wr16(sp0 - 2u, 0u);
            g->ebx = self;
            g->edi = edi + 1u;
            g->edx = sp0 - 8u;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10118900u), t13, 4, sp0 - 8u, edi + 1u, 1u, 1u);
            t14 = g->edx;
            wr32(sp0 - 0x20u, 0xe0d04040u);
            t15 = rd32(sp0 - 6u);
            wr32(sp0 - 0x24u, t15);
            t16 = rd32(sp0 - 8u);
            wr32(sp0 - 0x28u, t16);
            g->eax = t15;
            t17 = cow_thiscall(g, COW_IMG(0x10202350u), self, 3, t16, t15, 0xe0d04040u);
            eax = t17;
        }
    }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return (eax & 0xffffff00u) | 1u;
L_10202175: ;
    if (rd32(COW_IMG(0x106643e8u)) == 0u) goto L_102021ac;
    if (rd32(COW_IMG(0x106643fcu)) == 0u) goto L_102021ac;
    ecx = rd32(COW_IMG(0x106643fcu));
    wr32(sp0 - 0x20u, ecx);
    g->ebx = self;
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_stdcall(g, COW_IMG(0x10203540u), 1, ecx);
    t3 = g->edx;
    eax = rd32(COW_IMG(0x106643e0u)) - arg1 * 6u;
    ecx = rd32(COW_IMG(0x106643e0u));
    edx = t3;
    edi = t2 - arg1 * 6u;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    goto L_102021f0;
L_102021ac: ;
    if ((int32_t)rd32(COW_IMG(0x106643e0u)) >= 0)
    {
        ecx = rd32(COW_IMG(0x106643e0u));
        goto L_102021e1;
    }
    ecx = rd32(COW_IMG(0x106643e0u));
    if ((int32_t)arg2 < 0) goto L_102021e1;
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    g->ebx = self;
    g->esp = sp0 - 0x1cu;
    t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 0u, 0u);
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, arg2);
    t5 = cow_thiscall(g, COW_IMG(0x102022b0u), self, 2, arg2, arg3);
    g->ebx = in_ebx;
    return (t5 & 0xffffff00u) | 1u;
L_102021e1: ;
    eax = ecx - arg1 * 6u;
    edx = arg1 * 6u;
    edi = 0xffffffffu;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    goto L_102021f0;
L_1020221c: ;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, ecx);
    g->eax = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t8 = cow_thiscall(g, rd32(t7 + 0x48u), self, 2, ecx, 1u);
    eax = t8;
    goto L_10202226;
L_1020229f: ;
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10202110(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
