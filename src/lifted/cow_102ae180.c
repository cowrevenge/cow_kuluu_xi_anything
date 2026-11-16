/* f_0x102ae180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102ae180(Guest* g)
{
    double d15;
    double d16;
    double d17;
    double d2;
    double d3;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_28_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x3cu, t1);
    wr32(sp0 - 0x40u, arg4);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, arg4, t1);
    wr32(sp0 + 4u, 1u);
    wr32(sp0 - 0x30u, arg2 - 3u);
    wr32(sp0 - 0x2cu, arg3 - 1u);
    d2 = (double)(float)fr(g, (double)(int32_t)(arg2 - 3u) / (double)(int32_t)(arg3 - 1u));
    wrf32(sp0 - 0x28u, (float)d2);
    if ((int32_t)(arg3 - 1u) <= 1)
    {
        ebx = in_ebx;
        ebp = t1;
        edi = in_edi;
    }
    else
    {
        ebp = t1;
        loc_28_f = d2;
        wr32(sp0 - 0x3cu, in_ebx);
        wr32(sp0 - 0x40u, in_edi);
        eax = arg2;
        ecx = arg3;
        edx = arg3 - 1u;
        ebx = arg4 + 0xcu;
        esi = arg4 + 0x14u;
L_102ae1d2: ;
        d3 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * loc_28_f);
        g->ecx = ecx;
        fpush(g, d3);
        g->esp = sp0 - 0x40u;
        t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
        t5 = g->ecx;
        wr32(sp0 - 0x24u, t4);
        wr32(sp0 - 0x44u, arg2 - 3u);
        wr32(sp0 - 0x48u, t4);
        wr32(sp0 - 0x20u, 0x3f800000u);
        d6 = (double)(float)fr(g, d3 - (double)(int32_t)t4);
        wrf32(sp0 - 0x1cu, (float)d6);
        d7 = fr(g, d3 - (double)(int32_t)t4);
        d8 = (double)(float)fr(g, d7 * d7);
        wrf32(sp0 - 0x18u, (float)d8);
        d9 = (double)(float)fr(g, fr(g, d7 * d7) * d7);
        wrf32(sp0 - 0x14u, (float)d9);
        t10 = cow_cdecl(g, COW_IMG(0x102ae2b0u), 2, t4, arg2 - 3u);
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        wr32(sp0 - 0x50u, t10);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        g->ecx = sp0 - 0x20u;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x48u;
        t11 = cow_cdecl(g, COW_IMG(0x1027f000u), 3, sp0 - 0x10u, t10, sp0 - 0x20u);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x58u, ebx);
        g->edx = t13;
        g->esp = sp0 - 0x54u;
        cow_cdecl(g, COW_IMG(0x10274660u), 1, ebx);
        t14 = g->edx;
        eax = ebp + t4 * 0xcu + 8u;
        ecx = 0u;
        edx = t14;
L_102ae234: ;
        d15 = fr(g, fr(g, (double)rdf32(eax - 8u) * (double)rdf32(ecx * 4u + sp0 - 0x10u)) + (double)rdf32(esi - 8u));
        wrf32(esi - 8u, (float)d15);
        d16 = fr(g, fr(g, (double)rdf32(eax - 4u) * (double)rdf32(ecx * 4u + sp0 - 0x10u)) + (double)rdf32(esi - 4u));
        wrf32(esi - 4u, (float)d16);
        d17 = fr(g, fr(g, (double)rdf32(eax) * (double)rdf32(ecx * 4u + sp0 - 0x10u)) + (double)rdf32(esi));
        wrf32(esi, (float)d17);
        if ((int32_t)(ecx + 1u) <= 3)
        {
            eax = eax + 0xcu;
            ecx = ecx + 1u;
            goto L_102ae234;
        }
        t18 = rd32(sp0 + 4u) + 1u;
        t19 = rd32(sp0 - 0x2cu);
        t20 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t18);
        if ((int32_t)(t20 + 1u) < (int32_t)t19)
        {
            eax = t18;
            ecx = t19;
            ebx = ebx + 0xcu;
            esi = esi + 0xcu;
            goto L_102ae1d2;
        }
        ebx = rd32(sp0 - 0x3cu);
        edi = rd32(sp0 - 0x40u);
    }
    t21 = arg2 * 0xcu + ebp - 0xcu;
    wr32(sp0 - 0x3cu, t21);
    t22 = arg4 + arg3 * 0xcu - 0xcu;
    wr32(sp0 - 0x40u, t22);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t22, t21);
    g->ebx = ebx;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ae180(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
