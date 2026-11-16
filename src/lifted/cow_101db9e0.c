/* f_0x101db9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101db9e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 3u) goto L_101db9f8;
    if ((uint32_t)(int16_t)arg1 != 4u)
    {
        eax = (uint32_t)(int16_t)arg1 - 4u;
        edx = in_edx;
        goto L_101dba26;
    }
    eax = (uint32_t)(int16_t)arg1 - 4u;
L_101dba01: ;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 1, 0x3eu);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101dba26;
    }
    g->eax = rd32(COW_IMG(0x10663468u));
    g->edx = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    t3 = rd32(COW_IMG(0x10663468u));
    t4 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->esp = sp0;
    t5 = cow_thiscall(g, rd32(t4 + 0x54u), rd32(t3 + 0x58u), 0);
    t6 = g->edx;
    if (t5 == 0x11u)
    {
        eax = t5;
        edx = t6;
        goto L_101dba26;
    }
    eax = t5;
    edx = t6;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101db9f8: ;
    eax = (uint32_t)(int16_t)arg1 - 3u;
    goto L_101dba01;
L_101dba26: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101db9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101db9e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
