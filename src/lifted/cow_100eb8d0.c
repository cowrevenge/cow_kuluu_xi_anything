/* f_0x100eb8d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100eb8d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        edi = rd32(COW_IMG(0x104dfd98u));
        goto L_100eb8ea;
    }
    return 0xffffffffu;
L_100eb8ea: ;
    g->eax = arg1 * 0x37bu;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 <= 1u)
    {
        loc_4 = 0u;
        goto L_100eb92f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    edi = arg1 * 0xdecu + edi + 0x9894u;
    loc_4 = 0u;
L_100eb913: ;
    if (rd16(edi) == 0u)
    {
        loc_4 = loc_4 + 1u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)((uint8_t)ebx + 1u) < (uint8_t)t4)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        edi = edi + 0x2cu;
        goto L_100eb913;
    }
L_100eb92f: ;
    return loc_4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eb8d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
