/* f_0x10122e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10122e30(Guest* g)
{
    double d12;
    double d15;
    double d18;
    double d21;
    double d29;
    double d30;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    t1 = rd32(sp0 + 4u);
    if (t1 == 7u) goto L_10122f27;
    eax = t1 - 7u;
    esi = t1;
    if (eax == 1u) goto L_10122f1b;
    g->ecx = self;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x104e1d4cu));
    t3 = rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4du);
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        ebx = (in_ebx & 0xffffff00u) | t3;
        goto L_10122e83;
    }
    ecx = t5;
    edx = t6;
    ebx = (in_ebx & 0xffffff00u) | t3;
    if ((uint8_t)ebx != 4u) goto L_10122e83;
    if (esi == 1u)
    {
        eax = esi - 1u;
        goto L_10122e75;
    }
    eax = esi - 1u;
    if (eax != 1u) goto L_10122eb7;
    eax = eax - 1u;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10125fe0u), eax, rd32(COW_IMG(0x104e1d4cu)), edx);
    return;
L_10122e75: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126100u), eax, rd32(COW_IMG(0x104e1d4cu)), edx);
    return;
L_10122e83: ;
    if ((uint8_t)ebx != 5u) goto L_10122eb7;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x1025e060u), 0);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t8;
        goto L_10122eb7;
    }
    edx = t8;
    if (esi == 3u)
    {
        eax = esi - 3u;
        goto L_10122ea9;
    }
    eax = esi - 3u;
    if (eax != 1u) goto L_10122eb7;
    eax = eax - 1u;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126190u), eax, rd32(COW_IMG(0x104e1d4cu)), edx);
    return;
L_10122ea9: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126200u), eax, rd32(COW_IMG(0x104e1d4cu)), edx);
    return;
L_10122eb7: ;
    if (esi - 1u > 3u) goto L_10122f0b;
    eax = esi - 1u;
    t9 = rd32(COW_IMG(0x1012301cu) + eax * 4u);
    switch (t9 - RD)
    {
    case 0x10122ec6u: goto L_10122ec6;
    case 0x10122ed3u: goto L_10122ed3;
    case 0x10122ee0u: goto L_10122ee0;
    case 0x10122eedu: goto L_10122eed;
    default: rt_fatal(g, COW_IMG(0x10122ebfu), "switch");
    }
    return;
L_10122ec6: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, COW_IMG(0x101260d0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t20 = g->edx;
    d21 = cow_take_float(g);
    eax = t19;
    edx = t20;
    x0 = d21;
L_10122ef8: ;
    if (x0 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_10123017;
L_10122f0b: ;
    if (esi == 0u) goto L_10122f33;
    if (esi > 2u) goto L_10122f33;
    edi = 0x48u;
L_10122f35: ;
    if (rd32(COW_IMG(0x10662d40u)) == 0u) goto L_10122f61;
    ecx = rd32(COW_IMG(0x10662d40u));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        edx = t23;
        goto L_10122f61;
    }
    edx = t23;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_stdcall(g, COW_IMG(0x10124290u), 1, edi);
    t25 = g->edx;
    if ((uint8_t)t24 != 0u)
    {
        edx = t25;
        goto L_10122f61;
    }
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_10122ed3: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x101260c0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t17 = g->edx;
    d18 = cow_take_float(g);
    eax = t16;
    edx = t17;
    x0 = d18;
    goto L_10122ef8;
L_10122ee0: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, COW_IMG(0x101260f0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t14 = g->edx;
    d15 = cow_take_float(g);
    eax = t13;
    edx = t14;
    x0 = d15;
    goto L_10122ef8;
L_10122eed: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x101260e0u), rd32(COW_IMG(0x104e1d4cu)), 0);
    t11 = g->edx;
    d12 = cow_take_float(g);
    eax = t10;
    edx = t11;
    x0 = d12;
    goto L_10122ef8;
L_10122f1b: ;
    edx = in_edx;
    ebx = in_ebx;
    esi = 2u;
    edi = 0x48u;
    goto L_10122f35;
L_10122f27: ;
    edx = in_edx;
    ebx = in_ebx;
    esi = 1u;
    edi = 0x48u;
    goto L_10122f35;
L_10122f33: ;
    edi = 0u;
    goto L_10122f35;
L_10122f61: ;
    g->ecx = COW_IMG(0x104e1c40u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t26 = cow_stdcall(g, COW_IMG(0x10124150u), 1, esi);
    t27 = g->ecx;
    t28 = g->edx;
    d29 = cow_take_float(g);
    d30 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(sp0 + 4u, (float)d29);
    if (d29 != d30)
    {
        x0 = d29;
        goto L_10123017;
    }
    eax = (t26 & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, d30, 1u);
    ecx = t27;
    edx = t28;
    x0 = d29;
    if (esi == 1u) goto L_10122fcf;
    esi = esi - 1u;
    if (esi != 1u) goto L_10123017;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0;
    t31 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xa0u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        goto L_10122fae;
    }
    g->ebx = in_ebx;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return;
L_10122fae: ;
    g->ebx = ebx;
    g->esp = sp0;
    t34 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xa1u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    if ((uint8_t)t34 == 0u) goto L_10123013;
    g->ebx = in_ebx;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_10122fcf: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0;
    t35 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xa3u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        goto L_10122ff2;
    }
    g->ebx = in_ebx;
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_10122ff2: ;
    g->ebx = ebx;
    g->esp = sp0;
    t38 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3fu, 0xa2u, 4u, 0xffffffffu, in_edi, in_esi, in_ebx);
    if ((uint8_t)t38 == 0u) goto L_10123013;
    g->ebx = in_ebx;
    fpush(g, (double)rdf32(COW_IMG(0x1032a3f0u)));
    return;
L_10123013: ;
    x0 = (double)rdf32(sp0 + 4u);
L_10123017: ;
    g->ebx = in_ebx;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10122e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10122e30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
