/* f_0x100eb800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100eb800(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100eb83a;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 <= 1u)
    {
        eax = t1;
        goto L_100eb83a;
    }
    ecx = t2;
    edx = t3;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = eax + 0x9894u;
L_100eb821: ;
    if (rd16(esi) == 0u) goto L_100eb83f;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)((uint8_t)ebx + 1u) < (uint8_t)t4)
    {
        ecx = t5;
        edx = t6;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        esi = esi + 0x2cu;
        goto L_100eb821;
    }
    eax = t4;
L_100eb83a: ;
    return eax & 0xffffff00u;
L_100eb83f: ;
    wr8(arg1, (uint8_t)ebx);
    return (arg1 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eb800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
