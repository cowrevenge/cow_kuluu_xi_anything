/* f_0x102b4d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=3 */
void cow_fn_102b4d60(Guest* g)
{
    double d1;
    double d15;
    double d22;
    double d23;
    double d24;
    double d27;
    double d28;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    double loc_18_f;
    uint32_t loc_1c;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
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
    cow_frame(g, sp0, 64u);

    d1 = (double)rdf32(sp0 + 4u);
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(sp0 - 0x18u, 0u);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x2cu;
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x14u, t5);
        eax = t5;
        ecx = t6;
        edx = t7;
        edi = t5;
        loc_14 = t5;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        fpush(g, x0);
        g->esp = sp0 - 0x2cu;
        t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x14u, t2 - 1u);
        eax = t2;
        ecx = t3;
        edx = t4;
        edi = t2 - 1u;
        loc_14 = t2 - 1u;
    }
    d8 = (double)rdf32(sp0 + 8u);
    if (!(d8 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 8u);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x2cu;
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(sp0 - 0x1cu, t12);
        eax = t12;
        ecx = t13;
        edx = t14;
        esi = t12;
        loc_1c = t12;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 8u);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x2cu;
        t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x1cu, t9 - 1u);
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t9 - 1u;
        loc_1c = t9 - 1u;
    }
    d15 = (double)rdf32(sp0 + 0xcu);
    if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x2cu;
        t19 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
        ebx = t19;
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(sp0 + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        fpush(g, x0);
        g->esp = sp0 - 0x2cu;
        t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
        ebx = t16 - 1u;
    }
    wr32(sp0 - 0x10u, edi + 1u);
    if ((int32_t)(edi + 1u) < (int32_t)edi) goto L_102b4e73;
    ebp = edi + 1u;
    loc_10 = edi + 1u;
L_102b4dfc: ;
    wr32(sp0 - 0x10u, esi + 1u);
    d22 = (double)(float)fr(g, (double)rdf32(sp0 + 4u) - (double)(int32_t)loc_10);
    wrf32(sp0 - 0xcu, (float)d22);
    if ((int32_t)(esi + 1u) < (int32_t)esi) goto L_102b4e66;
    edi = esi + 1u;
    loc_10 = esi + 1u;
L_102b4e13: ;
    wr32(sp0 - 0x10u, ebx + 1u);
    d23 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) - (double)(int32_t)loc_10);
    wrf32(sp0 - 8u, (float)d23);
    if ((int32_t)(ebx + 1u) < (int32_t)ebx) goto L_102b4e57;
    esi = ebx + 1u;
    loc_10 = ebx + 1u;
L_102b4e2a: ;
    wr32(sp0 - 0x30u, sp0 - 0xcu);
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, ebp);
    d24 = (double)(float)fr(g, (double)rdf32(sp0 + 0xcu) - (double)(int32_t)loc_10);
    wrf32(sp0 - 4u, (float)d24);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x102b4e80u), 4, ebp, edi, esi, sp0 - 0xcu);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    wr32(sp0 - 0x10u, esi - 1u);
    d28 = (double)(float)fr(g, d27 + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x18u, (float)d28);
    if ((int32_t)(esi - 1u) >= (int32_t)ebx)
    {
        ecx = t25;
        edx = t26;
        loc_10 = esi - 1u;
        esi = esi - 1u;
        loc_18_f = d28;
        goto L_102b4e2a;
    }
    ecx = t25;
    edx = t26;
    loc_18_f = d28;
L_102b4e57: ;
    wr32(sp0 - 0x10u, edi - 1u);
    if ((int32_t)(edi - 1u) >= (int32_t)rd32(sp0 - 0x1cu))
    {
        loc_10 = edi - 1u;
        edi = edi - 1u;
        goto L_102b4e13;
    }
    eax = rd32(sp0 - 0x1cu);
    esi = eax;
L_102b4e66: ;
    wr32(sp0 - 0x10u, ebp - 1u);
    if ((int32_t)(ebp - 1u) >= (int32_t)rd32(sp0 - 0x14u))
    {
        loc_10 = ebp - 1u;
        ebp = ebp - 1u;
        goto L_102b4dfc;
    }
L_102b4e73: ;
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 0x24u);
    fpush(g, loc_18_f);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b4d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b4d60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
