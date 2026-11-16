/* f_0x1018d2d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018d2d0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u) goto L_1018d2e8;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018d280u), self, 0);
    t1 = g->edx;
    g->edx = t1;
    return self;
L_1018d2e8: ;
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    t3 = rd32(self + 8u);
    wr32(self + 4u, t2);
    g->ecx = t2 + 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x1018d230u), 2, t3, t2 + 1u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 8u, t4);
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t5, t6, 1, 3, t4, t3, t2 + 1u);
    wr32(self, t7);
    eax = t7;
    ecx = arg1;
    edx = t7;
L_1018d316: ;
    t8 = rd8(ecx);
    wr8(edx, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = (eax & 0xffffff00u) | t8;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_1018d316;
    }
    edx = edx + 1u;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018d2d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018d2d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
