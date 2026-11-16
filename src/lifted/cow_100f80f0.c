/* f_0x100f80f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f80f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = arg1;
        goto L_100f81da;
    }
    if (arg4 == 0u)
    {
        eax = arg1;
        goto L_100f81da;
    }
    if (arg5 == 0u)
    {
        eax = arg1;
        goto L_100f81da;
    }
    if ((int32_t)arg3 < 0)
    {
        eax = arg3;
        goto L_100f81da;
    }
    if ((int32_t)arg3 >= 8)
    {
        eax = arg3;
        goto L_100f81da;
    }
    if (rd32(arg4) == rd32(arg5))
    {
        eax = rd32(arg5);
        ebp = 0u;
    }
    else
    {
        eax = rd32(arg5);
        ebp = 1u;
    }
    wr32(arg4, eax);
    esi = arg5 + 4u;
    edi = arg4 + 4u;
    ecx = 7u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(arg5) != 0u)
    {
        eax = rd32(arg5);
        wr16(arg4 + 0x20u, rd16(arg5 + 0x20u));
        t1 = rd32(arg5 + 0x24u);
        wr32(arg4 + 0x24u, t1);
        t2 = rd32(arg5 + 0x28u);
        wr32(arg4 + 0x28u, t2);
        edi = arg4 + 0x2cu;
        eax = 0u;
        ecx = 7u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        esi = arg5 + 0x2cu;
        edi = arg4 + 0x2cu;
        ecx = 6u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    else
    {
        wr16(arg4 + 0x20u, 0u);
        wr32(arg4 + 0x24u, 0u);
        wr32(arg4 + 0x28u, 0u);
        edi = arg4 + 0x2cu;
        eax = 0u;
        ecx = 7u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
    if (ebp != 0u)
    {
        if (arg2 == 1u) goto L_100f81b3;
        if (arg2 != 2u)
        {
            eax = arg2 - 2u;
            goto L_100f81d6;
        }
        edx = 1u;
        pf = PARITY((uint8_t)(arg2 - 2u));
        zf = arg2 == 2u;
        sf = (int32_t)(arg2 - 2u) < 0;
        of = arg2 - 1u == 0x80000000u;
L_100f81b8: ;
        t3 = rd32(arg1 + 0x2c7d0u) | edx << (arg3 & 0x1fu) | 0x10000000u;
        wr32(arg1 + 0x2c7d0u, t3);
        eax = arg1;
    }
L_100f81d6: ;
    return (eax & 0xffffff00u) | 1u;
L_100f81b3: ;
    edx = 0x1000u;
    pf = PARITY((uint8_t)(arg2 - 1u));
    zf = arg2 == 1u;
    sf = (int32_t)(arg2 - 1u) < 0;
    of = arg2 == 0x80000000u;
    goto L_100f81b8;
L_100f81da: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f80f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f80f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
