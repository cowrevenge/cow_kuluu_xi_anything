/* f_0x100ed650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ed650(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg2 <= 0)
    {
        esi = 0u;
    }
    else
    {
        ecx = self;
        ebx = 0u;
        esi = 0u;
L_100ed66c: ;
        if (rd8(arg3) == 0u) goto L_100ed6e6;
        if ((int32_t)(ebx & 0x80000007u) >= 0)
        {
            eax = (uint32_t)((int32_t)(ebx + ((uint32_t)((int32_t)ebx >> 0x1fu) & 7u)) >> 3u);
            edx = ebx & 0x80000007u;
        }
        else
        {
            eax = (uint32_t)((int32_t)(ebx + ((uint32_t)((int32_t)ebx >> 0x1fu) & 7u)) >> 3u);
            edx = ebx & 0x80000007u;
            edx = (edx - 1u | 0xfffffff8u) + 1u;
        }
        if ((int32_t)edx > 2)
        {
            ecx = rd8(arg3 + eax) << 8u | (uint8_t)(0xau - (uint8_t)edx);
            eax = (eax & 0xffff0000u) | (uint16_t)((0xau - (uint8_t)edx & 0x1fu) != 0u ? (rd8(arg3 + eax) << 8u | rd8(arg3 + eax + 1u)) >> (0xau - (uint8_t)edx & 0x1fu) : rd8(arg3 + eax) << 8u | rd8(arg3 + eax + 1u));
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)((2u - (uint8_t)edx & 0x1fu) != 0u ? rd8(arg3 + eax) >> (2u - (uint8_t)edx & 0x1fu) : rd8(arg3 + eax));
            ecx = (ecx & 0xffffff00u) | (uint8_t)(2u - (uint8_t)edx);
        }
        wr8(arg1 + esi, eax & 0x3fu);
        if ((eax & 0x3fu) == 0x3fu) goto L_100ed6d8;
        eax = (eax & 0xffffff00u) | (eax & 0x3fu);
        if ((uint8_t)eax != 0x3eu) goto L_100ed6c2;
        wr8(arg1 + esi, 0x20u);
L_100ed6dc: ;
        if (rd8(arg1 + esi) == 0u) goto L_100ed6f2;
L_100ed6e6: ;
        if ((int32_t)(esi + 1u) < (int32_t)arg2)
        {
            ebx = ebx + 6u;
            esi = esi + 1u;
            goto L_100ed66c;
        }
        esi = esi + 1u;
    }
L_100ed6f2: ;
    if (esi != arg2) goto L_100ed702;
    wr8(arg1 + arg2 - 1u, 0u);
    return 0u;
L_100ed6c2: ;
    if ((int8_t)eax >= 27) goto L_100ed6cd;
    wr8(arg1 + esi, (uint8_t)((uint8_t)eax + 0x60u));
    goto L_100ed6dc;
L_100ed6cd: ;
    if ((int8_t)eax >= 53) goto L_100ed6d8;
    wr8(arg1 + esi, (uint8_t)((uint8_t)eax + 0x26u));
    goto L_100ed6dc;
L_100ed6d8: ;
    wr8(arg1 + esi, 0u);
    goto L_100ed6dc;
L_100ed702: ;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ed650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ed650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
