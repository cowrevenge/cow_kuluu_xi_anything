/* f_0x10221030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10221030(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (arg1 != 0u) goto L_10221053;
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x102211b0u), self, 1, t1);
    t3 = g->edx;
    g->edx = t3;
    return (t2 & 0xffffff00u) | 1u;
L_10221053: ;
    wr32(sp0 - 0x18u, arg1);
    g->eax = arg1;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x1011d010u), 1, arg1);
    if ((int32_t)t4 <= (int32_t)rd32(self + 0x60u)) goto L_1022111d;
    t5 = self + rd32(sp0 + 8u) * 0xcbu;
    wr32(sp0 - 4u, t5);
    t6 = rd32(sp0 + 8u);
    edi = t5 + 0x74u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = t5 + 0x74u < t5;
    pf = PARITY((uint8_t)(t5 + 0x74u));
    af = (t5 ^ 0x74u ^ t5 + 0x74u) >> 4u & 1u;
    zf = t5 + 0x74u == 0u;
    sf = (int32_t)(t5 + 0x74u) < 0;
    of = ((t5 ^ t5 + 0x74u) & (t5 + 0x74u ^ 0x74u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t7 = ~ecx - 1u;
    edi = arg1;
    ecx = 0xffffffffu;
    cf = t7 < 2u;
    pf = PARITY((uint8_t)(t7 - 2u));
    af = (t7 ^ t7 - 2u) >> 4u & 1u;
    zf = t7 == 2u;
    sf = (int32_t)(t7 - 2u) < 0;
    of = ((t7 ^ 2u) & (t7 ^ t7 - 2u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (t7 - 2u != ~ecx - 1u)
    {
        ecx = ~ecx - 1u;
        ebx = t6;
        esi = t5 + 0x74u;
        loc_4 = t5;
        goto L_102210bf;
    }
    edx = t7 - 2u;
    ebx = t6;
    esi = t5 + 0x74u;
    loc_4 = t5;
    wr32(sp0 - 0x18u, edx);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, esi);
    g->eax = eax;
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x10312980u), 5, esi, arg1, edx, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        ecx = t9;
        goto L_102210bf;
    }
    eax = t8;
    edx = t10;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_102210bf: ;
    wr32(sp0 - 0x18u, 0xcau);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, esi);
    wr16(sp0 + 8u, 0x2020u);
    wr8(sp0 + 0xau, 0u);
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, esi, arg1, 0xcau);
    t11 = g->ecx;
    wr8(rd32(sp0 - 4u) + 0x13eu, 0u);
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
    t12 = 0xcau - (~ecx - 1u);
    wr32(sp0 - 0x24u, t12);
    wr32(sp0 - 0x28u, sp0 + 8u);
    wr32(sp0 - 0x2cu, esi);
    g->esp = sp0 - 0x20u;
    t13 = cow_call_regs(g, COW_IMG(0x10313560u), sp0 + 8u, g->ecx, t12, 1, 3, esi, sp0 + 8u, t12);
    t14 = g->edx;
    wr8(rd32(sp0 - 4u) + 0x13eu, 0u);
    wr8(self + 0x3a1u, 1u);
    wr32(sp0 - 0x18u, ebx);
    eax = t13;
    edx = t14;
    loc_18 = ebx;
L_10221193: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t17 = cow_call_regs(g, COW_IMG(0x10139ff0u), eax, rd32(COW_IMG(0x105781fcu)), g->edx, 0, 1, loc_18);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10221680u), self, 0);
    t20 = g->edx;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = t20;
    return (t19 & 0xffffff00u) | 1u;
L_1022111d: ;
    eax = arg1;
    ecx = self + rd32(sp0 + 8u);
    edx = rd32(sp0 + 8u) * 0x19u;
    ebx = self + rd32(sp0 + 8u) * 0xcbu;
    esi = self + rd32(sp0 + 8u) * 0xcbu + 0x74u;
    edi = rd32(sp0 + 8u);
L_10221137: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1022115b;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_10221157;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1022115b;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10221137;
    }
L_10221157: ;
    eax = 0u;
L_10221160: ;
    if (eax != 0u) goto L_1022116e;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1022115b: ;
    eax = -cf + 1u - cf;
    goto L_10221160;
L_1022116e: ;
    wr32(sp0 - 0x18u, 0xcau);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, ebx + 0x74u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_call_regs(g, COW_IMG(0x10312090u), ebx + 0x74u, g->ecx, g->edx, 1, 3, ebx + 0x74u, arg1, 0xcau);
    t16 = g->edx;
    wr8(ebx + 0x13eu, 0u);
    wr8(self + 0x3a1u, 0u);
    wr32(sp0 - 0x18u, edi);
    eax = t15;
    edx = t16;
    loc_18 = edi;
    goto L_10221193;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10221030(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
