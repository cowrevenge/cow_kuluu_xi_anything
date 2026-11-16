/* f_0x10291220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10291220(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    if (rd32(COW_IMG(0x109a27a0u)) == 0u) goto L_1029123f;
    eax = rd32(COW_IMG(0x109a27a0u));
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x20u;
    cow_thiscall_cdecl(g, eax, arg2, 2, arg1, arg2);
    return;
L_1029123f: ;
    eax = arg2;
    ecx = self;
L_10291249: ;
    t1 = rd8(eax);
    wr8(eax + sp0 - arg2 - 0x20u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10291249;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    wr32(sp0 - 0x24u, in_edi);
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
    wr32(sp0 - 0x28u, sp0 - 0x20u);
    wr32(sp0 - 0x2cu, arg1);
    t2 = rd16(COW_IMG(0x10387ec4u));
    wr16(edi - 1u, (uint16_t)t2);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1031201eu), 5, arg1, sp0 - 0x20u, in_edi, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10291220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
