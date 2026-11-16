/* f_0x10127ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10127ab0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d15;
    double d24;
    double d31;
    double d39;
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 0x29u);
    wr32(sp0 - 0x38u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315210u), self, 3, arg1, 0x29u, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_10127bf2;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    t4 = eax - arg1 - 1u;
    if ((int32_t)t4 >= 32)
    {
        eax = t4;
        goto L_10127bf2;
    }
    eax = t4;
    esi = t4;
    if ((int32_t)esi < 1) goto L_10127bf2;
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, arg1 + 1u);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x20u, g->ecx, g->edx, 1, 3, sp0 - 0x20u, arg1 + 1u, esi);
    t5 = g->edx;
    wr8(esi + sp0 - 0x20u, 0u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t7 = g->edx;
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    t8 = cow_call_regs(g, COW_IMG(0x10080c70u), g->eax, sp0 - 0x20u, t7, 1, 1, sp0 - 0x20u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t6 == 0u)
    {
        eax = t8;
        edx = t10;
        goto L_10127bf2;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    ebx = t8;
    ebp = t6;
    if (ebx == 0u) goto L_10127bf2;
    if (ebp != ebx) goto L_10127b33;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10127b33: ;
    if (rd16(rd32(ebx + 0x70u) + 0x210u) != 0u)
    {
        esi = rd32(ebx + 0x70u) + 0x214u;
    }
    else
    {
        eax = rd32(ebx + 0x70u);
        esi = eax + 0x7cu;
    }
    edi = sp0 - 0x20u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    edi = sp0 - 0x20u;
    ecx = ~ecx - 1u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (zf)
    {
        eax = 0u;
    }
    else
    {
        eax = -cf + 1u - cf;
    }
    if (eax != 0u) goto L_10127bf2;
    g->eax = eax;
    g->edx = rd32(ebx);
    t11 = rd32(ebx);
    g->esp = sp0 - 0x30u;
    t12 = cow_thiscall(g, rd32(t11 + 0x1bcu), ebx, 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    d15 = (double)rdf32(t12);
    fpush(g, d15);
    t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
    t17 = g->edx;
    g->eax = rd32(ebx);
    t18 = rd32(ebx);
    t19 = cow_thiscall(g, rd32(t18 + 0x1bcu), ebx, 0);
    g->edx = rd32(ebx);
    t20 = rd32(ebx);
    t21 = cow_thiscall(g, rd32(t20 + 0x1bcu), ebx, 0);
    t22 = g->ecx;
    t23 = g->edx;
    g->edx = t23;
    d24 = (double)rdf32(t21 + 8u);
    fpush(g, d24);
    t25 = cow_call_regs(g, COW_IMG(0x10311c6cu), t21, g->ecx, g->edx, 1, 0);
    t26 = g->edx;
    g->eax = rd32(ebp);
    g->edx = t26;
    t27 = rd32(ebp);
    t28 = cow_thiscall(g, rd32(t27 + 0x1bcu), ebp, 0);
    t29 = g->ecx;
    t30 = g->edx;
    d31 = (double)rdf32(t28);
    fpush(g, d31);
    t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
    g->edx = rd32(ebp);
    t33 = rd32(ebp);
    cow_thiscall(g, rd32(t33 + 0x1bcu), ebp, 0);
    t34 = g->edx;
    g->eax = rd32(ebp);
    g->edx = t34;
    t35 = rd32(ebp);
    t36 = cow_thiscall(g, rd32(t35 + 0x1bcu), ebp, 0);
    t37 = g->ecx;
    t38 = g->edx;
    d39 = (double)rdf32(t36 + 8u);
    fpush(g, d39);
    t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t36, g->ecx, g->edx, 1, 0);
    if ((int32_t)((t32 - t16) * (t32 - t16) + (t40 - t25) * (t40 - t25)) >= 16)
    {
        eax = t40 - t25;
        edx = (t32 - t16) * (t32 - t16) + (t40 - t25) * (t40 - t25);
        goto L_10127bf2;
    }
    eax = t40 - t25;
    edx = (t32 - t16) * (t32 - t16) + (t40 - t25) * (t40 - t25);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10127bf2: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10127ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10127ab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
