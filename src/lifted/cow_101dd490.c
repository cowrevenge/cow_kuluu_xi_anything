/* f_0x101dd490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101dd490(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 == 0u) goto L_101dd4bc;
    g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101dda90u), self, 1, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x101dda90u), self, 1, 1u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101dda90u), self, 1, 4u);
    t6 = g->edx;
    wr8(self + 0x19u, 0u);
    g->edx = t6;
    return t5;
L_101dd4bc: ;
    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
        g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x101dda90u), self, 1, 2u);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x101dda90u), self, 1, 5u);
        t10 = g->edx;
        wr8(self + 0x18u, 0xffu);
        eax = t9;
        edx = t10;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dd490(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
