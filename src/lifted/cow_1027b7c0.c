/* f_0x1027b7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027b7c0(Guest* g)
{
    double d48;
    double d52;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_80;
    uint32_t loc_84;
    uint32_t loc_88;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 228u);

    wr32(sp0 - 0x90u, in_ebx);
    if (arg1 != 0u) goto L_1027b7fd;
    wr32(sp0 - 0x94u, 0xd4u);
    wr32(sp0 - 0x98u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x9cu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xa0u, COW_IMG(0x103b424cu));
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b424cu), COW_IMG(0x103b379cu));
    return 0u;
L_1027b7fd: ;
    if (arg2 == 4u) goto L_1027b832;
    wr32(sp0 - 0x94u, 0xdau);
    wr32(sp0 - 0x98u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x9cu, COW_IMG(0x103b379cu));
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xa0u, COW_IMG(0x103b4228u));
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4228u), COW_IMG(0x103b379cu));
    return 0u;
L_1027b832: ;
    wr32(sp0 - 0x94u, arg1);
    wr32(sp0 - 0x98u, 0x50u);
    wr32(sp0 - 0x9cu, 1u);
    wr32(sp0 - 0xa0u, sp0 - 0x50u);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, arg1, in_ebx, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u));
    t7 = g->edx;
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, 1u);
    wr32(sp0 - 0xacu, 4u);
    wr32(sp0 - 0xb0u, sp0 - 0x8cu);
    g->ecx = sp0 - 0x8cu;
    g->edx = t7;
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x8cu, 4u, 1u, arg1, sp0 - 0x50u, 1u, 0x50u, arg1, in_ebx, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t8 = g->ecx;
    t9 = g->edx;
    if ((int32_t)rd32(sp0 - 0x8cu) >= 0)
    {
        ecx = t8;
        edx = t9;
        goto L_1027b88b;
    }
    eax = rd32(sp0 - 0x8cu);
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x94u, 0xe2u);
    wr32(sp0 - 0x98u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x9cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x94u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t11 = g->ecx;
    t12 = rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, t12);
    wr32(sp0 - 0xa4u, COW_IMG(0x103b41fcu));
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41fcu), t12);
    g->ebx = rd32(sp0 - 0x90u);
    return 0u;
L_1027b88b: ;
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t13 = cow_stdcall(g, COW_IMG(0x1027b5a0u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, t16);
    wr32(sp0 - 0xa4u, t13);
    g->edx = t15;
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x1027c4e0u), 7, t13, t16, in_edi, in_esi, in_ebp, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
    t17 = g->edx;
    wr32(sp0 - 0xa8u, 0xf0u);
    wr32(sp0 - 0xacu, COW_IMG(0x103b40ecu));
    t18 = (rd32(sp0 - 0x8cu) << 4u) * 4u;
    wr32(sp0 - 0xb0u, t18);
    wr32(sp0 - 0xb4u, 1u);
    g->ecx = t18;
    g->edx = t17;
    t19 = rd32(sp0 - 0x8cu);
    g->esp = sp0 - 0x90u;
    t20 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t18, COW_IMG(0x103b40ecu), 0xf0u, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), in_edi, in_esi, in_ebp);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0xb8u, arg1);
    wr32(sp0 - 0xbcu, t19 << 4u);
    wr32(sp0 - 0xc0u, 4u);
    wr32(sp0 - 0xc4u, t20);
    wr32(sp0 - 0x7cu, t20);
    g->edx = t22;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t20, 4u, t19 << 4u, arg1, 1u, rd32(sp0 - 0xb0u), COW_IMG(0x103b40ecu), 0xf0u, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), in_edi);
    t23 = g->edx;
    wr32(sp0 - 0x80u, 0u);
    if ((int32_t)rd32(sp0 - 0x8cu) <= 0)
    {
        ecx = rd32(sp0 - 0x8cu);
        edx = t23;
        ebp = t13;
        esi = t20;
    }
    else
    {
        ebp = t13;
        esi = t20;
        wr32(sp0 - 0x84u, 0u);
        wr32(sp0 - 0x88u, 0u);
        loc_80 = 0u;
        loc_84 = 0u;
        loc_88 = 0u;
L_1027b8ed: ;
        t24 = rd32(esi + 8u);
        wr32(sp0 - 0xa0u, t24);
        t25 = rd32(esi + 4u);
        wr32(sp0 - 0xa4u, t25);
        wr32(sp0 - 0xa8u, rd32(esi));
        wr32(sp0 - 0xacu, sp0 - 0x6cu);
        g->ecx = rd32(esi);
        g->edx = sp0 - 0x6cu;
        t26 = rd32(esi);
        t27 = rd32(ebp + 0x20u);
        t28 = rd32(ebp + 0x24u);
        g->esp = sp0 - 0x9cu;
        cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x6cu, t26, t25, t24);
        t29 = g->ecx;
        t30 = g->edx;
        wr32(sp0 - 0xb0u, sp0 - 0x6cu);
        wr32(sp0 - 0xb4u, loc_84 + t28);
        g->esp = sp0 - 0xb0u;
        cow_cdecl(g, COW_IMG(0x102915d0u), 1, loc_84 + t28);
        t31 = rd32(esi + 0x18u);
        wr32(sp0 - 0xb8u, t31);
        t32 = rd32(esi + 0x14u);
        wr32(sp0 - 0xbcu, t32);
        t33 = rd32(esi + 0x10u);
        wr32(sp0 - 0xc0u, t33);
        t34 = rd32(esi + 0xcu);
        wr32(sp0 - 0xc4u, t34);
        wr32(sp0 - 0xc8u, sp0 - 0x60u);
        g->ecx = t34;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x1027a740u), 5, sp0 - 0x60u, t34, t33, t32, t31);
        t35 = g->ecx;
        t36 = g->edx;
        wr32(sp0 - 0xccu, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, loc_84 + t28);
        g->esp = sp0 - 0xccu;
        cow_cdecl(g, COW_IMG(0x10291600u), 1, loc_84 + t28);
        t37 = rd32(esi + 0x24u);
        wr32(sp0 - 0xd4u, t37);
        t38 = rd32(esi + 0x20u);
        wr32(sp0 - 0xd8u, t38);
        t39 = rd32(esi + 0x1cu);
        wr32(sp0 - 0xdcu, t39);
        wr32(sp0 - 0xe0u, sp0 - 0x78u);
        g->eax = t39;
        g->ecx = sp0 - 0x78u;
        g->esp = sp0 - 0xd0u;
        t40 = cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x78u, t39, t38, t37);
        t41 = g->ecx;
        wr32(sp0 - 0xa0u, sp0 - 0x78u);
        wr32(sp0 - 0xa4u, loc_84 + t28);
        g->ecx = t41;
        g->edx = sp0 - 0x78u;
        g->esp = sp0 - 0xa0u;
        t42 = cow_cdecl(g, COW_IMG(0x10291610u), 1, loc_84 + t28);
        t43 = g->ecx;
        t44 = g->edx;
        wr32(sp0 - 0xa8u, esi + 0x28u);
        wr32(sp0 - 0xacu, loc_84 + t28);
        g->ecx = t43;
        g->edx = t44;
        g->esp = sp0 - 0xa4u;
        t45 = cow_cdecl(g, COW_IMG(0x102916f0u), 2, loc_84 + t28, esi + 0x28u);
        t46 = g->ecx;
        t47 = g->edx;
        d48 = (double)(float)(double)(int32_t)rd32(esi + 0x34u);
        wrf32(sp0 - 0xa0u, (float)d48);
        wr32(sp0 - 0xa4u, loc_84 + t28);
        g->ecx = t46;
        g->edx = t47;
        g->esp = sp0 - 0x9cu;
        t49 = cow_cdecl(g, COW_IMG(0x102917a0u), 2, loc_84 + t28, cow_f2bits(d48));
        t50 = g->ecx;
        t51 = g->edx;
        d52 = (double)(float)(double)(int32_t)rd32(esi + 0x38u);
        wrf32(sp0 - 0xa0u, (float)d52);
        wr32(sp0 - 0xa4u, loc_84 + t28);
        cow_cdecl(g, COW_IMG(0x102917b0u), 2, loc_84 + t28, cow_f2bits(d52));
        if ((int32_t)rd32(sp0 - 0x88u) <= 0)
        {
            esi = esi + 0x3cu;
        }
        else
        {
            ebx = loc_88 + t27;
            esi = esi + 0x3cu;
            wr32(sp0 - 0xa0u, ebx);
            t53 = rd32(esi) * 0xf8u + rd32(ebp + 0x20u);
            wr32(sp0 - 0xa4u, t53);
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10291f30u), 2, t53, ebx);
        }
        t54 = rd32(sp0 - 0x80u) + 1u;
        wr32(sp0 - 0x80u, t54);
        t55 = rd32(sp0 - 0x88u) + 0xf8u;
        wr32(sp0 - 0x88u, t55);
        t56 = rd32(sp0 - 0x84u) + 0x9cu;
        wr32(sp0 - 0x84u, t56);
        if ((int32_t)(rd32(sp0 - 0x80u) + 1u) < (int32_t)rd32(sp0 - 0x8cu))
        {
            esi = esi + 4u;
            loc_80 = t54;
            loc_84 = t56;
            loc_88 = t55;
            goto L_1027b8ed;
        }
        ecx = rd32(sp0 - 0x8cu);
        edx = t56;
        esi = rd32(sp0 - 0x7cu);
    }
    wr32(sp0 - 0xa0u, 0x11bu);
    wr32(sp0 - 0xa4u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0xa8u, esi);
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b40ecu), 0x11bu);
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027b7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027b7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
