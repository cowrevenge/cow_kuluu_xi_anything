/* f_0x10312980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10312980(Guest* g)
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
    unsigned zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        ecx = arg3;
    }
    else
    {
        edi = arg1;
        eax = 0u;
        ecx = arg3;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = arg2;
        edi = arg1;
        ecx = -ecx + arg3;
        cf = -ecx + arg3 < -ecx;
        pf = PARITY((uint8_t)(-ecx + arg3));
        af = (-ecx ^ arg3 ^ -ecx + arg3) >> 4u & 1u;
        zf = -ecx + arg3 == 0u;
        sf = (int32_t)(-ecx + arg3) < 0;
        of = ((-ecx ^ -ecx + arg3) & (arg3 ^ -ecx + arg3)) >> 0x1fu;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (rd8(esi - 1u) > rd8(edi - 1u))
        {
            ecx = 0u;
            goto L_103129af;
        }
        zf = (uint8_t)(rd8(esi - 1u) - rd8(edi - 1u)) == 0u;
        if (zf)
        {
            ecx = 0u;
            goto L_103129b1;
        }
        ecx = 0xfffffffeu;
L_103129af: ;
        ecx = ~ecx;
    }
L_103129b1: ;
    return ecx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10312980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
