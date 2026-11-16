/* f_0x10211990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10211990(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if (rd8(self + 0x14u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        t1 = rd32(self + 0x10u);
        wr8(self + 0x14u, 0u);
        t2 = rd32(self + 8u) - t1 * 0x2eu - 0x16u;
        wr32(self + 8u, t2);
        eax = t2;
        edx = 0xffffffeau - t1 * 0x2eu;
    }
    esi = COW_IMG(0x10385be4u);
    edi = sp0 - 0x20u;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t3 = cow_call_regs(g, COW_IMG(0x101c8c50u), eax, g->ecx, g->edx, 1, 4, arg1, arg2, in_edi, in_esi);
    t4 = g->edx;
    wr32(sp0 - 0x10u, t3);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, arg1);
    g->ebx = self;
    g->ecx = self;
    g->esp = sp0 - 0x30u;
    t5 = cow_call_regs(g, COW_IMG(0x102114d0u), g->eax, g->ecx, t4, 0, 2, arg1, arg2);
    t6 = g->ecx;
    wr32(sp0 - 0xcu, t5);
    edi = arg4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr16(sp0 - 4u, (uint16_t)~ecx);
    wr32(sp0 - 0x34u, sp0 - 0x16u);
    wr32(sp0 - 0x38u, sp0 - 0x14u);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 8u, arg2);
    g->edx = arg3;
    cow_cdecl(g, COW_IMG(0x101c8c90u), 3, arg3, sp0 - 0x14u, sp0 - 0x16u);
    t7 = g->edx;
    wr32(sp0 - 0x34u, 0xeu);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10211440u), self, 2, sp0 - 0x20u, 0xeu);
    t9 = g->edx;
    wr32(sp0 - 0x34u, 0x10u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    cow_thiscall(g, COW_IMG(0x10211440u), self, 2, sp0 - 0x10u, 0x10u);
    t10 = g->ecx;
    edi = arg4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x34u, ~ecx);
    wr32(sp0 - 0x38u, arg4);
    g->eax = eax;
    t11 = cow_thiscall(g, COW_IMG(0x10211440u), self, 2, arg4, ~ecx);
    t12 = g->ecx;
    t13 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x34u, t13);
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, arg1);
    cow_fastcall(g, COW_IMG(0x10211530u), t12, t13, 3, arg1, arg2, t13);
    t14 = rd32(self + 0x10u) + 1u;
    wr32(self + 0x10u, t14);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10211990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
