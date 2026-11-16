/* f_0x10251090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10251090(Guest* g)
{
    double d15;
    double d16;
    double d18;
    double d19;
    double d20;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t2;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(arg1 + 0x18u) != 0u)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_102510ae;
    }
    eax = rd32(arg1 + 0x18u);
    wr32(sp0 - 8u, COW_IMG(0x10389830u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    eax = t1;
L_102510a9: ;
    g->esi = rd32(sp0 - 4u);
    return 0xffffffffu;
L_102510ae: ;
    wr32(sp0 - 8u, eax);
    t2 = rd32(arg1 + 8u);
    wr32(sp0 - 0xcu, t2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1026ef20u), 2, t2, eax);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(arg1 + 0xcu, t3);
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        goto L_102510a9;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0x200u);
    wr32(sp0 - 0x14u, eax);
    t6 = rd32(arg1) | 0x10u;
    wr32(arg1, t6);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1026f9c0u), 3, eax, 0x200u, 1u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)arg2 >= 0)
    {
        ecx = t7;
        edx = t8;
        wr32(sp0 - 0xcu, arg2);
        t12 = rd32(arg1 + 0xcu);
        wr32(sp0 - 0x10u, t12);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x1026efd0u), g->eax, ecx, edx, 1, 2, t12, arg2);
        t13 = g->edx;
        edx = t13;
    }
    else
    {
        wr32(sp0 - 0xcu, 0u);
        t9 = rd32(arg1 + 0xcu);
        wr32(sp0 - 0x10u, t9);
        t10 = rd32(arg1 + 8u);
        wr32(sp0 - 0x14u, t10);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x1026f0a0u), g->eax, t9, t10, 1, 3, t10, t9, 0u);
        t11 = g->edx;
        edx = t11;
    }
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1026f510u), 2, sp0 + 4u, 0u);
    t14 = g->ecx;
    d15 = (double)rdf32(sp0 + 0xcu);
    d16 = (double)rdf32(arg1 + rd32(arg1 + 0xcu) * 0xc0u + 0xa4u);
    t17 = rd32(arg1 + 0xcu);
    wr32(arg1 + t17 * 0xc0u + 0xa0u, 0x3f800000u);
    if ((cow_fsw(g, d15, d16, 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d15, d16, 0u) & 0x100u;
        ecx = t14;
        edi = arg1 + t17 * 0xc0u;
        d18 = (double)rdf32(sp0 + 0xcu);
        d19 = (double)rdf32(edi + 0xa8u);
        if (d18 <= d19)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d18, d19, 0u);
            d20 = fr(g, (double)rdf32(sp0 + 0xcu) / (double)rdf32(edi + 0xb0u));
            wr32(edi + 0xacu, arg3);
            fpush(g, d20);
            g->esp = sp0 - 8u;
            t21 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            wr32(edi + 0x98u, t21 * 2u);
        }
    }
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return rd32(arg1 + 0xcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10251090(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
