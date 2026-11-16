/* f_0x1031b1c5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031b1c5(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 14u);

    if ((rd32(in_edx + 4u) & 0x7ff00000u) == 0x7ff00000u) goto L_1031b1d7;
    eax = rd32(in_edx + 4u) & 0x7ff00000u;
    fpush(g, rdf64(in_edx));
    return eax;
L_1031b1d7: ;
    t1 = rd32(in_edx + 4u) | 0x7fff0000u;
    wr32(sp0 - 4u, t1);
    t2 = rd32(in_edx + 4u);
    t3 = rd32(in_edx);
    eax = t2;
    ecx = t3;
    cf = 0u;
    pf = PARITY((uint8_t)rd32(in_edx + 4u));
    zf = (rd32(in_edx + 4u) | 0x7fff0000u) == 0u;
    sf = (int32_t)(rd32(in_edx + 4u) | 0x7fff0000u) < 0;
    of = 0u;
    { /* shld eax, ecx, 0xb */ { unsigned c = (unsigned)(0xBu) & 31u; if (c) { uint32_t a = eax, b = ecx, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
    wr32(sp0 - 6u, eax);
    wr32(sp0 - 0xau, ecx << 0xbu);
    fpush(g, rdf80(sp0 - 0xau));
    return rd32(in_edx + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b1c5(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031b1c5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
