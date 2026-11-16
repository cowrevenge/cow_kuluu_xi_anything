/* f_0x10067d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10067d90(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 1040u);

    wr32(sp0 - 0x404u, in_esi);
    wr32(sp0 - 0x408u, in_edi);
    eax = rd32(self + 4u);
    ecx = self;
    edx = sp0 - 0x400u - rd32(self + 4u);
L_10067da3: ;
    t1 = rd8(eax);
    wr8(eax + edx, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_10067da3;
    }
    ecx = (ecx & 0xffffff00u) | t1;
    edi = sp0 - 0x400u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x40cu, sp0 - 0x400u);
    t2 = rd16(COW_IMG(0x1034f2b8u));
    wr16(edi - 1u, (uint16_t)t2);
    g->esp = sp0 - 0x408u;
    cow_fastcall(g, COW_IMG(0x100679e0u), self, edx, 1, sp0 - 0x400u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10067d90(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
