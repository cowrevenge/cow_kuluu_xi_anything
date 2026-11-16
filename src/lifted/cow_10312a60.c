/* f_0x10312a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10312a60(Guest* g)
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

    if ((uint8_t)self >= 0x40u) goto L_10312a7a;
    if ((uint8_t)self >= 0x20u) goto L_10312a70;
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    cf = (uint8_t)self < 0x20u;
    pf = PARITY((uint8_t)((uint8_t)self - 0x20u));
    zf = (uint8_t)((uint8_t)self - 0x20u) == 0u;
    sf = (int8_t)((uint8_t)self - 0x20u) < 0;
    of = (((uint8_t)self ^ 0x20u) & ((uint8_t)self ^ (uint8_t)((uint8_t)self - 0x20u))) >> 7u;
    { /* shld edx, eax, cl */ { unsigned c = (unsigned)((uint8_t)ecx) & 31u; if (c) { uint32_t a = edx, b = eax, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edx = (uint32_t)(r); } } }
    g->edx = edx;
    return eax << (ecx & 0x1fu);
L_10312a70: ;
    g->edx = in_eax << (self & 0x1fu);
    return 0u;
L_10312a7a: ;
    g->edx = 0u;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
