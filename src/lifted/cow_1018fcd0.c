/* f_0x1018fcd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018fcd0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    t1 = rd32(sp0 + 4u);
    edi = t1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t2 = ~ecx - 1u;
    wr32(sp0 + 4u, t2);
    if ((int32_t)t2 <= 0)
    {
        ebx = t1;
        ebp = 0u;
        goto L_1018fd23;
    }
    ecx = t2;
    edx = in_edx;
    ebx = t1;
    ebp = 0u;
    esi = 0u;
L_1018fcf0: ;
    t3 = (eax & 0xffffff00u) | rd8(ebx + esi);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, t3, 0u);
    t5 = g->edx;
    if ((int32_t)(esi + t4) > (int32_t)rd32(sp0 + 4u))
    {
        eax = t4;
        ecx = rd32(sp0 + 4u);
        edx = t5;
        esi = esi + t4;
    }
    else
    {
        eax = t4;
        edx = t5;
        edi = ebx + esi;
        esi = esi + t4;
        if ((int32_t)eax <= 0)
        {
            ecx = 0u;
            goto L_1018fd1d;
        }
        ecx = 0u;
L_1018fd11: ;
        t6 = rd8(ecx + edi);
        wr8(ebp + ebx, (uint8_t)t6);
        if ((int32_t)(ecx + 1u) < (int32_t)eax)
        {
            ecx = ecx + 1u;
            edx = (edx & 0xffffff00u) | t6;
            ebp = ebp + 1u;
            goto L_1018fd11;
        }
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t6;
        ebp = ebp + 1u;
    }
L_1018fd1d: ;
    if ((int32_t)esi < (int32_t)rd32(sp0 + 4u)) goto L_1018fcf0;
L_1018fd23: ;
    wr8(ebp + ebx, 0u);
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018fcd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018fcd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
