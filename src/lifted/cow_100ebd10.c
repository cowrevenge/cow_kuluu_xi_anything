/* f_0x100ebd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ebd10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100ebd37;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x42u, (uint8_t)arg1, (uint8_t)arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100ebd3c;
    }
    eax = t1;
L_100ebd37: ;
    return eax & 0xffffff00u;
L_100ebd3c: ;
    wr8(eax + 4u, (uint8_t)arg1);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 6u, 0u);
    wr32((uint8_t)arg1 * 0x58u + rd32(COW_IMG(0x104dfd98u)) + 0x1954cu, 1u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebd10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
