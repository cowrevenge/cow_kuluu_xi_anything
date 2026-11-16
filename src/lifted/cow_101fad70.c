/* f_0x101fad70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101fad70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr16(self + 0x106u, (uint16_t)((uint16_t)arg1 + rd16(self + 0x106u)));
    if ((int16_t)rd16(self + 0x106u) >= 0)
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x106u);
        if ((int16_t)eax >= 4)
        {
            wr16(self + 0x106u, 0u);
        }
    }
    else
    {
        wr16(self + 0x106u, 3u);
    }
    if ((uint32_t)(int16_t)rd16(self + 0x106u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x106u);
        goto L_101fade2;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x106u);
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_101fadc0;
    }
    eax = eax - 2u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101fadff;
    }
    eax = eax - 1u;
    eax = (eax & 0xffffff00u) | rd8(self + 0xa48u);
L_101fade8: ;
    if ((uint8_t)eax != 0u)
    {
        edx = in_edx;
        goto L_101fadff;
    }
    t2 = ((int32_t)arg1 >= 0) * 2u - 1u;
    eax = t2;
    edx = in_edx;
    loc_8 = t2;
L_101fadf8: ;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x101fad70u), eax, self, edx, 0, 1, loc_8);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101fadff: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x101fad40u), self, edx, 1, 0u);
    t6 = g->edx;
    t7 = (uint32_t)(int16_t)rd16(self + 0x106u);
    cow_fastcall(g, COW_IMG(0x101fad00u), self, t6, 1, t7);
    return;
L_101fadc0: ;
    if (rd8(self + 0x10eu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10eu);
        edx = in_edx;
        goto L_101fadff;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x10eu);
    if (rd8(self + 0x10fu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10fu);
        edx = in_edx;
        goto L_101fadff;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x10fu);
    t1 = ((int32_t)arg1 >= 0) * 2u - 1u;
    edx = t1;
    loc_8 = t1;
    goto L_101fadf8;
L_101fade2: ;
    eax = (eax & 0xffffff00u) | rd8(self + 0xa46u);
    goto L_101fade8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fad70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fad70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
