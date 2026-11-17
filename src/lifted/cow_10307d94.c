/* f_0x10307d94 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10307d94(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebp = g->ebp;

    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, rd32(rd32(in_eax + 4u)), rd32(in_eax + 4u), 3, in_eax, 1u, 0x400u);
    t2 = (self << 9u) - 0x200u;
    ebx = t2;
    esi = COW_IMG(0x10349450u);
    edi = t1;
    loc_8 = t1;
L_10307dc2: ;
    ecx = 0u;
L_10307dc4: ;
    t3 = cow_divs(g, 0xfe01u - rd8(ecx + esi) * 0x1feu, ebx);
    t4 = cow_mods(g, 0xfe01u - rd8(ecx + esi) * 0x1feu, ebx);
    wr32(edi, t3);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        edi = edi + 4u;
        goto L_10307dc4;
    }
    edx = t4;
    edi = edi + 4u;
    if ((int32_t)(esi + 0x10u) < (int32_t)COW_IMG(0x10349550u))
    {
        esi = esi + 0x10u;
        goto L_10307dc2;
    }
    g->ebx = rd32(sp0);
    g->esi = in_ebp;
    g->edi = loc_8;
    g->edx = edx;
    return loc_8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307d94(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307d94(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
