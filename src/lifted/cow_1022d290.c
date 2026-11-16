/* f_0x1022d290 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_1022d290(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(rd32(sp0 + 0x14u)) != 0u)
    {
        if (rd32(arg1 + 4u) == 0u)
        {
            wr32(arg1 + 4u, 1u);
        }
    }
    if (rd32(arg1 + 4u) == 2u)
    {
        wr32(arg1 + 4u, 0u);
    }
    if (rd32(arg1 + 4u) > 3u)
    {
        ecx = ((int32_t)rd32(arg1) >= 16) - 1u & rd32(arg1);
        ebx = rd32(arg1 + 0xcu);
        esi = rd32(arg1 + 0x14u);
        loc_4 = (uint8_t)self;
        goto L_1022d301;
    }
    ecx = ((int32_t)rd32(arg1) >= 16) - 1u & rd32(arg1);
    edx = rd32(arg1 + 4u);
    ebx = rd32(arg1 + 0xcu);
    esi = rd32(arg1 + 0x14u);
    t1 = rd32(COW_IMG(0x1022d35cu) + edx * 4u);
    switch (t1 - RD)
    {
    case 0x1022d2eeu: goto L_1022d2ee;
    case 0x1022d2f5u: goto L_1022d2f5;
    case 0x1022d2fcu: goto L_1022d2fc;
    default: rt_fatal(g, COW_IMG(0x1022d2e7u), "switch");
    }
    return;
L_1022d2ee: ;
    loc_4 = (uint8_t)self | 0x100u;
L_1022d301: ;
    t2 = rd32(arg1 + 8u);
    wr8(sp0 + 0x14u, (uint8_t)t2);
    if ((uint8_t)t2 == 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        wr8(sp0 + 0x14u, (uint8_t)((ebx & 0xf0u) | edx));
        ebx = (ebx & 0xffffff00u) | (uint8_t)((ebx & 0xf0u) | edx);
    }
    if (rd8(arg1 + 0x27u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(arg1 + 0x27u);
        eax = (arg1 & 0xffffff00u) | (uint8_t)(loc_4 >> 0x10u);
        edx = (edx & 0xffffff00u) | loc_4 >> 0x18u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(arg1 + 0x27u);
        eax = (arg1 & 0xffffff00u) | rd8(arg1 + 0x18u);
        edx = (edx & 0xffffff00u) | 1u;
    }
    wr8(arg2, (uint8_t)(loc_4 >> 8u));
    wr8(arg3, rd8(sp0 + 0x14u));
    wr8(arg4, (uint8_t)ecx);
    wr32(arg6, esi);
    wr8(arg7, (uint8_t)edx);
    wr8(arg8, (uint8_t)eax);
    return;
L_1022d2f5: ;
    loc_4 = (uint8_t)self | 0x200u;
    goto L_1022d301;
L_1022d2fc: ;
    loc_4 = (uint8_t)self | 0x300u;
    goto L_1022d301;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d290(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022d290(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
