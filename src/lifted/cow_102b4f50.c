/* f_0x102b4f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=4 */
void cow_fn_102b4f50(Guest* g)
{
    double d1;
    double d15;
    double d22;
    double d27;
    double d28;
    double d29;
    double d30;
    double d32;
    double d33;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 80u);

    d1 = (double)rdf32(sp0 + 4u);
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x1cu, 0u);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x18u, t5);
        eax = t5;
        ecx = t6;
        edx = t7;
        ebp = t5;
        loc_18 = t5;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x18u, t2 - 1u);
        eax = t2;
        ecx = t3;
        edx = t4;
        ebp = t2 - 1u;
        loc_18 = t2 - 1u;
    }
    d8 = (double)rdf32(sp0 + 8u);
    if (!(d8 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 8u);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(sp0 - 0x24u, t12);
        eax = t12;
        ecx = t13;
        edx = t14;
        edi = t12;
        loc_24 = t12;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 8u);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x24u, t9 - 1u);
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = t9 - 1u;
        loc_24 = t9 - 1u;
    }
    d15 = (double)rdf32(sp0 + 0xcu);
    if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(sp0 - 0x28u, t19);
        eax = t19;
        ecx = t20;
        edx = t21;
        esi = t19;
        loc_28 = t19;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x28u, t16 - 1u);
        eax = t16;
        ecx = t17;
        edx = t18;
        esi = t16 - 1u;
        loc_28 = t16 - 1u;
    }
    d22 = (double)rdf32(sp0 + 0x10u);
    if (!(d22 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0x10u);
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t26 = g->edx;
        edx = t26;
        ebx = t25;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d22, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0x10u);
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x38u;
        t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t24 = g->edx;
        edx = t24;
        ebx = t23 - 1u;
    }
    wr32(sp0 - 0x20u, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)ebp) goto L_102b50cc;
    eax = ebp + 1u;
    loc_20 = ebp + 1u;
L_102b501e: ;
    wr32(sp0 - 0x14u, edi + 1u);
    d27 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) - (double)(int32_t)loc_20);
    wrf32(sp0 - 0x10u, (float)d27);
    if ((int32_t)(edi + 1u) < (int32_t)edi) goto L_102b50bb;
    ebp = edi + 1u;
    loc_14 = edi + 1u;
L_102b5039: ;
    wr32(sp0 - 0x14u, esi + 1u);
    d28 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - (double)(int32_t)loc_14);
    wrf32(sp0 - 0xcu, (float)d28);
    if ((int32_t)(esi + 1u) < (int32_t)esi) goto L_102b50a8;
    edi = esi + 1u;
    loc_14 = esi + 1u;
L_102b5050: ;
    wr32(sp0 - 0x14u, ebx + 1u);
    d29 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) - (double)(int32_t)loc_14);
    wrf32(sp0 - 8u, (float)d29);
    if ((int32_t)(ebx + 1u) < (int32_t)ebx) goto L_102b5099;
    esi = ebx + 1u;
    loc_14 = ebx + 1u;
L_102b5067: ;
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0x44u, edi);
    wr32(sp0 - 0x48u, ebp);
    wr32(sp0 - 0x4cu, loc_20);
    d30 = (double)(float)fr(g, (double)rdf32(sp0 + 0x10u) - (double)(int32_t)loc_14);
    wrf32(sp0 - 4u, (float)d30);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x102b50e0u), 4, loc_20, ebp, edi, esi);
    t31 = g->edx;
    d32 = cow_take_float(g);
    wr32(sp0 - 0x14u, esi - 1u);
    d33 = (double)(float)fr(g, d32 + (double)rdf32(sp0 - 0x1cu));
    wrf32(sp0 - 0x1cu, (float)d33);
    if ((int32_t)(esi - 1u) >= (int32_t)ebx)
    {
        edx = t31;
        loc_14 = esi - 1u;
        esi = esi - 1u;
        loc_1c_f = d33;
        goto L_102b5067;
    }
    edx = t31;
    loc_1c_f = d33;
L_102b5099: ;
    wr32(sp0 - 0x14u, edi - 1u);
    if ((int32_t)(edi - 1u) >= (int32_t)rd32(sp0 - 0x28u))
    {
        loc_14 = edi - 1u;
        edi = edi - 1u;
        goto L_102b5050;
    }
    eax = rd32(sp0 - 0x28u);
    esi = eax;
L_102b50a8: ;
    wr32(sp0 - 0x14u, ebp - 1u);
    if ((int32_t)(ebp - 1u) >= (int32_t)rd32(sp0 - 0x24u))
    {
        loc_14 = ebp - 1u;
        ebp = ebp - 1u;
        goto L_102b5039;
    }
    eax = rd32(sp0 - 0x24u);
    edi = eax;
    eax = loc_20;
L_102b50bb: ;
    wr32(sp0 - 0x20u, eax - 1u);
    if ((int32_t)(eax - 1u) >= (int32_t)rd32(sp0 - 0x18u))
    {
        loc_20 = eax - 1u;
        eax = eax - 1u;
        goto L_102b501e;
    }
L_102b50cc: ;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    fpush(g, loc_1c_f);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b4f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
