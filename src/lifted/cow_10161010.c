/* f_0x10161010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10161010(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104dfd98u));
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100e4be0u), 1, t1);
    t3 = g->edx;
    if ((int32_t)(uint16_t)t2 <= 0)
    {
        ebx = 0u;
    }
    else
    {
        edx = t3;
        edi = (uint16_t)t2;
        ebx = 0u;
        esi = 0u;
L_10161035: ;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x100e4c00u), 2, rd32(COW_IMG(0x104dfd98u)), esi);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            if (rd16(eax) >> 6u != arg1)
            {
                edx = rd16(eax) >> 6u;
            }
            else
            {
                edx = rd16(eax) >> 6u;
                ebx = ebx + rd8(eax + 3u);
            }
        }
        if ((int32_t)(esi + 1u) < (int32_t)edi)
        {
            esi = esi + 1u;
            goto L_10161035;
        }
    }
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10161010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10161010(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
