/* f_0x100e4240 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e4240(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(rd8(arg1 + 9u) - 1u) <= 0)
    {
        eax = rd8(arg1 + 9u) - 1u;
    }
    else
    {
        eax = rd8(arg1 + 9u) - 1u;
        ebx = in_ebx;
        ebp = in_ebp;
L_100e4252: ;
        t1 = (ebp & 0xffff0000u) | rd16(arg1 + eax * 2u + 0xau);
        if ((int32_t)eax <= 0)
        {
            ebp = t1;
            goto L_100e4292;
        }
        edx = 0u;
        ebp = t1;
        esi = eax;
        edi = t1;
L_100e4261: ;
        if (rd16(arg1 + edx * 2u + 0xau) <= (uint16_t)edi)
        {
            ebx = (ebx & 0xffff0000u) | rd16(arg1 + edx * 2u + 0xau);
        }
        else
        {
            ebx = (ebx & 0xffff0000u) | rd16(arg1 + edx * 2u + 0xau);
            esi = edx;
            edi = ebx;
        }
        if ((int32_t)(edx + 1u) < (int32_t)eax)
        {
            edx = edx + 1u;
            goto L_100e4261;
        }
        edx = edx + 1u;
        if (esi != eax)
        {
            wr16(arg1 + esi * 2u + 0xau, (uint16_t)ebp);
            wr16(arg1 + eax * 2u + 0xau, (uint16_t)edi);
            t2 = rd8(arg1 + esi + 0x1au);
            t3 = rd8(arg1 + eax + 0x1au);
            wr8(arg1 + esi + 0x1au, (uint8_t)t3);
            wr8(arg1 + eax + 0x1au, (uint8_t)t2);
            ebx = (ebx & 0xffffff00u) | t3;
        }
L_100e4292: ;
        if ((int32_t)(eax - 1u) > 0)
        {
            eax = eax - 1u;
            goto L_100e4252;
        }
        eax = eax - 1u;
    }
    if (rd16(arg1 + 6u) < 0x196au)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + 6u);
        goto L_100e42b6;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1 + 6u);
    if ((uint16_t)eax >= 0x1972u) goto L_100e42b6;
    eax = (uint16_t)eax - 0x96au;
L_100e42d3: ;
    t4 = cow_divu(g, (rd8(arg1 + 9u) + 5u) * (rd16(arg1 + 0xau) + 7u) * (eax + 3u), 0x7fu);
    t5 = cow_modu(g, (rd8(arg1 + 9u) + 5u) * (rd16(arg1 + 0xau) + 7u) * (eax + 3u), 0x7fu);
    wr8(arg1 + 4u, (uint8_t)t5);
    return (t4 & 0xffffff00u) | 1u;
L_100e42b6: ;
    if ((uint16_t)eax < 0x108eu) goto L_100e42ce;
    if ((uint16_t)eax >= 0x1096u) goto L_100e42ce;
    eax = (uint16_t)eax - 0x8eu;
    goto L_100e42d3;
L_100e42ce: ;
    eax = (uint16_t)eax;
    goto L_100e42d3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4240(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4240(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
