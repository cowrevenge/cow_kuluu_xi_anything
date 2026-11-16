/* f_0x1028a600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028a600(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_1028a73d;
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->ecx = ~ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, ~ecx, COW_IMG(0x103b979cu), 0x14fu);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        ebx = t1;
        goto L_1028a65d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b979cu));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9874u), arg1);
    return 0u;
L_1028a65d: ;
    eax = arg1;
    edx = ebx - arg1;
L_1028a663: ;
    t7 = rd8(eax);
    wr8(eax + edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        goto L_1028a663;
    }
    ecx = ebx;
    esi = 0u;
L_1028a671: ;
    g->ebx = ebx;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, edx, 1, 4, ecx, COW_IMG(0x103b97ecu), in_edi, in_esi);
    t9 = g->edx;
    if (t8 == 0u)
    {
        edx = t9;
        goto L_1028a689;
    }
    eax = t8;
    edx = t9;
    ecx = 0u;
    esi = eax;
    goto L_1028a671;
L_1028a689: ;
    if (esi == 0u)
    {
        ecx = 0u;
        goto L_1028a728;
    }
    edi = esi;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u)
    {
        ecx = ~ecx - 1u;
        goto L_1028a728;
    }
    ecx = ~ecx - 1u;
    edi = esi;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    g->ecx = ~ecx;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, ~ecx, COW_IMG(0x103b979cu), 0x172u);
    t11 = g->ecx;
    eax = esi;
    ecx = t11;
    edx = t10 - esi;
    edi = t10;
L_1028a6c9: ;
    t12 = rd8(eax);
    wr8(eax + edx, (uint8_t)t12);
    if ((uint8_t)t12 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t12;
        goto L_1028a6c9;
    }
    eax = eax + 1u;
    ecx = (ecx & 0xffffff00u) | t12;
    if (edi != 0u) goto L_1028a70f;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b979cu));
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b984cu), esi);
    t16 = g->ecx;
    t17 = g->edx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0x177u);
    g->ebx = in_ebx;
    return 0u;
L_1028a70f: ;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0x17bu);
    g->ebx = in_ebx;
    return edi;
L_1028a728: ;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0x16cu);
L_1028a73d: ;
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028a600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
