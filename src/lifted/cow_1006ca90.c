/* f_0x1006ca90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1006ca90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = rd32(arg1);
    t2 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t1, in_esi);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        edx = t3;
        goto L_1006caa6;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return eax;
L_1006caa6: ;
    t4 = rd32(arg1 + 4u);
    g->ecx = t4;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t4, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        ecx = t6;
        goto L_1006cab8;
    }
    eax = t5;
    edx = t7;
    g->edx = edx;
    return eax;
L_1006cab8: ;
    t8 = rd32(arg1 + 8u);
    g->edx = t8;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t8, in_esi);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | (uint8_t)t9 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006ca90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006ca90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
