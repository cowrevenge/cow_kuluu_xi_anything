/* f_0x101bb130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101bb130(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edx = COW_IMG(0x1060161bu);
    ebx = in_ebx;
    ebp = 0u;
    esi = 0u;
L_101bb13d: ;
    t1 = rd32(edx - 0x1b3u);
    t2 = rd8(edx);
    wr8(edx, (uint8_t)(t2 + 1u));
    if (t1 == 0u)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)(t2 + 1u);
    }
    else
    {
        eax = edx - 0x1b3u;
        ecx = t1;
        ebx = (ebx & 0xffffff00u) | (uint8_t)(t2 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t3 = cow_cdecl(g, COW_IMG(0x101bb100u), 1, eax);
        t4 = g->ecx;
        t5 = g->edx;
        if ((uint8_t)t3 == 0u)
        {
            edx = t5;
        }
        else
        {
            ecx = t4;
            edx = t5;
            edi = edx + 1u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            ebp = ebp + 1u;
            esi = esi + ~ecx + 8u;
        }
    }
    wr8(edx, (uint8_t)((uint8_t)ebx - 1u));
    if ((int32_t)(edx + 0x294u) < (int32_t)COW_IMG(0x106219bbu))
    {
        edx = edx + 0x294u;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
        goto L_101bb13d;
    }
    wr32(arg1 + 0x48u, esi);
    wr32(arg1 + 0x44u, ebp);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101bb130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
