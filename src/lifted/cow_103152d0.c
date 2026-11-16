/* f_0x103152d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103152d0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint8_t)self >= 0x40u) goto L_103152ea;
    if ((uint8_t)self >= 0x20u) goto L_103152e0;
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    cf = (uint8_t)self < 0x20u;
    pf = PARITY((uint8_t)((uint8_t)self - 0x20u));
    zf = (uint8_t)((uint8_t)self - 0x20u) == 0u;
    sf = (int8_t)((uint8_t)self - 0x20u) < 0;
    of = (((uint8_t)self ^ 0x20u) & ((uint8_t)self ^ (uint8_t)((uint8_t)self - 0x20u))) >> 7u;
    { /* shrd eax, edx, cl */ { unsigned c = (unsigned)((uint8_t)ecx) & 31u; if (c) { uint32_t a = eax, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
    g->edx = edx >> (ecx & 0x1fu);
    return eax;
L_103152e0: ;
    g->edx = 0u;
    return in_edx >> (self & 0x1fu);
L_103152ea: ;
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103152d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103152d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
