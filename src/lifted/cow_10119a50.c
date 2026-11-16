/* f_0x10119a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10119a50(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self + 0xcu, arg1);
    t1 = rd32(arg1);
    t2 = rd16(rd32(arg1) + 2u);
    t3 = rd16(rd32(arg1) + 4u);
    t4 = rd16(rd32(arg1) + 0xau);
    t5 = rd16(rd32(arg1) + 0xcu);
    wr16(self + 0x32u, (uint16_t)t2);
    wr16(self + 0x34u, (uint16_t)t3);
    wr16(self + 0x36u, (uint16_t)(((in_ebx & 0xffff0000u) | t4) + ((t1 & 0xffff0000u) | t2)));
    wr16(self + 0x38u, (uint16_t)(((self & 0xffff0000u) | t3) + ((in_edi & 0xffff0000u) | t5)));
    t6 = rd32(arg1);
    t7 = rd16(rd32(arg1) + 0x12u);
    wr32(self + 0x40u, 0u);
    wr16(self + 0x3au, (uint16_t)t7);
    if (rd32(arg1 + 8u) == 0u)
    {
        eax = t6;
        ecx = (((self & 0xffff0000u) | t3) + ((in_edi & 0xffff0000u) | t5) & 0xffff0000u) | t7;
    }
    else
    {
        ecx = (((self & 0xffff0000u) | t3) + ((in_edi & 0xffff0000u) | t5) & 0xffff0000u) | t7;
        ebx = rd32(arg1 + 8u);
        edi = ebx;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx == 1u)
        {
            ecx = ~ecx - 1u;
        }
        else
        {
            ecx = ~ecx - 1u;
            wr32(self + 0x40u, ebx);
        }
    }
    wr32(self + 0x44u, 0u);
    if (rd32(arg1 + 0xcu) != 0u)
    {
        esi = rd32(arg1 + 0xcu);
        edi = esi;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (~ecx != 1u)
        {
            wr32(self + 0x44u, esi);
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119a50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119a50(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
