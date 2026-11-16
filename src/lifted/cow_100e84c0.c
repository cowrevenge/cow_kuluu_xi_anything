/* f_0x100e84c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100e84c0(Guest* g)
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
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 536u);

    wr32(sp0 - 0x1f8u, in_esi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e850f;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    wr32(sp0 - 0x1fcu, eax + 0x10u);
    g->esp = sp0 - 0x1f8u;
    t1 = cow_cdecl(g, COW_IMG(0x100dddf0u), 1, eax + 0x10u);
    if ((int32_t)t1 < 10)
    {
        eax = t1;
        goto L_100e850f;
    }
    wr32(sp0 - 0x1fcu, sp0 + 8u);
    wr32(sp0 - 0x200u, arg1);
    wr32(sp0 - 0x204u, sp0 - 0x1f4u);
    g->ecx = arg1;
    g->edx = sp0 - 0x1f4u;
    g->esp = sp0 - 0x1f0u;
    cow_cdecl(g, COW_IMG(0x10314982u), 5, sp0 - 0x1f4u, arg1, sp0 + 8u, rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x208u, 2u);
    wr32(sp0 - 0x20cu, 1u);
    wr32(sp0 - 0x210u, 0x1fu);
    g->esp = sp0 - 0x204u;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x1fu, 1u, 2u);
    if (t4 != 0u)
    {
        esi = t4;
        goto L_100e8519;
    }
    eax = t4;
L_100e850f: ;
    return eax & 0xffffff00u;
L_100e8519: ;
    wr32(sp0 - 0x1fcu, in_edi);
    wr32(sp0 - 0x200u, 0x96u);
    wr32(sp0 - 0x204u, sp0 - 0x1f4u);
    wr32(sp0 - 0x208u, esi + 8u);
    t5 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x40e1cu);
    t6 = rd32(COW_IMG(0x104dfd98u));
    wr32(esi + 4u, t5);
    g->ecx = t5;
    g->edx = sp0 - 0x1f4u;
    g->esp = sp0 - 0x1fcu;
    cow_call_regs(g, COW_IMG(0x10312090u), t6, g->ecx, g->edx, 1, 3, esi + 8u, sp0 - 0x1f4u, 0x96u);
    t7 = g->ecx;
    t8 = g->edx;
    wr8(esi + 0x9du, 0u);
    edi = esi + 8u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    wr32(sp0 - 0x20cu, t9);
    wr32(sp0 - 0x210u, 0xcu);
    wr32(sp0 - 0x214u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x208u;
    t10 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0xcu, t9);
    g->esi = rd32(sp0 - 0x1f8u);
    return (t10 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e84c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e84c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
