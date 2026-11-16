/* f_0x100769f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100769f0(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 <= 0)
    {
        esi = arg3;
        goto L_10076a5d;
    }
    if ((uint32_t)(int8_t)rd8(arg2) == 0u)
    {
        esi = arg3;
        goto L_10076a5d;
    }
    edx = (in_edx & 0xffffff00u) | rd8(arg2);
    ebx = (uint32_t)(int8_t)rd8(arg2);
    if (ebx != 0xfffffffdu) goto L_10076a31;
    if ((int32_t)arg3 < 6)
    {
        esi = arg3;
        goto L_10076a5d;
    }
    ecx = arg2;
    ebx = arg1;
    esi = arg3;
    edi = 0u;
L_10076a1a: ;
    if (rd8(ecx) == 0u) goto L_10076a5d;
    edx = (edx & 0xffffff00u) | rd8(ecx);
    wr8(ebx, (uint8_t)edx);
    if ((int32_t)(edi + 1u) < 6)
    {
        ecx = ecx + 1u;
        ebx = ebx + 1u;
        esi = esi - 1u;
        edi = edi + 1u;
        goto L_10076a1a;
    }
    esi = esi - 1u;
    return arg3 - esi;
L_10076a31: ;
    if ((int8_t)ebx >= 0) goto L_10076a56;
    if ((int32_t)arg3 < 2)
    {
        esi = arg3;
        goto L_10076a5d;
    }
    if (rd8(arg2 + 1u) == 0u)
    {
        esi = arg3;
        goto L_10076a5d;
    }
    wr8(arg1, (uint8_t)edx);
    wr8(arg1 + 1u, rd8(arg2 + 1u));
    return 2u;
L_10076a56: ;
    wr8(arg1, (uint8_t)edx);
    esi = arg3 - 1u;
L_10076a5d: ;
    return arg3 - esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100769f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100769f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
