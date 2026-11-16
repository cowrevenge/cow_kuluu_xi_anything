/* f_0x10001e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10001e30(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_10001e6a;
    }
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
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ~ecx, in_edx, 1, 3, ~ecx, in_edi, in_esi);
    wr32(COW_IMG(0x103d3c88u), t1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_10001e5c;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_10001e5c: ;
    ecx = arg1;
    edx = eax;
L_10001e60: ;
    t2 = rd8(ecx);
    wr8(edx, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = (eax & 0xffffff00u) | t2;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_10001e60;
    }
    eax = (eax & 0xffffff00u) | t2;
L_10001e6a: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10001e30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
