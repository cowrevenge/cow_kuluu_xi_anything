/* f_0x10292aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10292aa0(Guest* g)
{
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x24u) <= 0)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x24u);
        ecx = self;
        goto L_10292b62;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x24u);
    esi = rd32(sp0 + 4u);
    if ((int32_t)rd32(esi + 0x1cu) <= 0)
    {
        ecx = rd32(esi + 0x1cu);
        goto L_10292b62;
    }
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, arg2);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x1027d130u), arg2, g->ecx, g->edx, 1, 5, arg2, eax, sp0 + 4u, sp0 - 4u, in_esi);
    t2 = g->edx;
    d3 = (double)rdf32(sp0 + 8u);
    d4 = (double)rdf32(esi + 0x58u);
    if (!(d3 < d4))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
        edx = t2;
        ebx = t1;
    }
    else
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d4, 0u);
        edx = t2;
        ebx = t1;
        wr8(sp0 + 4u, 0u);
    }
    t5 = rd8(sp0 + 4u);
    wr32(esi + 0x58u, arg2);
    if ((uint8_t)t5 == 0u) goto L_10292b54;
    if (rd32(esi + 0x28u) == 0u) goto L_10292b54;
    wr32(sp0 - 0x10u, in_edi);
    if (ebx != 0u)
    {
        wr32(sp0 - 0x14u, ebx + 1u);
        wr32(sp0 - 0x18u, esi);
        g->edx = ebx + 1u;
        g->esp = sp0 - 0x10u;
        t9 = cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), arg2, 2, esi, ebx + 1u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x1cu, ebx);
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), t10, 8, esi, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), in_edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        eax = t12;
        edi = t9;
    }
    else
    {
        wr32(sp0 - 0x14u, ebx);
        wr32(sp0 - 0x18u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), arg2, 2, esi, ebx);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0;
        t8 = cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), t6, 8, esi, 1u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), in_edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
        eax = rd32(esi + 0x3cu);
        edi = t8;
    }
    t13 = rd32(esi + 0x4cu);
    wr32(sp0 - 0x14u, t13);
    t14 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x18u, t14);
    t15 = rd32(sp0 - 4u);
    wr32(sp0 - 0x1cu, t15);
    wr32(sp0 - 0x20u, edi);
    wr32(sp0 - 0x24u, eax);
    t16 = rd32(esi + 0x40u);
    wr32(sp0 - 0x28u, t16);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1027d1f0u), 6, t16, eax, edi, t15, t14, t13);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return rd32(esi + 0x40u);
L_10292b54: ;
    wr32(sp0 - 0x10u, ebx);
    wr32(sp0 - 0x14u, esi);
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall_cdecl(g, COW_IMG(0x10292dd0u), arg2, 2, esi, ebx);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    return t17;
L_10292b62: ;
    wr32(sp0 - 0x10u, 0x21du);
    wr32(sp0 - 0x14u, COW_IMG(0x103bb254u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb254u));
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x103bb404u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb404u), COW_IMG(0x103b379cu));
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
