/* f_0x1031f3d8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_1031f3d8(Guest* g)
{
    double d10;
    double d13;
    double d15;
    double d16;
    double d19;
    double d23;
    double d24;
    double d28;
    double d29;
    double d32;
    double d36;
    double d5;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_10_d;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    double loc_24_d;
    double loc_34_d;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0xffffu);
    wr32(sp0 - 0x20u, 0x133fu);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), self, 4, 0x133fu, 0xffffu, in_edi, in_esi);
    t2 = g->edx;
    if ((rd32(sp0 + 0xau) & 0x7ff0u) != 0x7ff0u)
    {
        eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
        edx = t2;
        edi = t1;
        x0 = rdf64(sp0 + 4u);
        goto L_1031f472;
    }
    eax = (rd32(sp0 + 0xau) & 0xffff0000u) | (rd32(sp0 + 0xau) & 0x7ff0u);
    edx = t2;
    edi = t1;
    x0 = rdf64(sp0 + 4u);
    wr32(sp0 - 0x1cu, 0xffffu);
    wr32(sp0 - 0x20u, 0xffffu);
    wrf64(sp0 - 0x20u, x0);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x1031f64bu), 4, cow_dlo(x0), cow_dhi(x0), in_edi, in_esi);
    t4 = g->edx;
    if ((int32_t)t3 <= 0)
    {
        eax = t3;
        ecx = rd32(sp0 - 0x1cu);
        edx = t4;
        goto L_1031f444;
    }
    eax = t3;
    ecx = rd32(sp0 - 0x1cu);
    edx = t4;
    if ((int32_t)eax <= 2)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_1031f47d;
    }
    if (eax != 3u) goto L_1031f444;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    wrf64(sp0 - 0x10u, (double)(int32_t)arg3);
    wrf64(sp0 - 0x24u, (double)(int32_t)arg3);
    wr32(sp0 - 0x28u, ecx);
    wr32(sp0 - 0x2cu, ecx);
    d5 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x2cu, d5);
    wr32(sp0 - 0x30u, 0x19u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x1031f7bau), g->eax, ecx, edx, 1, 6, 0x19u, cow_dlo(d5), cow_dhi(d5), cow_dlo((double)(int32_t)arg3), cow_dhi((double)(int32_t)arg3), edi);
    t7 = g->edx;
    d8 = cow_take_float(g);
    eax = t6;
    edx = t7;
    x0 = d8;
L_1031f5ba: ;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    fpush(g, x0);
    return eax;
L_1031f444: ;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    d9 = fr(g, rdf64(sp0 + 4u) + rdf64(COW_IMG(0x1034a1e0u)));
    wrf64(sp0 - 0x24u, d9);
    wr32(sp0 - 0x28u, ecx);
    wr32(sp0 - 0x2cu, ecx);
    wrf64(sp0 - 0x10u, (double)(int32_t)arg3);
    wrf64(sp0 - 0x2cu, (double)(int32_t)arg3);
    wr32(sp0 - 0x30u, ecx);
    wr32(sp0 - 0x34u, ecx);
    d10 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x34u, d10);
    wr32(sp0 - 0x38u, 0x19u);
    wr32(sp0 - 0x3cu, 8u);
    loc_1c = edi;
    loc_24_d = d9;
    loc_34_d = d10;
    loc_3c = 8u;
L_1031f592: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t30 = cow_thiscall_cdecl(g, COW_IMG(0x1031f8b2u), ecx, 11, loc_3c, 0x19u, cow_dlo(loc_34_d), cow_dhi(loc_34_d), cow_dlo((double)(int32_t)arg3), cow_dhi((double)(int32_t)arg3), cow_dlo(loc_24_d), cow_dhi(loc_24_d), loc_1c, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t31 = g->edx;
    d32 = cow_take_float(g);
    eax = t30;
    edx = t31;
    x0 = d32;
    goto L_1031f5ba;
L_1031f472: ;
    if (x0 < rdf64(COW_IMG(0x1034a1d8u)) || x0 > rdf64(COW_IMG(0x1034a1d8u))) goto L_1031f48e;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, rdf64(COW_IMG(0x1034a1d8u)), 0u);
    ecx = 0xffffu;
    loc_4 = in_ebp;
    loc_14 = in_esi;
    loc_18 = in_edi;
L_1031f47d: ;
    wr32(sp0 - 0x1cu, 0xffffu);
    wr32(sp0 - 0x20u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), ecx, 4, edi, 0xffffu, loc_18, loc_14);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    x0 = rdf64(sp0 + 4u);
    goto L_1031f5ba;
L_1031f48e: ;
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0xffffu);
    wr32(sp0 - 0x24u, 0xffffu);
    d13 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x24u, d13);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x1031f6a5u), sp0 - 8u, 0xffffu, g->edx, 1, 3, cow_dlo(d13), cow_dhi(d13), sp0 - 8u);
    t14 = g->edx;
    d15 = cow_take_float(g);
    wrf64(sp0 - 0x10u, d15);
    if ((int32_t)arg3 >= 0)
    {
        ecx = arg3;
        edx = t14;
        loc_10_d = d15;
    }
    else
    {
        edx = t14;
        loc_10_d = d15;
        ecx = -arg3;
    }
    if ((int32_t)ecx > 2147483647)
    {
        eax = arg3;
    }
    else
    {
        eax = arg3 + rd32(sp0 - 8u);
        ecx = rd32(sp0 - 8u);
    }
    if ((int32_t)eax <= 2560) goto L_1031f501;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    wrf64(sp0 - 0x24u, loc_10_d);
    wr32(sp0 - 0x28u, ecx);
    wr32(sp0 - 0x2cu, ecx);
    wrf64(sp0 - 0x2cu, rdf64(COW_IMG(0x103d2c38u)));
    g->eax = eax;
    g->edx = edx;
    d16 = rdf64(COW_IMG(0x103d2c38u));
    g->esp = sp0 - 0x14u;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x10314130u), ecx, 6, cow_dlo(d16), cow_dhi(d16), cow_dlo(loc_10_d), cow_dhi(loc_10_d), edi, rd32(sp0 - 0x18u));
    t18 = g->edx;
    d19 = cow_take_float(g);
    wrf64(sp0 - 0x24u, d19);
    wrf64(sp0 - 0x10u, (double)(int32_t)arg3);
    eax = t17;
    ecx = rd32(sp0 - 0x28u);
    edx = t18;
    loc_24_d = d19;
    loc_1c = rd32(sp0 - 0x1cu);
L_1031f4eb: ;
    wr32(sp0 - 0x28u, ecx);
    wr32(sp0 - 0x2cu, ecx);
    wrf64(sp0 - 0x2cu, (double)(int32_t)arg3);
    wr32(sp0 - 0x30u, ecx);
    wr32(sp0 - 0x34u, ecx);
    d24 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x34u, d24);
    wr32(sp0 - 0x38u, 0x19u);
    wr32(sp0 - 0x3cu, 0x11u);
    loc_34_d = d24;
    loc_3c = 0x11u;
    goto L_1031f592;
L_1031f501: ;
    if ((int32_t)eax <= 1024) goto L_1031f535;
    wr32(sp0 - 0x1cu, eax - 0x600u);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    wrf64(sp0 - 0x24u, loc_10_d);
    g->eax = eax - 0x600u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), ecx, 5, cow_dlo(loc_10_d), cow_dhi(loc_10_d), eax - 0x600u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t21 = g->ecx;
    t22 = g->edx;
    d23 = cow_take_float(g);
    wrf64(sp0 - 0x10u, d23);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, t21);
    wr32(sp0 - 0x24u, t21);
    wrf64(sp0 - 0x24u, d23);
    wrf64(sp0 - 0x10u, (double)(int32_t)arg3);
    eax = t20;
    ecx = t21;
    edx = t22;
    loc_24_d = d23;
    loc_1c = edi;
    goto L_1031f4eb;
L_1031f535: ;
    if ((int32_t)eax >= -2557) goto L_1031f54f;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    wrf64(sp0 - 0x24u, 0.0);
    wrf64(sp0 - 0x10u, (double)(int32_t)arg3);
    loc_1c = edi;
    loc_24_d = 0.0;
L_1031f581: ;
    wr32(sp0 - 0x28u, ecx);
    wr32(sp0 - 0x2cu, ecx);
    wrf64(sp0 - 0x2cu, (double)(int32_t)arg3);
    wr32(sp0 - 0x30u, ecx);
    wr32(sp0 - 0x34u, ecx);
    d29 = rdf64(sp0 + 4u);
    wrf64(sp0 - 0x34u, d29);
    wr32(sp0 - 0x38u, 0x19u);
    wr32(sp0 - 0x3cu, 0x12u);
    loc_34_d = d29;
    loc_3c = 0x12u;
    goto L_1031f592;
L_1031f54f: ;
    if ((int32_t)eax >= -1021) goto L_1031f59c;
    wr32(sp0 - 0x1cu, eax + 0x600u);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    wrf64(sp0 - 0x24u, loc_10_d);
    g->eax = eax + 0x600u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), ecx, 5, cow_dlo(loc_10_d), cow_dhi(loc_10_d), eax + 0x600u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t26 = g->ecx;
    t27 = g->edx;
    d28 = cow_take_float(g);
    wrf64(sp0 - 0x10u, d28);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, t26);
    wr32(sp0 - 0x24u, t26);
    wrf64(sp0 - 0x24u, d28);
    wrf64(sp0 - 0x10u, (double)(int32_t)arg3);
    eax = t25;
    ecx = t26;
    edx = t27;
    loc_1c = edi;
    loc_24_d = d28;
    goto L_1031f581;
L_1031f59c: ;
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx);
    wrf64(sp0 - 0x24u, loc_10_d);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_thiscall_cdecl(g, COW_IMG(0x1031f5beu), ecx, 5, cow_dlo(loc_10_d), cow_dhi(loc_10_d), eax, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t34 = g->ecx;
    t35 = g->edx;
    d36 = cow_take_float(g);
    wrf64(sp0 - 0x10u, d36);
    wr32(sp0 - 0x28u, 0xffffu);
    wr32(sp0 - 0x2cu, edi);
    g->edx = t35;
    g->esp = sp0 - 0x1cu;
    t37 = cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), t34, 4, edi, 0xffffu, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
    t38 = g->edx;
    eax = t37;
    edx = t38;
    x0 = rdf64(sp0 - 0x10u);
    goto L_1031f5ba;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f3d8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031f3d8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
