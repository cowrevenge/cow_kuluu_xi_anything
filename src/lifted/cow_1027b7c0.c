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
    double d50;
    double d54;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 228u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027b7d2u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x90u); goto E_1027b7d2;
    case 0x1027b7fdu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x90u); goto E_1027b7fd;
    case 0x1027b807u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x90u); goto E_1027b807;
    case 0x1027b832u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x90u); goto E_1027b832;
    case 0x1027b85bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1027b85b;
    case 0x1027b88bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1027b88b;
    case 0x1027b8e5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1027b8e5;
    case 0x1027b8edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1027b8ed;
    case 0x1027b9a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1027b9a9;
    case 0x1027b9c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1027b9c2;
    case 0x1027b9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1027b9f6;
    case 0x1027b9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_80 = rd32(sp0 - 0x80u); goto E_1027b9fa;
    default: break;
    }
#endif

    COW_AT(1027b7c0)
    wr32(sp0 - 0x90u, in_ebx);
    if (arg1 != 0u) goto L_1027b7fd;
    COW_AT(1027b7d2)
    wr32(sp0 - 0x94u, 0xd4u);
    wr32(sp0 - 0x98u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x9cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xa0u, COW_IMG(0x103b424cu));
    g->ebx = arg1;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b424cu), COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_1027b7fd: ;
    COW_AT(1027b7fd)
    if (arg2 == 4u) goto L_1027b832;
    COW_AT(1027b807)
    wr32(sp0 - 0x94u, 0xdau);
    wr32(sp0 - 0x98u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x9cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xa0u, COW_IMG(0x103b4228u));
    g->ebx = arg1;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4228u), COW_IMG(0x103b379cu));
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_1027b832: ;
    COW_AT(1027b832)
    wr32(sp0 - 0x94u, arg1);
    wr32(sp0 - 0x98u, 0x50u);
    wr32(sp0 - 0x9cu, 1u);
    wr32(sp0 - 0xa0u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t7 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x50u, 1u, 0x50u, arg1, in_ebx, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u));
    t8 = g->edx;
    wr32(sp0 - 0xa4u, arg1);
    wr32(sp0 - 0xa8u, 1u);
    wr32(sp0 - 0xacu, 4u);
    wr32(sp0 - 0xb0u, sp0 - 0x8cu);
    g->ecx = sp0 - 0x8cu;
    g->edx = t8;
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 - 0x8cu, 4u, 1u, arg1, sp0 - 0x50u, 1u, 0x50u, arg1, in_ebx, rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)rd32(sp0 - 0x8cu) >= 0)
    {
        eax = rd32(sp0 - 0x8cu);
        ecx = t9;
        edx = t10;
        goto L_1027b88b;
    }
    eax = rd32(sp0 - 0x8cu);
    ecx = t9;
    edx = t10;
    COW_AT(1027b85b)
    wr32(sp0 - 0x94u, 0xe2u);
    wr32(sp0 - 0x98u, COW_IMG(0x103b40ecu));
    wr32(sp0 - 0x9cu, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x94u;
    t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b40ecu));
    t12 = g->ecx;
    t13 = rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, t13);
    wr32(sp0 - 0xa4u, COW_IMG(0x103b41fcu));
    g->ebx = arg1;
    g->esp = sp0 - 0x9cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b41fcu), t13);
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_1027b88b: ;
    COW_AT(1027b88b)
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t14 = cow_stdcall(g, COW_IMG(0x1027b5a0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd32(sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, t17);
    wr32(sp0 - 0xa4u, t14);
    g->eax = t17;
    g->edx = t16;
    g->esp = sp0 - 0x88u;
    t18 = cow_cdecl(g, COW_IMG(0x1027c4e0u), 7, t14, t17, in_edi, in_esi, in_ebp, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu));
    t19 = g->edx;
    wr32(sp0 - 0xa8u, 0xf0u);
    wr32(sp0 - 0xacu, COW_IMG(0x103b40ecu));
    t20 = (rd32(sp0 - 0x8cu) << 4u) * 4u;
    wr32(sp0 - 0xb0u, t20);
    wr32(sp0 - 0xb4u, 1u);
    g->ecx = t20;
    g->edx = t19;
    t21 = rd32(sp0 - 0x8cu);
    g->esp = sp0 - 0x90u;
    t22 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, t20, COW_IMG(0x103b40ecu), 0xf0u, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), in_edi, in_esi, in_ebp);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0xb8u, arg1);
    wr32(sp0 - 0xbcu, t21 << 4u);
    wr32(sp0 - 0xc0u, 4u);
    wr32(sp0 - 0xc4u, t22);
    wr32(sp0 - 0x7cu, t22);
    g->edx = t24;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10292420u), 11, t22, 4u, t21 << 4u, arg1, 1u, rd32(sp0 - 0xb0u), COW_IMG(0x103b40ecu), 0xf0u, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), in_edi);
    t25 = g->edx;
    wr32(sp0 - 0x80u, 0u);
    if ((int32_t)rd32(sp0 - 0x8cu) <= 0)
    {
        eax = 0u;
        ecx = rd32(sp0 - 0x8cu);
        edx = t25;
        ebp = t14;
        esi = t22;
    }
    else
    {
        ebp = t14;
        esi = t22;
    COW_AT(1027b8e5)
        wr32(sp0 - 0x84u, 0u);
        wr32(sp0 - 0x88u, 0u);
        loc_80 = 0u;
        loc_84 = 0u;
        loc_88 = 0u;
L_1027b8ed: ;
    COW_AT(1027b8ed)
        t26 = rd32(esi + 8u);
        wr32(sp0 - 0xa0u, t26);
        t27 = rd32(esi + 4u);
        wr32(sp0 - 0xa4u, t27);
        wr32(sp0 - 0xa8u, rd32(esi));
        wr32(sp0 - 0xacu, sp0 - 0x6cu);
        g->ecx = rd32(esi);
        g->edx = sp0 - 0x6cu;
        t28 = rd32(esi);
        t29 = rd32(ebp + 0x20u);
        t30 = rd32(ebp + 0x24u);
        g->esp = sp0 - 0x9cu;
        cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x6cu, t28, t27, t26);
        t31 = g->ecx;
        t32 = g->edx;
        wr32(sp0 - 0xb0u, sp0 - 0x6cu);
        wr32(sp0 - 0xb4u, loc_84 + t30);
        g->esp = sp0 - 0xb0u;
        cow_cdecl(g, COW_IMG(0x102915d0u), 1, loc_84 + t30);
        t33 = rd32(esi + 0x18u);
        wr32(sp0 - 0xb8u, t33);
        t34 = rd32(esi + 0x14u);
        wr32(sp0 - 0xbcu, t34);
        t35 = rd32(esi + 0x10u);
        wr32(sp0 - 0xc0u, t35);
        t36 = rd32(esi + 0xcu);
        wr32(sp0 - 0xc4u, t36);
        wr32(sp0 - 0xc8u, sp0 - 0x60u);
        g->ecx = t36;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0xb4u;
        cow_cdecl(g, COW_IMG(0x1027a740u), 5, sp0 - 0x60u, t36, t35, t34, t33);
        t37 = g->ecx;
        t38 = g->edx;
        wr32(sp0 - 0xccu, sp0 - 0x60u);
        wr32(sp0 - 0xd0u, loc_84 + t30);
        g->esp = sp0 - 0xccu;
        cow_cdecl(g, COW_IMG(0x10291600u), 1, loc_84 + t30);
        t39 = rd32(esi + 0x24u);
        wr32(sp0 - 0xd4u, t39);
        t40 = rd32(esi + 0x20u);
        wr32(sp0 - 0xd8u, t40);
        t41 = rd32(esi + 0x1cu);
        wr32(sp0 - 0xdcu, t41);
        wr32(sp0 - 0xe0u, sp0 - 0x78u);
        g->eax = t41;
        g->ecx = sp0 - 0x78u;
        g->esp = sp0 - 0xd0u;
        t42 = cow_cdecl(g, COW_IMG(0x10274690u), 4, sp0 - 0x78u, t41, t40, t39);
        t43 = g->ecx;
        wr32(sp0 - 0xa0u, sp0 - 0x78u);
        wr32(sp0 - 0xa4u, loc_84 + t30);
        g->ecx = t43;
        g->edx = sp0 - 0x78u;
        g->esp = sp0 - 0xa0u;
        t44 = cow_cdecl(g, COW_IMG(0x10291610u), 1, loc_84 + t30);
        t45 = g->ecx;
        t46 = g->edx;
        wr32(sp0 - 0xa8u, esi + 0x28u);
        wr32(sp0 - 0xacu, loc_84 + t30);
        g->ecx = t45;
        g->edx = t46;
        g->esp = sp0 - 0xa4u;
        t47 = cow_cdecl(g, COW_IMG(0x102916f0u), 2, loc_84 + t30, esi + 0x28u);
        t48 = g->ecx;
        t49 = g->edx;
        d50 = (double)(float)(double)(int32_t)rd32(esi + 0x34u);
        wrf32(sp0 - 0xa0u, (float)d50);
        wr32(sp0 - 0xa4u, loc_84 + t30);
        g->ecx = t48;
        g->edx = t49;
        g->esp = sp0 - 0x9cu;
        t51 = cow_cdecl(g, COW_IMG(0x102917a0u), 2, loc_84 + t30, cow_f2bits(d50));
        t52 = g->ecx;
        t53 = g->edx;
        d54 = (double)(float)(double)(int32_t)rd32(esi + 0x38u);
        wrf32(sp0 - 0xa0u, (float)d54);
        wr32(sp0 - 0xa4u, loc_84 + t30);
        cow_cdecl(g, COW_IMG(0x102917b0u), 2, loc_84 + t30, cow_f2bits(d54));
        if ((int32_t)rd32(sp0 - 0x88u) <= 0)
        {
            esi = esi + 0x3cu;
        }
        else
        {
            ebx = loc_88 + t29;
            esi = esi + 0x3cu;
    COW_AT(1027b9a9)
            wr32(sp0 - 0xa0u, ebx);
            t55 = rd32(esi) * 0xf8u + rd32(ebp + 0x20u);
            wr32(sp0 - 0xa4u, t55);
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x10291f30u), 2, t55, ebx);
        }
    COW_AT(1027b9c2)
        t56 = rd32(sp0 - 0x80u) + 1u;
        t57 = rd32(sp0 - 0x80u);
        wr32(sp0 - 0x80u, t56);
        t58 = rd32(sp0 - 0x88u) + 0xf8u;
        wr32(sp0 - 0x88u, t58);
        t59 = rd32(sp0 - 0x84u) + 0x9cu;
        wr32(sp0 - 0x84u, t59);
        if ((int32_t)(t57 + 1u) < (int32_t)rd32(sp0 - 0x8cu))
        {
            esi = esi + 4u;
            loc_80 = t56;
            loc_84 = t59;
            loc_88 = t58;
            goto L_1027b8ed;
        }
        eax = t56;
        ecx = rd32(sp0 - 0x8cu);
        edx = t59;
    COW_AT(1027b9f6)
        esi = rd32(sp0 - 0x7cu);
    }
    COW_AT(1027b9fa)
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

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027b7c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027b7d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027b7fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027b807u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027b832u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027b85bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        wr32(sp0 - 0xb0u, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1027b88bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x90u;
        g->ebx = arg1;
        wr32(sp0 - 0xb0u, sp0 - 0x8cu);
        wr32(sp0 - 0xa0u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1027b8e5u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->eax = 0u;
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1027b8edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x1027b9a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xe0u, sp0 - 0x78u);
        wr32(sp0 - 0xccu, sp0 - 0x60u);
        wr32(sp0 - 0xc8u, sp0 - 0x60u);
        wr32(sp0 - 0xb0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x1027b9c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xe0u, sp0 - 0x78u);
        wr32(sp0 - 0xccu, sp0 - 0x60u);
        wr32(sp0 - 0xc8u, sp0 - 0x60u);
        wr32(sp0 - 0xb0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x1027b9f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xe0u, sp0 - 0x78u);
        wr32(sp0 - 0xccu, sp0 - 0x60u);
        wr32(sp0 - 0xc8u, sp0 - 0x60u);
        wr32(sp0 - 0xb0u, sp0 - 0x6cu);
        (void)sp0;
        return 1;
    }
    case 0x1027b9fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        uint32_t loc_84;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027b7c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027b7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
