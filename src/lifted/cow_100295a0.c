/* f_0x100295a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100295a0(Guest* g)
{
    double d21;
    double d27;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x40u, 0x80000000u);
    wr32(sp0 - 0x2cu, 0x80000000u);
    wr32(sp0 - 0x18u, 0x80000000u);
    wr32(sp0 - 4u, 0x80000000u);
    wr32(sp0 - 0x5cu, in_esi);
    t1 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x4cu, t1);
    wr32(sp0 - 0x38u, t1);
    t2 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x10u, t2);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x1cu, 0x3f800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 0x24u, t2);
    t3 = rd32(sp0 + 8u) - arg1;
    wr32(sp0 - 0x58u, t3);
    wr32(sp0 - 0x54u, 0u);
    wr32(sp0 - 0x60u, 2u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t4);
    t5 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
    t6 = rd32(COW_IMG(0x1045666cu));
    wrf32(sp0 + 0x14u, (float)(double)(int64_t)cow_i64(t3, 0u));
    wr32(sp0 + 0x10u, 0u);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(t5 + 0xfcu), t5, 4, t4, 0u, 1u, 2u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t7);
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 2u, 0u);
    wr32(sp0 - 0x60u, 2u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, 0u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t8);
    cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 0u, 4u, 2u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 5u);
    wr32(sp0 - 0x68u, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t9);
    cow_thiscall(g, rd32(rd32(t9) + 0xfcu), rd32(t9), 4, t9, 0u, 5u, 0u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 1u);
    wr32(sp0 - 0x68u, 1u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t10);
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 1u, 1u, 1u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 4u);
    wr32(sp0 - 0x68u, 1u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x6cu, t11);
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 1u, 4u, 1u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0x1bu);
    t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t12);
    cow_thiscall(g, rd32(rd32(t12) + 0xc8u), rd32(t12), 3, t12, 0x1bu, 1u);
    wr32(sp0 - 0x60u, 5u);
    wr32(sp0 - 0x64u, 0x13u);
    t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t13);
    cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x13u, 5u);
    wr32(sp0 - 0x60u, 6u);
    wr32(sp0 - 0x64u, 0x14u);
    t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x14u, 6u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0xeu);
    t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t15);
    cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 0xeu, 0u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 7u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t16);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t17 = rd32(t16);
    t18 = rd32(COW_IMG(0x1045666cu));
    cow_thiscall(g, rd32(t17 + 0xc8u), t17, 3, t16, 7u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    if (arg1 == 0u)
    {
        edx = t20;
        ebx = in_ebx;
        edi = in_edi;
        loc_5c = in_esi;
    }
    else
    {
        ecx = t19;
        wr32(sp0 - 0x60u, in_ebx);
        wr32(sp0 - 0x64u, in_edi);
        d21 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x14u));
        wrf32(sp0 + 8u, (float)d21);
        esi = arg1;
        loc_5c = in_esi;
        loc_60 = in_ebx;
        loc_64 = in_edi;
L_1002977e: ;
        wr32(sp0 - 0x68u, sp0 - 0x3cu);
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->esp = sp0 - 0x64u;
        t22 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x50u, sp0 - 0x3cu);
        wr32(sp0 - 0x70u, sp0 - 0x14u);
        wr32(sp0 - 0x74u, sp0 - 0x28u);
        g->edx = sp0 - 0x28u;
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0x28u, sp0 - 0x14u);
        t23 = g->edx;
        if (rd32(esi + 4u) != 1u)
        {
            eax = rd32(esi + 4u);
            edx = t23;
            wr32(sp0 - 0x40u, 0x40000080u);
            wr32(sp0 - 0x2cu, 0x40000080u);
            wr32(sp0 - 0x18u, 0x40000080u);
            wr32(sp0 - 4u, 0x40000080u);
        }
        else
        {
            eax = rd32(esi + 4u);
            edx = t23;
            wr32(sp0 - 0x40u, 0x40800000u);
            wr32(sp0 - 0x2cu, 0x40800000u);
            wr32(sp0 - 0x18u, 0x40800000u);
            wr32(sp0 - 4u, 0x40800000u);
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x64u;
        t24 = cow_thiscall(g, COW_IMG(0x10028b90u), esi, 0);
        t25 = g->edx;
        wr32(sp0 + 0x14u, t24);
        wr32(sp0 - 0x68u, 0x44u);
        t26 = rd32(COW_IMG(0x1045666cu));
        d27 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x14u) * (double)rdf32(sp0 + 8u)) * (double)rdf32(COW_IMG(0x1032a698u))) + (double)rdf32(sp0 + 0x10u));
        wrf32(sp0 + 0x10u, (float)d27);
        wrf32(sp0 - 0x14u, (float)(double)(float)d27);
        wrf32(sp0 - 0x3cu, (float)(double)(float)d27);
        t28 = rd32(t26 + 0xcu);
        wr32(sp0 - 0x6cu, t28);
        g->eax = t28;
        t29 = cow_thiscall(g, rd32(rd32(t28) + 0x130u), rd32(t28), 2, t28, 0x44u);
        wr32(sp0 - 0x68u, 0x14u);
        wr32(sp0 - 0x6cu, sp0 - 0x50u);
        wr32(sp0 - 0x70u, 2u);
        wr32(sp0 - 0x74u, 5u);
        g->ebx = 0x40800000u;
        g->edx = sp0 - 0x50u;
        t30 = rd32(COW_IMG(0x1045666cu));
        cow_thiscall(g, COW_IMG(0x1000cd00u), t30, 4, 5u, 2u, sp0 - 0x50u, 0x14u);
        t31 = g->ecx;
        t32 = g->edx;
        if (rd32(esi + 8u) != 0u)
        {
            ecx = t31;
            esi = rd32(esi + 8u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            goto L_1002977e;
        }
        edx = t32;
        ebx = rd32(sp0 - 0x60u);
        edi = rd32(sp0 - 0x64u);
        loc_5c = rd32(sp0 - 0x5cu);
    }
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, 0x1bu);
    t33 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t33);
    g->esp = sp0 - 0x5cu;
    cow_thiscall(g, rd32(rd32(t33) + 0xc8u), rd32(t33), 3, t33, 0x1bu, 0u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0xeu);
    t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t34);
    cow_thiscall(g, rd32(rd32(t34) + 0xc8u), rd32(t34), 3, t34, 0xeu, 1u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 7u);
    t35 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x68u, t35);
    cow_thiscall(g, rd32(rd32(t35) + 0xc8u), rd32(t35), 3, t35, 7u, 1u);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100295a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100295a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
