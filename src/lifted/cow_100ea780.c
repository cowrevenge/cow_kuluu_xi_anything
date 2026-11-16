/* f_0x100ea780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ea780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 0xcu);
    t2 = rd8(rd32(sp0 + 0xcu) + 4u);
    wr8(sp0 + 0xcu, (uint8_t)t2);
    t3 = rd32(sp0 + 0xcu);
    t4 = rd8(t1 + 6u);
    wr8(arg1 + (uint8_t)t3 + 0x980fu, (uint8_t)t4);
    t5 = rd8(t1 + 5u);
    wr8(arg1 + (uint8_t)t3 + 0x9808u, (uint8_t)t5);
    if ((uint8_t)t5 == 0u)
    {
        eax = t1;
        edx = t3;
        esi = (uint8_t)t3;
    }
    else
    {
        eax = t1;
        edx = t3;
        esi = (uint8_t)t3;
        if (rd32(arg1 + esi * 4u + 0x9818u) == 0u)
        {
            ecx = rd32(arg1 + esi * 4u + 0x9818u);
            goto L_100ea7c8;
        }
        ecx = rd32(arg1 + esi * 4u + 0x9818u);
        if (ecx != 1u) goto L_100ea7db;
        ecx = ecx - 1u;
        loc_c = 2u;
L_100ea7ca: ;
        t6 = (ecx & 0xffffff00u) | rd8(eax + 5u);
        t7 = (eax & 0xffffff00u) | rd8(eax + 6u);
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_cdecl(g, COW_IMG(0x100eaab0u), 5, edx, t7, t6, loc_c, in_edi);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
L_100ea7db: ;
    wr32(arg1 + esi * 4u + 0x9818u, 2u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100ea7c8: ;
    loc_c = 1u;
    goto L_100ea7ca;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ea780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ea780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
