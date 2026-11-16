/* f_0x1021e550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1021e550(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_1021e576;
    if (arg6 == 0u)
    {
        loc_4 = 0u;
        goto L_1021e65b;
    }
    wr8(arg6, 0u);
    return rd32(sp0 + 0x10u);
L_1021e576: ;
    if ((int32_t)arg5 <= 1)
    {
        loc_4 = 0u;
    }
    else
    {
        ebp = 1u;
        loc_4 = 0u;
L_1021e58f: ;
        if ((int32_t)(ebp & 0x80000007u) >= 0)
        {
            eax = (uint32_t)((int32_t)(ebp + ((uint32_t)((int32_t)ebp >> 0x1fu) & 7u)) >> 3u);
            ecx = ebp & 0x80000007u;
            pf = PARITY(ebp & 7u);
            zf = (ebp & 0x80000007u) == 0u;
            sf = (int32_t)(ebp & 0x80000007u) < 0;
            of = 0u;
        }
        else
        {
            eax = (uint32_t)((int32_t)(ebp + ((uint32_t)((int32_t)ebp >> 0x1fu) & 7u)) >> 3u);
            ecx = ebp & 0x80000007u;
            pf = PARITY((uint8_t)((ecx - 1u | 0xfffffff8u) + 1u));
            zf = (ecx - 1u | 0xfffffff8u) + 1u == 0u;
            sf = (int32_t)((ecx - 1u | 0xfffffff8u) + 1u) < 0;
            of = (ecx - 1u | 0xfffffff8u) + 1u == 0x80000000u;
            ecx = (ecx - 1u | 0xfffffff8u) + 1u;
        }
        if ((rd8(arg1 + eax) & (uint8_t)(1u << (ecx & 0x1fu))) != 0u)
        {
            edx = 1u << (ecx & 0x1fu);
            goto L_1021e611;
        }
        edx = 1u << (ecx & 0x1fu);
        if (((uint8_t)edx & rd8(arg2 + eax)) == 0u) goto L_1021e63b;
        ecx = (arg1 & 0xffffff00u) | rd8(arg2 + eax);
        wr8(arg2 + eax, (uint8_t)~(uint8_t)edx & (uint8_t)ecx);
        if ((int32_t)arg5 <= 0)
        {
            eax = 0u;
            loc_4 = loc_4 + 1u;
            goto L_1021e5e9;
        }
        eax = 0u;
        loc_4 = loc_4 + 1u;
L_1021e5da: ;
        if (rd16(arg3 + eax * 2u) == ebp) goto L_1021e5e9;
        if ((int32_t)(eax + 1u) < (int32_t)arg5)
        {
            eax = eax + 1u;
            goto L_1021e5da;
        }
        eax = eax + 1u;
L_1021e5e9: ;
        if ((int32_t)eax < (int32_t)(arg5 - 1u))
        {
            t1 = arg5 - 1u - eax;
            esi = arg3 + eax * 2u + 2u;
            edi = arg3 + eax * 2u;
            ecx = t1;
            while (ecx) { wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u); ecx--; }
            eax = eax + t1;
        }
        wr16(arg3 + eax * 2u, 0u);
        eax = rd32(sp0 + 0x10u) - 1u;
L_1021e637: ;
        wr32(sp0 + 0x10u, eax);
L_1021e63b: ;
        if ((int32_t)(ebp + 1u) < (int32_t)arg5)
        {
            ebp = ebp + 1u;
            goto L_1021e58f;
        }
    }
    if (arg6 != 0u)
    {
        wr8(arg6, loc_4 != 0u);
    }
L_1021e65b: ;
    return rd32(sp0 + 0x10u);
L_1021e611: ;
    if (((uint8_t)edx & rd8(arg2 + eax)) != 0u) goto L_1021e63b;
    ecx = (arg2 & 0xffffff00u) | rd8(arg2 + eax);
    wr8(arg2 + eax, (uint8_t)(ecx | edx));
    t2 = rd32(sp0 + 0x10u);
    wr16(arg3 + t2 * 2u, (uint16_t)ebp);
    eax = t2 + 1u;
    loc_4 = loc_4 + 1u;
    goto L_1021e637;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021e550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
