/* f_0x100e3650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100e3650(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_100e36bf;
    }
    if (rd8(arg1) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        goto L_100e36bf;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    if (arg4 == 0u) goto L_100e36bf;
    if (rd8(arg4) == 0u) goto L_100e36bf;
    if ((int32_t)rd32(rd32(COW_IMG(0x104e0af4u)) + 4u) <= 1)
    {
        ecx = rd32(COW_IMG(0x104e0af4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104e0af4u));
        if ((uint8_t)eax >= 0x61u)
        {
            if ((uint8_t)eax <= 0x7au)
            {
                wr8(arg1, (uint8_t)((uint8_t)eax - 0x20u));
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax - 0x20u);
            }
        }
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xb7u, 0u, 0u);
    t2 = g->ecx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100e36bf;
    }
    eax = t1;
    ecx = t2;
    edx = t1;
    wr8(edx + 4u, (uint8_t)arg2);
    wr8(edx + 5u, (uint8_t)arg3);
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
    t3 = ~ecx - 1u;
    if (t3 <= 0xfu)
    {
        eax = t3;
        goto L_100e36c5;
    }
    eax = t3;
L_100e36bf: ;
    return eax & 0xffffff00u;
L_100e36c5: ;
    esi = arg1;
    edi = edx + 6u;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + edx + 6u, 0u);
    edi = arg4;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t4 = ~ecx - 1u;
    if (t4 <= 0x96u)
    {
        ebx = eax & 0xffffff00u;
        eax = t4;
    }
    else
    {
        ebx = eax & 0xffffff00u;
        eax = 0x96u;
    }
    esi = arg4;
    edi = edx + 0x15u;
    ecx = eax >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = eax & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr8(eax + edx + 0x15u, (uint8_t)ebx);
    g->eax = eax - 1u;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, edx, 0x16u, eax - 1u);
    return (t5 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e3650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e3650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
