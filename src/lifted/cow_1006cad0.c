/* f_0x1006cad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1006cad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    g->eax = rd32(arg1);
    g->edx = in_edx;
    t1 = rd32(arg1);
    t2 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t1, in_esi);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1006cae6;
    }
    eax = t2;
    edx = t3;
    g->edx = edx;
    return eax;
L_1006cae6: ;
    t4 = rd32(arg1 + 4u);
    g->eax = eax;
    g->ecx = t4;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t4, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        ecx = t6;
        goto L_1006caf8;
    }
    eax = t5;
    edx = t7;
    g->edx = edx;
    return eax;
L_1006caf8: ;
    t8 = rd32(arg1 + 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t8;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t8, in_esi);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_1006cb0a;
    }
    eax = t9;
    edx = t11;
    g->edx = edx;
    return eax;
L_1006cb0a: ;
    t12 = rd32(arg1 + 0xcu);
    g->eax = t12;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t12, in_esi);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | (uint8_t)t13 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006cad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006cad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
