/* f_0x1000d180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=2 */
uint32_t cow_fn_1000d180(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    unsigned zf;
    const uint32_t in_cf = g->cf;
    const uint32_t in_zf = g->zf;
    const uint32_t in_sf = g->sf;
    const uint32_t in_of = g->of;
    const uint32_t in_pf = g->pf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    ebx = arg2;
    edi = arg1;
    cf = in_cf;
    pf = in_pf;
    zf = in_zf;
    sf = in_sf;
    of = in_of;
    { /* shrd edi, ebx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = edi, b = ebx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); edi = (uint32_t)(r); } } }
    eax = edi;
    edx = (arg2 & 0xff0000u) | ebx >> 0x10u;
    cf = 0u;
    pf = PARITY((uint8_t)(ebx >> 0x10u));
    zf = ((arg2 & 0xff0000u) | ebx >> 0x10u) == 0u;
    sf = (int32_t)((arg2 & 0xff0000u) | ebx >> 0x10u) < 0;
    of = 0u;
    { /* shrd eax, edx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = eax, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
    edx = edx >> 0x10u | (arg2 & 0xff00u);
    cf = 0u;
    pf = PARITY((uint8_t)(edx >> 0x10u));
    zf = (edx >> 0x10u | (arg2 & 0xff00u)) == 0u;
    sf = (int32_t)(edx >> 0x10u | (arg2 & 0xff00u)) < 0;
    of = 0u;
    { /* shrd eax, edx, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = eax, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
    ebp = arg1;
    esi = arg2;
    { /* shld esi, ebp, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = esi, b = ebp, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); esi = (uint32_t)(r); } } }
    ebx = esi;
    edi = (arg1 & 0xff00u) | ebp << 0x10u;
    cf = 0u;
    pf = PARITY((uint8_t)esi);
    zf = esi == 0u;
    sf = (int32_t)esi < 0;
    of = 0u;
    { /* shld ebx, edi, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = ebx, b = edi, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ebx = (uint32_t)(r); } } }
    edi = edi << 0x10u | (arg1 & 0xff0000u);
    cf = 0u;
    pf = PARITY(0u);
    zf = (arg1 & 0xff000000u) == 0u;
    sf = (int32_t)(arg1 & 0xff000000u) < 0;
    of = 0u;
    { /* shld ebx, edi, 0x10 */ { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = ebx, b = edi, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ebx = (uint32_t)(r); } } }
    edi = edi << 0x10u | (arg1 & 0xff000000u);
    cf = 0u;
    pf = PARITY((uint8_t)ebx);
    zf = ebx == 0u;
    sf = (int32_t)ebx < 0;
    of = 0u;
    { /* shld ebx, edi, 8 */ { unsigned c = (unsigned)(0x8u) & 31u; if (c) { uint32_t a = ebx, b = edi, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ebx = (uint32_t)(r); } } }
    edx = edx >> 0x10u | (uint8_t)arg2;
    { /* shrd eax, edx, 8 */ { unsigned c = (unsigned)(0x8u) & 31u; if (c) { uint32_t a = eax, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
    g->edx = edx >> 8u | ebx;
    return eax | edi << 8u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000d180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000d180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
