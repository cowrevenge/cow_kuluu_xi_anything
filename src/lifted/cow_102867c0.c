/* f_0x102867c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102867c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    if (arg2 != 0u) goto L_102867fc;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2788u));
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        goto L_102868f0;
    }
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, arg3);
    g->eax = arg3;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 2, arg3, 0u);
    t2 = g->edx;
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0xcu, COW_IMG(0x103b839cu));
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x109a2788u)));
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t2, 1, 3, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b839cu), t1);
    return (t3 & 0xffffff00u) | (uint8_t)(t3 | 0xffu);
L_102867fc: ;
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x109a2788u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x109a2788u));
        wr32(sp0 - 0x14u, arg2);
        wr32(sp0 - 0x18u, arg3);
        g->eax = arg2;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        t4 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, in_edx, 1, 3, arg3, arg2, in_edi);
        t5 = g->ecx;
        wr32(sp0 - 0x18u, t4);
        wr32(sp0 - 0x1cu, COW_IMG(0x103b8374u));
        wr32(sp0 - 0x20u, rd32(COW_IMG(0x109a2788u)));
        g->ecx = t5;
        t6 = rd32(COW_IMG(0x109a2788u));
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t6, 1, 5, t6, COW_IMG(0x103b8374u), t4, arg2, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    if ((int32_t)rd32(arg1 + 0x58u) <= 0)
    {
        loc_4 = in_ebx;
        loc_8 = in_ebp;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_102868cc;
    }
    edi = 0u;
    loc_4 = in_ebx;
    loc_8 = in_ebp;
    loc_c = in_esi;
    loc_10 = in_edi;
L_1028683e: ;
    if ((rd8(edi * 4u + rd32(arg1 + 0x54u)) & 0x20u) == 0u)
    {
        eax = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x14u, sp0 + 8u);
        wr32(sp0 - 0x18u, sp0 + 0xcu);
        wr32(sp0 - 0x1cu, edi);
        wr32(sp0 - 0x20u, arg1);
        g->eax = eax;
        g->ecx = sp0 + 8u;
        g->edx = sp0 + 0xcu;
        g->esp = sp0 - 0x10u;
        t9 = cow_cdecl(g, COW_IMG(0x10286900u), 4, arg1, edi, sp0 + 0xcu, sp0 + 8u);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0xffffffffu)
        {
            eax = t9;
            ecx = t10;
            edx = t11;
            wr32(sp0 - 0x14u, COW_IMG(0x103b8330u));
            g->ebx = arg1;
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b8330u), rd32(sp0 - 0x10u));
        }
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            eax = arg3;
            ecx = arg2;
            edx = rd32(COW_IMG(0x109a2788u));
        }
        else
        {
            edx = rd32(COW_IMG(0x109a2788u));
            wr32(sp0 - 0x14u, edi);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg3);
            wr32(sp0 - 0x20u, arg3);
            g->eax = arg3;
            g->ecx = arg2;
            g->esp = sp0 - 0x14u;
            t12 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg3, arg3, arg2);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x20u, t12);
            wr32(sp0 - 0x24u, COW_IMG(0x103b8308u));
            wr32(sp0 - 0x28u, rd32(COW_IMG(0x109a2788u)));
            g->ebx = arg1;
            g->eax = rd32(COW_IMG(0x109a2788u));
            g->ecx = t13;
            t15 = rd32(COW_IMG(0x109a2788u));
            t16 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t14, 1, 5, t15, COW_IMG(0x103b8308u), t12, arg3, arg2);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
        }
        wr32(sp0 - 0x14u, arg3);
        t19 = arg3 << 0x10u | (uint16_t)arg2;
        wr32(sp0 - 0x18u, t19);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        eax = rd32(arg1 + 0x54u);
        wr32(sp0 - 0x14u, arg3);
        wr32(sp0 - 0x18u, 0xefbeddbau);
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10285fb0u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(arg1 + 0x58u))
    {
        ecx = t20;
        edx = t21;
        edi = edi + 1u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_1028683e;
    }
    ecx = t20;
    edx = t21;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_102868cc: ;
    if ((int32_t)rd32(arg1 + 0x58u) >= (int32_t)rd32(arg1 + 0x5cu))
    {
        eax = rd32(arg1 + 0x5cu);
        goto L_102868ec;
    }
    eax = rd32(arg1 + 0x5cu);
    esi = rd32(arg1 + 0x58u);
L_102868d6: ;
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, 0xefbeddbau);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10285fb0u), 2, 0xefbeddbau, arg3);
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x5cu))
    {
        eax = rd32(arg1 + 0x5cu);
        ecx = t22;
        edx = t23;
        esi = esi + 1u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102868d6;
    }
    eax = rd32(arg1 + 0x5cu);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_102868ec: ;
    ebx = loc_4;
    ebp = loc_8;
    esi = loc_c;
    edi = loc_10;
L_102868f0: ;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102867c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102867c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
