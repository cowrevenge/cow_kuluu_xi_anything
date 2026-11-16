/* f_0x10314273 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
uint32_t cow_fn_10314273(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d24;
    double d27;
    double d3;
    double d31;
    double d33;
    double d34;
    double d37;
    double d4;
    double d41;
    double d43;
    double d44;
    double d47;
    double d5;
    double d50;
    double d51;
    double d54;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_30;
    double loc_38_d;
    double loc_40_d;
    double loc_48_d;
    uint32_t loc_50;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t40;
    uint32_t t42;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t52;
    uint32_t t53;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x30u, 0xffffu);
    wr32(sp0 - 0x34u, 0x133fu);
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), self, 4, 0x133fu, 0xffffu, in_edi, in_esi);
    wr32(sp0 - 8u, t1);
    t2 = rd32(sp0 + 0xau);
    if ((t2 & 0x7ff0u) == 0x7ff0u)
    {
        edi = t2;
        loc_8 = t1;
        goto L_103142b1;
    }
    edi = t2;
    loc_8 = t1;
    if ((rd32(sp0 + 0x12u) & 0x7ff0u) != 0x7ff0u)
    {
        eax = (rd32(sp0 + 0x12u) & 0xffff0000u) | (rd32(sp0 + 0x12u) & 0x7ff0u);
        goto L_1031431e;
    }
L_103142b1: ;
    if ((edi & 0x7ff8u) != 0x7ff0u)
    {
        edi = edi & 0x7ff8u;
        goto L_103142cb;
    }
    edi = edi & 0x7ff8u;
    if ((arg2 & 0x7ffffu) != 0u) goto L_103142e0;
    if (arg1 != 0u) goto L_103142e0;
L_103142cb: ;
    if ((rd32(sp0 + 0x12u) & 0x7ff8u) != 0x7ff0u)
    {
        esi = rd32(sp0 + 0x12u) & 0x7ff8u;
        goto L_10314307;
    }
    esi = rd32(sp0 + 0x12u) & 0x7ff8u;
    if ((arg4 & 0x7ffffu) != 0u) goto L_103142e0;
    if (arg3 == 0u) goto L_10314307;
L_103142e0: ;
    wr32(sp0 - 0x30u, loc_8);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    d3 = fr(g, rdf64(sp0 + 4u) + rdf64(sp0 + 0xcu));
    wrf64(sp0 - 0x38u, d3);
    wr32(sp0 - 0x3cu, 0x7ff0u);
    wr32(sp0 - 0x40u, 0x7ff0u);
    d4 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x40u, d4);
    wr32(sp0 - 0x44u, 0x7ff0u);
    wr32(sp0 - 0x48u, 0x7ff0u);
    d5 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x48u, d5);
    wr32(sp0 - 0x4cu, 0x26u);
    wr32(sp0 - 0x50u, 8u);
    ecx = 0x7ff0u;
    edx = arg1;
    loc_30 = loc_8;
    loc_38_d = d3;
    loc_40_d = d4;
    loc_48_d = d5;
    loc_50 = 8u;
L_103144cc: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t45 = cow_thiscall_cdecl(g, COW_IMG(0x1031f8b2u), ecx, 11, loc_50, 0x26u, cow_dlo(loc_48_d), cow_dhi(loc_48_d), cow_dlo(loc_40_d), cow_dhi(loc_40_d), cow_dlo(loc_38_d), cow_dhi(loc_38_d), loc_30, in_edi, in_esi);
    t46 = g->edx;
    d47 = cow_take_float(g);
    eax = t45;
    edx = t46;
    x0 = d47;
L_10314503: ;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    fpush(g, x0);
    return eax;
L_10314307: ;
    if ((uint16_t)edi == 0x7ff8u) goto L_103144e6;
    if ((uint16_t)esi == 0x7ff8u) goto L_103144e6;
    eax = 0x7ff8u;
L_1031431e: ;
    d6 = rdf64(sp0 + 0xcu);
    d7 = rdf64(sp0 + 4u);
    if (d6 < d7 || d6 > d7)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
        goto L_1031433c;
    }
    wr32(sp0 - 0x30u, 0xffffu);
    wr32(sp0 - 0x34u, loc_8);
    g->edx = arg1;
    g->esp = sp0 - 0x24u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), 0x7ff0u, 4, loc_8, 0xffffu, in_edi, in_esi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    x0 = rdf64(sp0 + 4u);
    goto L_10314503;
L_1031433c: ;
    d10 = rdf64(sp0 + 4u);
    if (d10 < rdf64(COW_IMG(0x1034a1d8u)) || d10 > rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        d11 = rdf64(sp0 + 0xcu);
        d12 = rdf64(sp0 + 4u);
        wr32(sp0 - 0x20u, 1u);
        if (!(d11 > d12))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, d12, 0u);
            wr32(sp0 - 0x1cu, 0x80000000u);
            loc_20 = 1u;
            loc_1c = 0x80000000u;
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, d12, 0u);
            wr32(sp0 - 0x1cu, 0u);
            loc_20 = 1u;
            loc_1c = 0u;
        }
    }
    d13 = rdf64(sp0 + 4u);
    if (!(d13 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_10314382;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d13, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    d14 = rdf64(sp0 + 0xcu);
    d15 = rdf64(sp0 + 4u);
    if (!(d14 >= d15)) goto L_1031439b;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 0u);
L_10314382: ;
    d16 = rdf64(sp0 + 4u);
    if (d16 >= rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_103143ae;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d16, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    d17 = rdf64(sp0 + 0xcu);
    d18 = rdf64(sp0 + 4u);
    if (!(d17 > d18))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, d18, 0u);
        goto L_103143ae;
    }
L_1031439b: ;
    wr32(sp0 - 0x20u, arg1 - 1u);
    wr32(sp0 - 0x1cu, arg2);
    if (arg1 != 0u)
    {
        edi = arg1 - 1u;
        loc_20 = arg1 - 1u;
        loc_1c = arg2;
        goto L_103143f9;
    }
    eax = arg2 - 1u;
    edi = arg1 - 1u;
    loc_20 = arg1 - 1u;
L_103143f1: ;
    wr32(sp0 - 0x1cu, eax);
    loc_1c = eax;
L_103143f9: ;
    if ((loc_1c >> 0x10u & 0x7ff0u) != 0u) goto L_10314460;
    if ((loc_1c & 0xfffffu) != 0u) goto L_1031440c;
    if (edi == 0u) goto L_10314460;
L_1031440c: ;
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    wrf64(sp0 - 0x38u, cow_bits2d(loc_20, loc_1c));
    g->edx = arg1;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 0xcu, 0x7ff0u, g->edx, 1, 3, cow_dlo(cow_bits2d(loc_20, loc_1c)), cow_dhi(cow_bits2d(loc_20, loc_1c)), sp0 - 0xcu);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    wrf64(sp0 - 0x14u, d27);
    t28 = rd32(sp0 - 0xcu) + 0x600u;
    wr32(sp0 - 0x30u, t28);
    wr32(sp0 - 0x34u, t25);
    wr32(sp0 - 0x38u, t25);
    wrf64(sp0 - 0x38u, d27);
    g->edx = t26;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), t25, 5, cow_dlo(d27), cow_dhi(d27), t28, in_edi, in_esi);
    t29 = g->ecx;
    t30 = g->edx;
    d31 = cow_take_float(g);
    wrf64(sp0 - 0x20u, d31);
    t32 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t32);
    wr32(sp0 - 0x34u, t29);
    wr32(sp0 - 0x38u, t29);
    wrf64(sp0 - 0x38u, d31);
    wr32(sp0 - 0x3cu, t29);
    wr32(sp0 - 0x40u, t29);
    d33 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x40u, d33);
    wr32(sp0 - 0x44u, t29);
    wr32(sp0 - 0x48u, t29);
    d34 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x48u, d34);
    wr32(sp0 - 0x4cu, 0x26u);
    wr32(sp0 - 0x50u, 0x12u);
    ecx = t29;
    edx = t30;
    loc_30 = t32;
    loc_38_d = d31;
    loc_40_d = d33;
    loc_48_d = d34;
    loc_50 = 0x12u;
    goto L_103144cc;
L_103143ae: ;
    d19 = rdf64(sp0 + 4u);
    if (!(d19 > rdf64(COW_IMG(0x1034a1d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, rdf64(COW_IMG(0x1034a1d8u)), 0u);
        goto L_103143c7;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d19, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    d20 = rdf64(sp0 + 0xcu);
    d21 = rdf64(sp0 + 4u);
    if (d20 > d21) goto L_103143e0;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, d21, 0u);
L_103143c7: ;
    d22 = rdf64(sp0 + 4u);
    if (d22 >= rdf64(COW_IMG(0x1034a1d8u))) goto L_103143f6;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    d23 = rdf64(sp0 + 0xcu);
    d24 = rdf64(sp0 + 4u);
    if (d23 >= d24) goto L_103143f6;
L_103143e0: ;
    wr32(sp0 - 0x20u, arg1 + 1u);
    wr32(sp0 - 0x1cu, arg2);
    if (arg1 + 1u != 0u)
    {
        edi = arg1 + 1u;
        loc_20 = arg1 + 1u;
        loc_1c = arg2;
        goto L_103143f9;
    }
    eax = arg2 + 1u;
    edi = arg1 + 1u;
    loc_20 = arg1 + 1u;
    goto L_103143f1;
L_103143f6: ;
    edi = loc_20;
    goto L_103143f9;
L_10314460: ;
    if (loc_1c != 0x7ff00000u) goto L_1031446d;
    if (edi == 0u) goto L_1031447a;
L_1031446d: ;
    if (loc_1c != 0xfff00000u) goto L_103144d6;
    if (edi != 0u) goto L_103144d6;
L_1031447a: ;
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    wrf64(sp0 - 0x38u, cow_bits2d(loc_20, loc_1c));
    g->edx = arg1;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 0xcu, 0x7ff0u, g->edx, 1, 3, cow_dlo(cow_bits2d(loc_20, loc_1c)), cow_dhi(cow_bits2d(loc_20, loc_1c)), sp0 - 0xcu);
    t35 = g->ecx;
    t36 = g->edx;
    d37 = cow_take_float(g);
    wrf64(sp0 - 0x14u, d37);
    t38 = rd32(sp0 - 0xcu) - 0x600u;
    wr32(sp0 - 0x30u, t38);
    wr32(sp0 - 0x34u, t35);
    wr32(sp0 - 0x38u, t35);
    wrf64(sp0 - 0x38u, d37);
    g->edx = t36;
    g->esp = sp0 - 0x24u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), t35, 5, cow_dlo(d37), cow_dhi(d37), t38, in_edi, in_esi);
    t39 = g->ecx;
    t40 = g->edx;
    d41 = cow_take_float(g);
    wrf64(sp0 - 0x20u, d41);
    t42 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t42);
    wr32(sp0 - 0x34u, t39);
    wr32(sp0 - 0x38u, t39);
    wrf64(sp0 - 0x38u, d41);
    wr32(sp0 - 0x3cu, t39);
    wr32(sp0 - 0x40u, t39);
    d43 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x40u, d43);
    wr32(sp0 - 0x44u, t39);
    wr32(sp0 - 0x48u, t39);
    d44 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x48u, d44);
    wr32(sp0 - 0x4cu, 0x26u);
    wr32(sp0 - 0x50u, 0x11u);
    ecx = t39;
    edx = t40;
    loc_30 = t42;
    loc_38_d = d41;
    loc_40_d = d43;
    loc_48_d = d44;
    loc_50 = 0x11u;
    goto L_103144cc;
L_103144d6: ;
    wr32(sp0 - 0x30u, 0xffffu);
    wr32(sp0 - 0x34u, loc_8);
    g->edx = arg1;
    g->esp = sp0 - 0x24u;
    t48 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), 0x7ff0u, 4, loc_8, 0xffffu, in_edi, in_esi);
    t49 = g->edx;
    eax = t48;
    edx = t49;
    x0 = rdf64(sp0 - 0x20u);
    goto L_10314503;
L_103144e6: ;
    wr32(sp0 - 0x30u, loc_8);
    wr32(sp0 - 0x34u, 0x7ff0u);
    wr32(sp0 - 0x38u, 0x7ff0u);
    d50 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x38u, d50);
    wr32(sp0 - 0x3cu, 0x7ff0u);
    wr32(sp0 - 0x40u, 0x7ff0u);
    d51 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x40u, d51);
    wr32(sp0 - 0x44u, 0x26u);
    g->esp = sp0 - 0x2cu;
    t52 = cow_call_regs(g, COW_IMG(0x1031f7bau), g->eax, 0x7ff0u, arg1, 1, 6, 0x26u, cow_dlo(d51), cow_dhi(d51), cow_dlo(d50), cow_dhi(d50), loc_8);
    t53 = g->edx;
    d54 = cow_take_float(g);
    eax = t52;
    edx = t53;
    x0 = d54;
    goto L_10314503;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10314273(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10314273(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
