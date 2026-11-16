/* f_0x1032363e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1032363e(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_divs(g, rd32(sp0 + 8u), 0x20u);
    t2 = cow_mods(g, rd32(sp0 + 8u), 0x20u);
    t3 = cow_divs(g, rd32(sp0 + 8u), 0x20u);
    t4 = cow_mods(g, rd32(sp0 + 8u), 0x20u);
    wr32(sp0 + 8u, 0u);
    edx = t4;
    ebx = 0x20u - t4;
    esi = ~(0xffffffffu << (t4 & 0x1fu));
    edi = arg1;
    loc_8 = 3u;
    loc_10 = t1;
L_10323674: ;
    t5 = rd32(edi) & esi;
    t6 = rd32(edi) >> (edx & 0x1fu) | rd32(sp0 + 8u);
    wr32(edi, t6);
    t7 = t5 << (ebx & 0x1fu);
    wr32(sp0 + 8u, t7);
    if (loc_8 != 1u)
    {
        edi = edi + 4u;
        loc_8 = loc_8 - 1u;
        goto L_10323674;
    }
    ecx = 8u;
    ebx = 2u;
    esi = loc_10 << 2u;
    edi = loc_10;
L_103236a6: ;
    if ((int32_t)ebx < (int32_t)edi)
    {
        wr32(arg1 + ecx, 0u);
    }
    else
    {
        t8 = rd32(arg1 + ecx - esi);
        wr32(arg1 + ecx, t8);
    }
    if ((int32_t)(ecx - 4u) >= 0)
    {
        ecx = ecx - 4u;
        ebx = ebx - 1u;
        goto L_103236a6;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1032363e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1032363e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
