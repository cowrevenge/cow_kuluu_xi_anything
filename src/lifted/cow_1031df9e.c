/* f_0x1031df9e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031df9e(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    double x0;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_ebx);
    if ((arg2 >> 0x10u & 0x7ff0u) != 0x7ff0u)
    {
        eax = (in_eax & 0xffff0000u) | (arg2 >> 0x10u & 0x7ff0u);
        x0 = rdf64(sp0 + 4u);
    }
    else
    {
        wr16(sp0 - 6u, arg2 >> 0x10u | 0x7fffu);
        eax = arg2;
        ebx = arg1;
        cf = 0u;
        pf = PARITY((uint8_t)(arg2 >> 0x10u | 0x7fffu));
        zf = (arg2 >> 0x10u | 0x7fffu) == 0u;
        sf = (int16_t)(arg2 >> 0x10u | 0x7fffu) < 0;
        of = 0u;
        { /* shld eax, ebx, 0xb */ { unsigned c = (unsigned)(0xBu) & 31u; if (c) { uint32_t a = eax, b = ebx, r; r = (a << c) | (b >> (32 - c)); cf = (a >> (32 - c)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); eax = (uint32_t)(r); } } }
        wr32(sp0 - 0xau, eax);
        wr32(sp0 - 0xeu, ebx);
        x0 = rdf80(sp0 - 0xeu);
    }
    fpush(g, x0);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031df9e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031df9e(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
