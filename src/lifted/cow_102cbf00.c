/* f_0x102cbf00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102cbf00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;

    eax = rd32(sp0 + 4u);
    loc_4 = 0x20u;
L_102cbf13: ;
    t1 = rd32(eax + 4u) * 2u;
    t2 = rd32(eax);
    wr32(sp0 + 4u, t1);
    t3 = rd32(eax + 8u) * 2u;
    edx = t2 * 2u;
    ebp = rd32(eax + 0xcu) * 2u;
    eax = eax + 0x10u;
    loc_8 = 7u;
    loc_c = t3;
L_102cbf41: ;
    if (edx >= rd32(eax) * 2u)
    {
        ebx = rd32(eax + 0xcu) * 2u;
        esi = rd32(eax + 4u) * 2u;
        edi = rd32(eax + 8u) * 2u;
        eax = eax + 0x10u;
    }
    else
    {
        ecx = rd32(eax) * 2u;
        ebx = rd32(eax + 0xcu) * 2u;
        esi = rd32(eax + 4u) * 2u;
        edi = rd32(eax + 8u) * 2u;
        eax = eax + 0x10u;
        edx = ecx;
    }
    if (rd32(sp0 + 4u) < esi)
    {
        wr32(sp0 + 4u, esi);
    }
    if (loc_c < edi)
    {
        loc_c = edi;
    }
    if (ebp < ebx)
    {
        ebp = ebx;
    }
    if (loc_8 != 1u)
    {
        loc_8 = loc_8 - 1u;
        goto L_102cbf41;
    }
    t4 = rd32(sp0 + 8u);
    wr32(t4, edx >> 1u);
    t5 = rd32(sp0 + 4u) >> 1u;
    wr32(t4 + 0x80u, t5);
    wr32(t4 + 0x100u, loc_c >> 1u);
    wr32(t4 + 0x180u, ebp >> 1u);
    wr32(sp0 + 8u, t4 + 4u);
    if (loc_4 != 1u)
    {
        loc_4 = loc_4 - 1u;
        goto L_102cbf13;
    }
    edx = loc_c >> 1u;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cbf00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cbf00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
