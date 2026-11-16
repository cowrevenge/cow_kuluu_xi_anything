/* f_0x100397a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100397a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    unsigned zf;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

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
    if (~ecx - 1u >= 0x10u)
    {
        ecx = 0x10u;
    }
    else
    {
        ecx = ~ecx - 1u;
        edi = arg1;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        ecx = ~ecx - 1u;
    }
    if ((int32_t)ecx <= 0)
    {
        ebp = 0u;
        goto L_100397e9;
    }
    eax = self;
    ebx = in_ebx;
    ebp = ecx;
    edi = ecx;
L_100397da: ;
    t1 = rd8(arg1 + eax - self);
    wr8(eax, (uint8_t)t1);
    if (edi != 1u)
    {
        eax = eax + 1u;
        ebx = (ebx & 0xffffff00u) | t1;
        edi = edi - 1u;
        goto L_100397da;
    }
    if ((int32_t)ecx >= 16)
    {
        edx = self;
        goto L_10039804;
    }
L_100397e9: ;
    edi = ebp + self;
    eax = 0u;
    ecx = (0x10u - ebp) >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = 0x10u - ebp & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edx = 0x10u - ebp;
L_10039804: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100397a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100397a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
