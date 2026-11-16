/* f_0x101ca180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101ca180(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    g->ecx = self;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->ecx;
    edi = arg3;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x14u < sp0 - 0x18u;
    pf = PARITY((uint8_t)(sp0 - 0x14u));
    af = (sp0 - 0x18u ^ sp0 - 0x14u) >> 4u & 1u;
    zf = sp0 == 0x14u;
    sf = (int32_t)(sp0 - 0x14u) < 0;
    of = ((sp0 - 0x18u ^ sp0 - 0x14u) & (sp0 - 0x14u ^ 4u)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx - 1u <= 8u) goto L_101ca220;
    ecx = ~ecx - 1u;
    esi = t1;
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0xcu, rd32(arg3));
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = sp0 - 0xcu;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1, arg2, sp0 - 0xcu, arg4, in_ebp, in_ebx, in_edi, in_esi, rd32(arg3));
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, arg4);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)arg2);
    wr32(sp0 - 0x3cu, (uint32_t)(int16_t)t3);
    t4 = rd32(rd32(esi) + 0x1b0u);
    g->edx = rd32(esi);
    t5 = rd32(esi);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x1011fc80u), t4, 8, (uint32_t)(int16_t)t3, (uint32_t)(int16_t)arg2, 0x3f800000u, 0x3f800000u, arg4, 0u, 0u, 0u);
    t6 = g->edx;
    return (uint32_t)(int16_t)(t3 + ((t6 & 0xffff0000u) | (uint16_t)(rd16(t4 + 0x22u) - rd16(t4 + 0x20u))) - 1u);
L_101ca220: ;
    wr32(sp0 - 0x18u, arg4);
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    g->eax = arg4;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1, arg2, arg3, arg4, in_edi, in_esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    return (uint32_t)(int16_t)t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ca180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ca180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
