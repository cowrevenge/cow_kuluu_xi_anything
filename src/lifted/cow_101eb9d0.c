/* f_0x101eb9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101eb9d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10663684u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101ebb0e;
    }
    ecx = rd32(COW_IMG(0x10663684u));
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101ebb0e;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101eacf0u), ecx, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101ebaff;
    }
    eax = t1;
    edx = t2;
    if ((uint32_t)(int16_t)arg2 - 1u > 3u) goto L_101ebaff;
    t3 = rd32(COW_IMG(0x101ebb14u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t3 - RD)
    {
    case 0x101eba0eu: goto L_101eba0e;
    case 0x101eba80u: goto L_101eba80;
    case 0x101ebabbu: goto L_101ebabb;
    case 0x101ebaedu: goto L_101ebaed;
    default: rt_fatal(g, COW_IMG(0x101eba07u), "switch");
    }
    return 0;
L_101eba0e: ;
    edi = eax + 0x3cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t21 = ~ecx - 1u;
    edi = COW_IMG(0x1036f9b0u);
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t22 = t21 + ~ecx + 3u;
    g->ecx = ~ecx - 1u;
    g->edx = t21;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t22, in_edi, in_ebx);
    t24 = g->ecx;
    t25 = g->edx;
    g->ebx = eax + 0x3cu;
    g->esp = sp0 - 0xcu;
    t26 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t23, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), eax + 0x3cu, t22);
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t27 = rd32(COW_IMG(0x10662d40u));
    t28 = rd32(rd32(COW_IMG(0x10662d40u)));
    t29 = cow_thiscall(g, rd32(t28 + 0x24u), t27, 1, t23);
    t30 = g->ecx;
    t31 = g->edx;
    if (t23 == 0u)
    {
        eax = t29;
        edx = t31;
        goto L_101ebaff;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    esi = t23;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
    t33 = g->edx;
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381fd8u));
    t35 = g->edx;
    g->ebx = in_ebx;
    g->edx = t35;
    return t34;
L_101eba80: ;
    if (rd8(eax + 1u) != 0u) goto L_101ebb0e;
    if (rd32(COW_IMG(0x10663ab8u)) == 0u) goto L_101ebaff;
    ecx = rd32(COW_IMG(0x10663ab8u));
    t14 = rd8(eax + 0x20u);
    t15 = rd32(eax + 0xcu);
    t16 = rd32(eax + 8u);
    g->edx = t15;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x101ffb60u), t16, ecx, g->edx, 0, 3, t16, t15, t14);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381fd8u));
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_101ebabb: ;
    if (rd32(COW_IMG(0x10663abcu)) == 0u) goto L_101ebaff;
    ecx = rd32(COW_IMG(0x10663abcu));
    t7 = rd8(eax + 0x20u);
    t8 = rd32(eax + 0xcu);
    t9 = rd32(eax + 8u);
    g->edx = t8;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10200be0u), ecx, 3, t9, t8, t7);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101ebaff;
    }
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101ebaed: ;
    t4 = (uint32_t)(int16_t)rd16(eax + 2u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x100e81a0u), 2, t4, COW_IMG(0x101ebb30u));
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_101ebaff: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t36 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381fd8u));
    t37 = g->edx;
    eax = t36;
    edx = t37;
L_101ebb0e: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb9d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eb9d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
