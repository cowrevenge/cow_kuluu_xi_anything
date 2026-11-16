/* f_0x100da5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100da5e0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 188u);

    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, 0xceu);
    g->ecx = self;
    g->esp = sp0 - 0x9cu;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xceu);
    t2 = g->ecx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100da66b;
    }
    ecx = t2;
    esi = t1;
    wr32(sp0 - 0xa0u, in_edi);
    wr32(sp0 - 0xa4u, 0u);
    edi = arg2;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0xa8u, 1u);
    t3 = ~ecx - 1u;
    wr32(sp0 - 0xacu, t3);
    wr32(sp0 - 0xb0u, arg2);
    wr32(sp0 - 0xb4u, 0x97u);
    wr32(sp0 - 0xb8u, sp0 - 0x98u);
    g->eax = sp0 - 0x98u;
    g->edx = arg2;
    g->esp = sp0 - 0xa0u;
    t4 = cow_thiscall(g, COW_IMG(0x101b7260u), rd32(COW_IMG(0x10662d40u)), 6, sp0 - 0x98u, 0x97u, arg2, t3, 1u, 0u);
    t5 = g->edx;
    wr32(sp0 - 0xa4u, sp0 - 0x98u);
    g->esp = sp0 - 0x98u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fd30u), sp0 - 0x98u, 3, sp0 - 0x98u, in_edi, in_esi);
    t6 = g->ecx;
    wr32(sp0 - 0xa8u, sp0 - 0x98u);
    wr32(sp0 - 0xacu, arg1);
    g->esp = sp0 - 0xa4u;
    t7 = cow_call_regs(g, COW_IMG(0x101bceb0u), arg1, g->ecx, g->edx, 1, 2, arg1, sp0 - 0x98u);
    if (t7 != 1u)
    {
        eax = t7;
        goto L_100da66b;
    }
    eax = t7;
    if (esi != eax) goto L_100da65c;
    g->esi = rd32(sp0 - 0x9cu);
    return (eax & 0xffffff00u) | (uint8_t)eax;
L_100da65c: ;
    if (esi != 2u) goto L_100da66b;
    g->esi = rd32(sp0 - 0x9cu);
    return (eax & 0xffffff00u) | 2u;
L_100da66b: ;
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100da5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100da5e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
